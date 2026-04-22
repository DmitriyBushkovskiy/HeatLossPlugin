// using BIMStructureMgd.DatabaseObjects;
// using HostMgd.ApplicationServices;
// using HostMgd.EditorInput;
// using Teigha.DatabaseServices;
// using Teigha.Runtime;
//
// namespace HeatLoss.NanoCadAdapter;
//
// public class Extractor
// {
//     private readonly Document _document;
//     private readonly Editor _editor;
//     
//     public Extractor(Document document)
//     {
//         _document = document;
//         // _document = Application.DocumentManager.MdiActiveDocument;
//         _editor = _document.Editor;
//     }
//     
//     // public void ExtractData()
//     // {
//     //     _nanocadSpaces = FindObjects<SpaceEntity>().ToList();
//     //     _nanocadWalls = FindObjects<LinearBuildingWall>().ToList();
//     //     _nanocadOpenings = FindObjects<BuildingOpening>().ToList();
//     //     _nanocadGrids = FindObjects<CoordinateGridRef>().ToList();
//     //     _nanocadSlabs = FindObjects<BuildingSlab>().ToList();
//     // }
//     
//     public IEnumerable<T> FindObjects<T>() where T: Entity
//     {
//         var db = _document.Database;
//
//         var tr = db.TransactionManager.StartTransaction();
//         var filter = new SelectionFilter(new[] {
//             new TypedValue((int)DxfCode.Start, RXObject.GetClass(typeof(T)).DxfName)
//         });
//         var promptResult = _editor.SelectAll(filter);
//
//         var selectionSet = promptResult.Status == PromptStatus.OK ? promptResult.Value : null;
//
//         if (selectionSet == null || selectionSet.Count < 1)
//             selectionSet = new SelectionSet();
//
//         foreach (SelectedObject selectedObject in selectionSet)
//         {
//             var dbObject = tr.GetObject(selectedObject.ObjectId, OpenMode.ForRead);
//             if (dbObject is T res)
//                 yield return res;
//         }
//         tr.Commit();
//     }
// }