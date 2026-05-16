

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for S:/TC_BA/V7_160/sources/ncauto/NCAuto.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __NCAuto_h__
#define __NCAuto_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __InanoCADApplication_FWD_DEFINED__
#define __InanoCADApplication_FWD_DEFINED__
typedef interface InanoCADApplication InanoCADApplication;

#endif 	/* __InanoCADApplication_FWD_DEFINED__ */


#ifndef __InanoCADDocuments_FWD_DEFINED__
#define __InanoCADDocuments_FWD_DEFINED__
typedef interface InanoCADDocuments InanoCADDocuments;

#endif 	/* __InanoCADDocuments_FWD_DEFINED__ */


#ifndef __InanoCADDocument_FWD_DEFINED__
#define __InanoCADDocument_FWD_DEFINED__
typedef interface InanoCADDocument InanoCADDocument;

#endif 	/* __InanoCADDocument_FWD_DEFINED__ */


#ifndef __InanoCADSelectionSets_FWD_DEFINED__
#define __InanoCADSelectionSets_FWD_DEFINED__
typedef interface InanoCADSelectionSets InanoCADSelectionSets;

#endif 	/* __InanoCADSelectionSets_FWD_DEFINED__ */


#ifndef __InanoCADSelectionSet_FWD_DEFINED__
#define __InanoCADSelectionSet_FWD_DEFINED__
typedef interface InanoCADSelectionSet InanoCADSelectionSet;

#endif 	/* __InanoCADSelectionSet_FWD_DEFINED__ */


#ifndef __InanoCADUtility_FWD_DEFINED__
#define __InanoCADUtility_FWD_DEFINED__
typedef interface InanoCADUtility InanoCADUtility;

#endif 	/* __InanoCADUtility_FWD_DEFINED__ */


#ifndef __InanoCADServices_FWD_DEFINED__
#define __InanoCADServices_FWD_DEFINED__
typedef interface InanoCADServices InanoCADServices;

#endif 	/* __InanoCADServices_FWD_DEFINED__ */


#ifndef __IParams_FWD_DEFINED__
#define __IParams_FWD_DEFINED__
typedef interface IParams IParams;

#endif 	/* __IParams_FWD_DEFINED__ */


#ifndef __InanoCADPlotArea_FWD_DEFINED__
#define __InanoCADPlotArea_FWD_DEFINED__
typedef interface InanoCADPlotArea InanoCADPlotArea;

#endif 	/* __InanoCADPlotArea_FWD_DEFINED__ */


#ifndef __InanoCADPlotArea2_FWD_DEFINED__
#define __InanoCADPlotArea2_FWD_DEFINED__
typedef interface InanoCADPlotArea2 InanoCADPlotArea2;

#endif 	/* __InanoCADPlotArea2_FWD_DEFINED__ */


#ifndef __InanoCADPlotAreas_FWD_DEFINED__
#define __InanoCADPlotAreas_FWD_DEFINED__
typedef interface InanoCADPlotAreas InanoCADPlotAreas;

#endif 	/* __InanoCADPlotAreas_FWD_DEFINED__ */


#ifndef __InanoCADPlotCustomParams_FWD_DEFINED__
#define __InanoCADPlotCustomParams_FWD_DEFINED__
typedef interface InanoCADPlotCustomParams InanoCADPlotCustomParams;

#endif 	/* __InanoCADPlotCustomParams_FWD_DEFINED__ */


#ifndef __InanoCADMenuGroups_FWD_DEFINED__
#define __InanoCADMenuGroups_FWD_DEFINED__
typedef interface InanoCADMenuGroups InanoCADMenuGroups;

#endif 	/* __InanoCADMenuGroups_FWD_DEFINED__ */


#ifndef __InanoCADMenuGroup_FWD_DEFINED__
#define __InanoCADMenuGroup_FWD_DEFINED__
typedef interface InanoCADMenuGroup InanoCADMenuGroup;

#endif 	/* __InanoCADMenuGroup_FWD_DEFINED__ */


#ifndef __InanoCADMenuBar_FWD_DEFINED__
#define __InanoCADMenuBar_FWD_DEFINED__
typedef interface InanoCADMenuBar InanoCADMenuBar;

#endif 	/* __InanoCADMenuBar_FWD_DEFINED__ */


#ifndef __InanoCADToolbars_FWD_DEFINED__
#define __InanoCADToolbars_FWD_DEFINED__
typedef interface InanoCADToolbars InanoCADToolbars;

#endif 	/* __InanoCADToolbars_FWD_DEFINED__ */


#ifndef __InanoCADToolbar_FWD_DEFINED__
#define __InanoCADToolbar_FWD_DEFINED__
typedef interface InanoCADToolbar InanoCADToolbar;

#endif 	/* __InanoCADToolbar_FWD_DEFINED__ */


#ifndef __InanoCADToolbarItem_FWD_DEFINED__
#define __InanoCADToolbarItem_FWD_DEFINED__
typedef interface InanoCADToolbarItem InanoCADToolbarItem;

#endif 	/* __InanoCADToolbarItem_FWD_DEFINED__ */


#ifndef __InanoCADPopupMenus_FWD_DEFINED__
#define __InanoCADPopupMenus_FWD_DEFINED__
typedef interface InanoCADPopupMenus InanoCADPopupMenus;

#endif 	/* __InanoCADPopupMenus_FWD_DEFINED__ */


#ifndef __InanoCADPopupMenu_FWD_DEFINED__
#define __InanoCADPopupMenu_FWD_DEFINED__
typedef interface InanoCADPopupMenu InanoCADPopupMenu;

#endif 	/* __InanoCADPopupMenu_FWD_DEFINED__ */


#ifndef __InanoCADPopupMenuItem_FWD_DEFINED__
#define __InanoCADPopupMenuItem_FWD_DEFINED__
typedef interface InanoCADPopupMenuItem InanoCADPopupMenuItem;

#endif 	/* __InanoCADPopupMenuItem_FWD_DEFINED__ */


#ifndef __InanoCADPreferences_FWD_DEFINED__
#define __InanoCADPreferences_FWD_DEFINED__
typedef interface InanoCADPreferences InanoCADPreferences;

#endif 	/* __InanoCADPreferences_FWD_DEFINED__ */


#ifndef __InanoCADPreferencesFiles_FWD_DEFINED__
#define __InanoCADPreferencesFiles_FWD_DEFINED__
typedef interface InanoCADPreferencesFiles InanoCADPreferencesFiles;

#endif 	/* __InanoCADPreferencesFiles_FWD_DEFINED__ */


#ifndef __InanoCADPreferencesDisplay_FWD_DEFINED__
#define __InanoCADPreferencesDisplay_FWD_DEFINED__
typedef interface InanoCADPreferencesDisplay InanoCADPreferencesDisplay;

#endif 	/* __InanoCADPreferencesDisplay_FWD_DEFINED__ */


#ifndef __InanoCADPreferencesOpenSave_FWD_DEFINED__
#define __InanoCADPreferencesOpenSave_FWD_DEFINED__
typedef interface InanoCADPreferencesOpenSave InanoCADPreferencesOpenSave;

#endif 	/* __InanoCADPreferencesOpenSave_FWD_DEFINED__ */


#ifndef __InanoCADPreferencesOutput_FWD_DEFINED__
#define __InanoCADPreferencesOutput_FWD_DEFINED__
typedef interface InanoCADPreferencesOutput InanoCADPreferencesOutput;

#endif 	/* __InanoCADPreferencesOutput_FWD_DEFINED__ */


#ifndef __InanoCADPreferencesSystem_FWD_DEFINED__
#define __InanoCADPreferencesSystem_FWD_DEFINED__
typedef interface InanoCADPreferencesSystem InanoCADPreferencesSystem;

#endif 	/* __InanoCADPreferencesSystem_FWD_DEFINED__ */


#ifndef __InanoCADPreferencesUser_FWD_DEFINED__
#define __InanoCADPreferencesUser_FWD_DEFINED__
typedef interface InanoCADPreferencesUser InanoCADPreferencesUser;

#endif 	/* __InanoCADPreferencesUser_FWD_DEFINED__ */


#ifndef __InanoCADPreferencesDrafting_FWD_DEFINED__
#define __InanoCADPreferencesDrafting_FWD_DEFINED__
typedef interface InanoCADPreferencesDrafting InanoCADPreferencesDrafting;

#endif 	/* __InanoCADPreferencesDrafting_FWD_DEFINED__ */


#ifndef __InanoCADPreferencesSelection_FWD_DEFINED__
#define __InanoCADPreferencesSelection_FWD_DEFINED__
typedef interface InanoCADPreferencesSelection InanoCADPreferencesSelection;

#endif 	/* __InanoCADPreferencesSelection_FWD_DEFINED__ */


#ifndef __InanoCADPreferencesProfiles_FWD_DEFINED__
#define __InanoCADPreferencesProfiles_FWD_DEFINED__
typedef interface InanoCADPreferencesProfiles InanoCADPreferencesProfiles;

#endif 	/* __InanoCADPreferencesProfiles_FWD_DEFINED__ */


#ifndef __InanoCADState_FWD_DEFINED__
#define __InanoCADState_FWD_DEFINED__
typedef interface InanoCADState InanoCADState;

#endif 	/* __InanoCADState_FWD_DEFINED__ */


#ifndef __InanoCADPlot_FWD_DEFINED__
#define __InanoCADPlot_FWD_DEFINED__
typedef interface InanoCADPlot InanoCADPlot;

#endif 	/* __InanoCADPlot_FWD_DEFINED__ */


#ifndef ___DnanoCADPlotEvents_FWD_DEFINED__
#define ___DnanoCADPlotEvents_FWD_DEFINED__
typedef interface _DnanoCADPlotEvents _DnanoCADPlotEvents;

#endif 	/* ___DnanoCADPlotEvents_FWD_DEFINED__ */


#ifndef __InanoCADPlotCustomParamsEx_FWD_DEFINED__
#define __InanoCADPlotCustomParamsEx_FWD_DEFINED__
typedef interface InanoCADPlotCustomParamsEx InanoCADPlotCustomParamsEx;

#endif 	/* __InanoCADPlotCustomParamsEx_FWD_DEFINED__ */


#ifndef ___DnanoCADDocumentEvents_FWD_DEFINED__
#define ___DnanoCADDocumentEvents_FWD_DEFINED__
typedef interface _DnanoCADDocumentEvents _DnanoCADDocumentEvents;

#endif 	/* ___DnanoCADDocumentEvents_FWD_DEFINED__ */


#ifndef ___DnanoCADApplicationEvents_FWD_DEFINED__
#define ___DnanoCADApplicationEvents_FWD_DEFINED__
typedef interface _DnanoCADApplicationEvents _DnanoCADApplicationEvents;

#endif 	/* ___DnanoCADApplicationEvents_FWD_DEFINED__ */


#ifndef __IACommand_FWD_DEFINED__
#define __IACommand_FWD_DEFINED__
typedef interface IACommand IACommand;

#endif 	/* __IACommand_FWD_DEFINED__ */


#ifndef __IALoader_FWD_DEFINED__
#define __IALoader_FWD_DEFINED__
typedef interface IALoader IALoader;

#endif 	/* __IALoader_FWD_DEFINED__ */


#ifndef __ALoader_FWD_DEFINED__
#define __ALoader_FWD_DEFINED__

#ifdef __cplusplus
typedef class ALoader ALoader;
#else
typedef struct ALoader ALoader;
#endif /* __cplusplus */

#endif 	/* __ALoader_FWD_DEFINED__ */


#ifndef __IAHelper_FWD_DEFINED__
#define __IAHelper_FWD_DEFINED__
typedef interface IAHelper IAHelper;

#endif 	/* __IAHelper_FWD_DEFINED__ */


#ifndef __AHelper_FWD_DEFINED__
#define __AHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class AHelper AHelper;
#else
typedef struct AHelper AHelper;
#endif /* __cplusplus */

#endif 	/* __AHelper_FWD_DEFINED__ */


#ifndef __IArguments_FWD_DEFINED__
#define __IArguments_FWD_DEFINED__
typedef interface IArguments IArguments;

#endif 	/* __IArguments_FWD_DEFINED__ */


#ifndef __Arguments_FWD_DEFINED__
#define __Arguments_FWD_DEFINED__

#ifdef __cplusplus
typedef class Arguments Arguments;
#else
typedef struct Arguments Arguments;
#endif /* __cplusplus */

#endif 	/* __Arguments_FWD_DEFINED__ */


#ifndef __Params_FWD_DEFINED__
#define __Params_FWD_DEFINED__

#ifdef __cplusplus
typedef class Params Params;
#else
typedef struct Params Params;
#endif /* __cplusplus */

#endif 	/* __Params_FWD_DEFINED__ */


#ifndef __IAxDbDocument_FWD_DEFINED__
#define __IAxDbDocument_FWD_DEFINED__
typedef interface IAxDbDocument IAxDbDocument;

#endif 	/* __IAxDbDocument_FWD_DEFINED__ */


#ifndef __Application_FWD_DEFINED__
#define __Application_FWD_DEFINED__

#ifdef __cplusplus
typedef class Application Application;
#else
typedef struct Application Application;
#endif /* __cplusplus */

#endif 	/* __Application_FWD_DEFINED__ */


#ifndef __Services_FWD_DEFINED__
#define __Services_FWD_DEFINED__

#ifdef __cplusplus
typedef class Services Services;
#else
typedef struct Services Services;
#endif /* __cplusplus */

#endif 	/* __Services_FWD_DEFINED__ */


#ifndef __Utility_FWD_DEFINED__
#define __Utility_FWD_DEFINED__

#ifdef __cplusplus
typedef class Utility Utility;
#else
typedef struct Utility Utility;
#endif /* __cplusplus */

#endif 	/* __Utility_FWD_DEFINED__ */


#ifndef __Documents_FWD_DEFINED__
#define __Documents_FWD_DEFINED__

#ifdef __cplusplus
typedef class Documents Documents;
#else
typedef struct Documents Documents;
#endif /* __cplusplus */

#endif 	/* __Documents_FWD_DEFINED__ */


#ifndef __Document_FWD_DEFINED__
#define __Document_FWD_DEFINED__

#ifdef __cplusplus
typedef class Document Document;
#else
typedef struct Document Document;
#endif /* __cplusplus */

#endif 	/* __Document_FWD_DEFINED__ */


#ifndef __AxDbDocument_FWD_DEFINED__
#define __AxDbDocument_FWD_DEFINED__

#ifdef __cplusplus
typedef class AxDbDocument AxDbDocument;
#else
typedef struct AxDbDocument AxDbDocument;
#endif /* __cplusplus */

#endif 	/* __AxDbDocument_FWD_DEFINED__ */


#ifndef __Plot_FWD_DEFINED__
#define __Plot_FWD_DEFINED__

#ifdef __cplusplus
typedef class Plot Plot;
#else
typedef struct Plot Plot;
#endif /* __cplusplus */

#endif 	/* __Plot_FWD_DEFINED__ */


#ifndef __PlotArea_FWD_DEFINED__
#define __PlotArea_FWD_DEFINED__

#ifdef __cplusplus
typedef class PlotArea PlotArea;
#else
typedef struct PlotArea PlotArea;
#endif /* __cplusplus */

#endif 	/* __PlotArea_FWD_DEFINED__ */


#ifndef __PlotAreas_FWD_DEFINED__
#define __PlotAreas_FWD_DEFINED__

#ifdef __cplusplus
typedef class PlotAreas PlotAreas;
#else
typedef struct PlotAreas PlotAreas;
#endif /* __cplusplus */

#endif 	/* __PlotAreas_FWD_DEFINED__ */


#ifndef __PlotCustomParams_FWD_DEFINED__
#define __PlotCustomParams_FWD_DEFINED__

#ifdef __cplusplus
typedef class PlotCustomParams PlotCustomParams;
#else
typedef struct PlotCustomParams PlotCustomParams;
#endif /* __cplusplus */

#endif 	/* __PlotCustomParams_FWD_DEFINED__ */


#ifndef __SelectionSets_FWD_DEFINED__
#define __SelectionSets_FWD_DEFINED__

#ifdef __cplusplus
typedef class SelectionSets SelectionSets;
#else
typedef struct SelectionSets SelectionSets;
#endif /* __cplusplus */

#endif 	/* __SelectionSets_FWD_DEFINED__ */


#ifndef __SelectionSet_FWD_DEFINED__
#define __SelectionSet_FWD_DEFINED__

#ifdef __cplusplus
typedef class SelectionSet SelectionSet;
#else
typedef struct SelectionSet SelectionSet;
#endif /* __cplusplus */

#endif 	/* __SelectionSet_FWD_DEFINED__ */


#ifndef __State_FWD_DEFINED__
#define __State_FWD_DEFINED__

#ifdef __cplusplus
typedef class State State;
#else
typedef struct State State;
#endif /* __cplusplus */

#endif 	/* __State_FWD_DEFINED__ */


#ifndef __IEnuVal_FWD_DEFINED__
#define __IEnuVal_FWD_DEFINED__
typedef interface IEnuVal IEnuVal;

#endif 	/* __IEnuVal_FWD_DEFINED__ */


#ifndef __EnuVal_FWD_DEFINED__
#define __EnuVal_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnuVal EnuVal;
#else
typedef struct EnuVal EnuVal;
#endif /* __cplusplus */

#endif 	/* __EnuVal_FWD_DEFINED__ */


#ifndef __MenuGroups_FWD_DEFINED__
#define __MenuGroups_FWD_DEFINED__

#ifdef __cplusplus
typedef class MenuGroups MenuGroups;
#else
typedef struct MenuGroups MenuGroups;
#endif /* __cplusplus */

#endif 	/* __MenuGroups_FWD_DEFINED__ */


#ifndef __MenuGroup_FWD_DEFINED__
#define __MenuGroup_FWD_DEFINED__

#ifdef __cplusplus
typedef class MenuGroup MenuGroup;
#else
typedef struct MenuGroup MenuGroup;
#endif /* __cplusplus */

#endif 	/* __MenuGroup_FWD_DEFINED__ */


#ifndef __Toolbars_FWD_DEFINED__
#define __Toolbars_FWD_DEFINED__

#ifdef __cplusplus
typedef class Toolbars Toolbars;
#else
typedef struct Toolbars Toolbars;
#endif /* __cplusplus */

#endif 	/* __Toolbars_FWD_DEFINED__ */


#ifndef __Toolbar_FWD_DEFINED__
#define __Toolbar_FWD_DEFINED__

#ifdef __cplusplus
typedef class Toolbar Toolbar;
#else
typedef struct Toolbar Toolbar;
#endif /* __cplusplus */

#endif 	/* __Toolbar_FWD_DEFINED__ */


#ifndef __ToolbarItem_FWD_DEFINED__
#define __ToolbarItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class ToolbarItem ToolbarItem;
#else
typedef struct ToolbarItem ToolbarItem;
#endif /* __cplusplus */

#endif 	/* __ToolbarItem_FWD_DEFINED__ */


#ifndef __MenuBar_FWD_DEFINED__
#define __MenuBar_FWD_DEFINED__

#ifdef __cplusplus
typedef class MenuBar MenuBar;
#else
typedef struct MenuBar MenuBar;
#endif /* __cplusplus */

#endif 	/* __MenuBar_FWD_DEFINED__ */


#ifndef __PopupMenu_FWD_DEFINED__
#define __PopupMenu_FWD_DEFINED__

#ifdef __cplusplus
typedef class PopupMenu PopupMenu;
#else
typedef struct PopupMenu PopupMenu;
#endif /* __cplusplus */

#endif 	/* __PopupMenu_FWD_DEFINED__ */


#ifndef __PopupMenus_FWD_DEFINED__
#define __PopupMenus_FWD_DEFINED__

#ifdef __cplusplus
typedef class PopupMenus PopupMenus;
#else
typedef struct PopupMenus PopupMenus;
#endif /* __cplusplus */

#endif 	/* __PopupMenus_FWD_DEFINED__ */


#ifndef __PopupMenuItem_FWD_DEFINED__
#define __PopupMenuItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class PopupMenuItem PopupMenuItem;
#else
typedef struct PopupMenuItem PopupMenuItem;
#endif /* __cplusplus */

#endif 	/* __PopupMenuItem_FWD_DEFINED__ */


#ifndef __Preferences_FWD_DEFINED__
#define __Preferences_FWD_DEFINED__

#ifdef __cplusplus
typedef class Preferences Preferences;
#else
typedef struct Preferences Preferences;
#endif /* __cplusplus */

#endif 	/* __Preferences_FWD_DEFINED__ */


#ifndef __PreferencesFiles_FWD_DEFINED__
#define __PreferencesFiles_FWD_DEFINED__

#ifdef __cplusplus
typedef class PreferencesFiles PreferencesFiles;
#else
typedef struct PreferencesFiles PreferencesFiles;
#endif /* __cplusplus */

#endif 	/* __PreferencesFiles_FWD_DEFINED__ */


#ifndef __PreferencesDisplay_FWD_DEFINED__
#define __PreferencesDisplay_FWD_DEFINED__

#ifdef __cplusplus
typedef class PreferencesDisplay PreferencesDisplay;
#else
typedef struct PreferencesDisplay PreferencesDisplay;
#endif /* __cplusplus */

#endif 	/* __PreferencesDisplay_FWD_DEFINED__ */


#ifndef __PreferencesProfiles_FWD_DEFINED__
#define __PreferencesProfiles_FWD_DEFINED__

#ifdef __cplusplus
typedef class PreferencesProfiles PreferencesProfiles;
#else
typedef struct PreferencesProfiles PreferencesProfiles;
#endif /* __cplusplus */

#endif 	/* __PreferencesProfiles_FWD_DEFINED__ */


#ifndef __PreferencesSelection_FWD_DEFINED__
#define __PreferencesSelection_FWD_DEFINED__

#ifdef __cplusplus
typedef class PreferencesSelection PreferencesSelection;
#else
typedef struct PreferencesSelection PreferencesSelection;
#endif /* __cplusplus */

#endif 	/* __PreferencesSelection_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "OdaX.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_NCAuto_0000_0000 */
/* [local] */ 

#define THIS_LIBIID LIBID_nanoCAD
#define THIS_LIB_VER_MAJOR 25
#define THIS_LIB_VER_MINOR 0
#define APPNAME_REG_VALUE "nanoCADx64"
#define APPNAME_UNI_REG_VALUE "nanoCAD"
#define APP_VER           "25.0"
#define THIS_APPID        "{D8222E4F-CDBE-49E9-9DFD-C99C150B59C7}"
#define TypeLIBIID_REG_VALUE "{6D7A780F-9C4C-4ABB-AD65-602564F354C0}"
#define Application_CLSID_REG_VALUE "50D8D5D2-7261-4EC2-958E-80144A334316"
#define ICAD(name)    InanoCAD##name
#define IID_ICAD(name)    IID_InanoCAD##name
#define _DIIDCAD(name) _DnanoCAD##name
#define ALOADER_CLSID   "710C6CA7-242F-4CB6-9B17-ADAA2A2F8971"
#ifndef APPNAME_UNI_REG_VALUE
#define APPNAME_UNI_REG_VALUE APPNAME_REG_VALUE
#endif


extern RPC_IF_HANDLE __MIDL_itf_NCAuto_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_NCAuto_0000_0000_v0_0_s_ifspec;


#ifndef __nanoCAD_LIBRARY_DEFINED__
#define __nanoCAD_LIBRARY_DEFINED__

/* library nanoCAD */
/* [helpstring][version][uuid] */ 

/* [uuid] */ struct  DECLSPEC_UUID("D8222E4F-CDBE-49E9-9DFD-C99C150B59C7") NCAPPID
    {
    short nil;
    } ;
/* [uuid] */ struct  DECLSPEC_UUID("D613D239-FA62-4efa-ABEC-E221E583347A") CATID_NCAUTO
    {
    short nil;
    } ;


































typedef /* [public][uuid] */  DECLSPEC_UUID("37BC0C03-8565-4a35-83CA-9F4742837F02") 
enum __MIDL___MIDL_itf_NCAuto_0000_0000_0001
    {
        odR10_dxf	= -4,
        odR12_dwg	= -3,
        odUnknown	= -1,
        odR12_dxf	= 1,
        odR13_dwg	= 4,
        odR13_dxf	= 5,
        odR14_dwg	= 8,
        odR14_dxf	= 9,
        odR15_dwg	= 12,
        odR15_dxf	= 13,
        odR15_Template	= 14,
        odNative	= 24,
        odR18_dwg	= 24,
        odR18_dxf	= 25,
        odR18_Template	= 26,
        odR21_dwg	= 36,
        odR21_dxf	= 37,
        odR21_Template	= 38,
        odR24_dwg	= 48,
        odR24_dxf	= 49,
        odR24_Template	= 50,
        odR27_dwg	= 60,
        odR27_dxf	= 61,
        odR27_Template	= 62
    } 	OdSaveAsType;



typedef /* [helpstring][uuid] */  DECLSPEC_UUID("482D3B2C-8BA6-4B63-B0E0-6E9894425061") 
enum FileExistAction
    {
        eFEA_ShowWaring	= 0,
        eFEA_Overwrite	= ( eFEA_ShowWaring + 1 ) ,
        eFEA_Renumber	= ( eFEA_Overwrite + 1 ) ,
        eFEA_Attach	= ( eFEA_Renumber + 1 ) 
    } 	FileExistAction;



typedef /* [helpstring][uuid] */  DECLSPEC_UUID("7F8A88CC-9367-43d0-9603-4C485538F086") 
enum ValueType
    {
        eCS_VT_EMPTY	= 0,
        eCS_VT_BOOL	= ( eCS_VT_EMPTY + 1 ) ,
        eCS_VT_BYTE	= ( eCS_VT_BOOL + 1 ) ,
        eCS_VT_WORD	= ( eCS_VT_BYTE + 1 ) ,
        eCS_VT_DWORD	= ( eCS_VT_WORD + 1 ) ,
        eCS_VT_INT	= ( eCS_VT_DWORD + 1 ) ,
        eCS_VT_UINT	= ( eCS_VT_INT + 1 ) ,
        eCS_VT_LONG	= ( eCS_VT_UINT + 1 ) ,
        eCS_VT_REAL	= ( eCS_VT_LONG + 1 ) ,
        eCS_VT_SREAL	= ( eCS_VT_REAL + 1 ) ,
        eCS_VT_PSTR	= ( eCS_VT_SREAL + 1 ) ,
        eCS_VT_PWSTR	= ( eCS_VT_PSTR + 1 ) ,
        eCS_VT_ETC	= ( eCS_VT_PWSTR + 1 ) ,
        eCS_VT_DEFAULT	= ( eCS_VT_ETC + 1 ) 
    } 	ValueType;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("99671E20-80F8-4801-AE21-0B130057DD5B") 
enum SerializationFormat
    {
        eST_INI	= 0,
        eST_XMLRPC	= ( eST_INI + 1 ) ,
        eST_JSON	= ( eST_XMLRPC + 1 ) 
    } 	SerializationFormat;


EXTERN_C const IID LIBID_nanoCAD;

#ifndef __InanoCADApplication_INTERFACE_DEFINED__
#define __InanoCADApplication_INTERFACE_DEFINED__

/* interface InanoCADApplication */
/* [unique][oleautomation][hidden][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_InanoCADApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("131B04FD-1ABF-4105-A809-713789256353")
    InanoCADApplication : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *Visible) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL Visible) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pAppName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Caption( 
            /* [in] */ BSTR bstrCaption) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Caption( 
            /* [retval][out] */ BSTR *bstrCaption) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveDocument( 
            /* [retval][out] */ InanoCADDocument **pActiveDoc) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveDocument( 
            /* [in] */ InanoCADDocument *pActiveDoc) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *FullName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ int *Height) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ int Height) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowLeft( 
            /* [retval][out] */ int *left) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowLeft( 
            /* [in] */ int left) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *bstrPath) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LocaleId( 
            /* [retval][out] */ long *lcid) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowTop( 
            /* [retval][out] */ int *top) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowTop( 
            /* [in] */ int top) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *bstrVer) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ int *Width) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ int Width) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_StatusId( 
            /* [in] */ IDispatch *VportObj,
            /* [retval][out] */ VARIANT_BOOL *bStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Quit( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Documents( 
            /* [retval][out] */ InanoCADDocuments **pDocuments) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowState( 
            /* [retval][out] */ AcWindowState *eWinState) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowState( 
            /* [in] */ AcWindowState eWinState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ZoomExtents( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ZoomAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ZoomCenter( 
            /* [in] */ VARIANT Center,
            /* [in] */ double Magnify) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ZoomScaled( 
            /* [in] */ double scale,
            /* [in] */ AcZoomScaleType ScaleType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ZoomWindow( 
            /* [in] */ VARIANT LowerLeft,
            /* [in] */ VARIANT UpperRight) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ZoomPickWindow( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetState( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ZoomPrevious( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ LONG_PTR *HWND) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Utility( 
            /* [retval][out] */ InanoCADUtility **pUtil) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendCommand( 
            /* [in] */ BSTR Command) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Services( 
            /* [retval][out] */ InanoCADServices **services) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AllUsersAppData( 
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurUserAppData( 
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Profile( 
            /* [retval][out] */ IParams **section) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Help( 
            /* [in] */ BSTR topic) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewParam( 
            /* [retval][out] */ IParams **param) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadModule( 
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnloadModule( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ListModules( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadArx( 
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnloadArx( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ListArx( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveDocument( 
            /* [in] */ InanoCADDocument *pActiveDoc) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Preferences( 
            /* [retval][out] */ InanoCADPreferences **pPreferences) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MenuGroups( 
            /* [retval][out] */ InanoCADMenuGroups **pMenuGroups) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MenuBar( 
            /* [retval][out] */ InanoCADMenuBar **pMenuBar) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RunMacro( 
            /* [in] */ BSTR MacroPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyProfile( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInterfaceObject( 
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ IDispatch **pObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADApplicationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADApplication * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADApplication * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADApplication * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADApplication * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADApplication * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Visible)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            InanoCADApplication * This,
            /* [retval][out] */ VARIANT_BOOL *Visible);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, put_Visible)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            InanoCADApplication * This,
            /* [in] */ VARIANT_BOOL Visible);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            InanoCADApplication * This,
            /* [retval][out] */ BSTR *pAppName);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, put_Caption)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Caption )( 
            InanoCADApplication * This,
            /* [in] */ BSTR bstrCaption);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Caption)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            InanoCADApplication * This,
            /* [retval][out] */ BSTR *bstrCaption);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADApplication * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_ActiveDocument)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveDocument )( 
            InanoCADApplication * This,
            /* [retval][out] */ InanoCADDocument **pActiveDoc);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, put_ActiveDocument)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveDocument )( 
            InanoCADApplication * This,
            /* [in] */ InanoCADDocument *pActiveDoc);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_FullName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            InanoCADApplication * This,
            /* [retval][out] */ BSTR *FullName);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Height)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            InanoCADApplication * This,
            /* [retval][out] */ int *Height);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, put_Height)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            InanoCADApplication * This,
            /* [in] */ int Height);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_WindowLeft)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowLeft )( 
            InanoCADApplication * This,
            /* [retval][out] */ int *left);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, put_WindowLeft)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowLeft )( 
            InanoCADApplication * This,
            /* [in] */ int left);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Path)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            InanoCADApplication * This,
            /* [retval][out] */ BSTR *bstrPath);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_LocaleId)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LocaleId )( 
            InanoCADApplication * This,
            /* [retval][out] */ long *lcid);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_WindowTop)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowTop )( 
            InanoCADApplication * This,
            /* [retval][out] */ int *top);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, put_WindowTop)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowTop )( 
            InanoCADApplication * This,
            /* [in] */ int top);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Version)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            InanoCADApplication * This,
            /* [retval][out] */ BSTR *bstrVer);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Width)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            InanoCADApplication * This,
            /* [retval][out] */ int *Width);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, put_Width)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            InanoCADApplication * This,
            /* [in] */ int Width);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_StatusId)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StatusId )( 
            InanoCADApplication * This,
            /* [in] */ IDispatch *VportObj,
            /* [retval][out] */ VARIANT_BOOL *bStatus);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, Update)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            InanoCADApplication * This);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, Quit)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Quit )( 
            InanoCADApplication * This);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Documents)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Documents )( 
            InanoCADApplication * This,
            /* [retval][out] */ InanoCADDocuments **pDocuments);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_WindowState)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowState )( 
            InanoCADApplication * This,
            /* [retval][out] */ AcWindowState *eWinState);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, put_WindowState)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowState )( 
            InanoCADApplication * This,
            /* [in] */ AcWindowState eWinState);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, ZoomExtents)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ZoomExtents )( 
            InanoCADApplication * This);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, ZoomAll)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ZoomAll )( 
            InanoCADApplication * This);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, ZoomCenter)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ZoomCenter )( 
            InanoCADApplication * This,
            /* [in] */ VARIANT Center,
            /* [in] */ double Magnify);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, ZoomScaled)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ZoomScaled )( 
            InanoCADApplication * This,
            /* [in] */ double scale,
            /* [in] */ AcZoomScaleType ScaleType);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, ZoomWindow)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ZoomWindow )( 
            InanoCADApplication * This,
            /* [in] */ VARIANT LowerLeft,
            /* [in] */ VARIANT UpperRight);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, ZoomPickWindow)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ZoomPickWindow )( 
            InanoCADApplication * This);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, GetState)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetState )( 
            InanoCADApplication * This,
            /* [retval][out] */ IDispatch **pVal);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, ZoomPrevious)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ZoomPrevious )( 
            InanoCADApplication * This);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_HWND)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            InanoCADApplication * This,
            /* [retval][out] */ LONG_PTR *HWND);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Utility)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            InanoCADApplication * This,
            /* [retval][out] */ InanoCADUtility **pUtil);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, SendCommand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendCommand )( 
            InanoCADApplication * This,
            /* [in] */ BSTR Command);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Services)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Services )( 
            InanoCADApplication * This,
            /* [retval][out] */ InanoCADServices **services);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_AllUsersAppData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AllUsersAppData )( 
            InanoCADApplication * This,
            /* [retval][out] */ BSTR *path);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_CurUserAppData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurUserAppData )( 
            InanoCADApplication * This,
            /* [retval][out] */ BSTR *path);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Profile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Profile )( 
            InanoCADApplication * This,
            /* [retval][out] */ IParams **section);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, Help)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Help )( 
            InanoCADApplication * This,
            /* [in] */ BSTR topic);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, NewParam)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewParam )( 
            InanoCADApplication * This,
            /* [retval][out] */ IParams **param);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, LoadModule)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadModule )( 
            InanoCADApplication * This,
            /* [in] */ BSTR path);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, UnloadModule)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnloadModule )( 
            InanoCADApplication * This,
            /* [in] */ BSTR name);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_ListModules)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ListModules )( 
            InanoCADApplication * This,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, LoadArx)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadArx )( 
            InanoCADApplication * This,
            /* [in] */ BSTR path);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, UnloadArx)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnloadArx )( 
            InanoCADApplication * This,
            /* [in] */ BSTR name);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_ListArx)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ListArx )( 
            InanoCADApplication * This,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, putref_ActiveDocument)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveDocument )( 
            InanoCADApplication * This,
            /* [in] */ InanoCADDocument *pActiveDoc);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_Preferences)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Preferences )( 
            InanoCADApplication * This,
            /* [retval][out] */ InanoCADPreferences **pPreferences);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_MenuGroups)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MenuGroups )( 
            InanoCADApplication * This,
            /* [retval][out] */ InanoCADMenuGroups **pMenuGroups);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, get_MenuBar)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MenuBar )( 
            InanoCADApplication * This,
            /* [retval][out] */ InanoCADMenuBar **pMenuBar);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, RunMacro)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RunMacro )( 
            InanoCADApplication * This,
            /* [in] */ BSTR MacroPath);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, ApplyProfile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ApplyProfile )( 
            InanoCADApplication * This);
        
        DECLSPEC_XFGVIRT(InanoCADApplication, GetInterfaceObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInterfaceObject )( 
            InanoCADApplication * This,
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ IDispatch **pObj);
        
        END_INTERFACE
    } InanoCADApplicationVtbl;

    interface InanoCADApplication
    {
        CONST_VTBL struct InanoCADApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADApplication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADApplication_get_Visible(This,Visible)	\
    ( (This)->lpVtbl -> get_Visible(This,Visible) ) 

#define InanoCADApplication_put_Visible(This,Visible)	\
    ( (This)->lpVtbl -> put_Visible(This,Visible) ) 

#define InanoCADApplication_get_Name(This,pAppName)	\
    ( (This)->lpVtbl -> get_Name(This,pAppName) ) 

#define InanoCADApplication_put_Caption(This,bstrCaption)	\
    ( (This)->lpVtbl -> put_Caption(This,bstrCaption) ) 

#define InanoCADApplication_get_Caption(This,bstrCaption)	\
    ( (This)->lpVtbl -> get_Caption(This,bstrCaption) ) 

#define InanoCADApplication_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADApplication_get_ActiveDocument(This,pActiveDoc)	\
    ( (This)->lpVtbl -> get_ActiveDocument(This,pActiveDoc) ) 

#define InanoCADApplication_put_ActiveDocument(This,pActiveDoc)	\
    ( (This)->lpVtbl -> put_ActiveDocument(This,pActiveDoc) ) 

#define InanoCADApplication_get_FullName(This,FullName)	\
    ( (This)->lpVtbl -> get_FullName(This,FullName) ) 

#define InanoCADApplication_get_Height(This,Height)	\
    ( (This)->lpVtbl -> get_Height(This,Height) ) 

#define InanoCADApplication_put_Height(This,Height)	\
    ( (This)->lpVtbl -> put_Height(This,Height) ) 

#define InanoCADApplication_get_WindowLeft(This,left)	\
    ( (This)->lpVtbl -> get_WindowLeft(This,left) ) 

#define InanoCADApplication_put_WindowLeft(This,left)	\
    ( (This)->lpVtbl -> put_WindowLeft(This,left) ) 

#define InanoCADApplication_get_Path(This,bstrPath)	\
    ( (This)->lpVtbl -> get_Path(This,bstrPath) ) 

#define InanoCADApplication_get_LocaleId(This,lcid)	\
    ( (This)->lpVtbl -> get_LocaleId(This,lcid) ) 

#define InanoCADApplication_get_WindowTop(This,top)	\
    ( (This)->lpVtbl -> get_WindowTop(This,top) ) 

#define InanoCADApplication_put_WindowTop(This,top)	\
    ( (This)->lpVtbl -> put_WindowTop(This,top) ) 

#define InanoCADApplication_get_Version(This,bstrVer)	\
    ( (This)->lpVtbl -> get_Version(This,bstrVer) ) 

#define InanoCADApplication_get_Width(This,Width)	\
    ( (This)->lpVtbl -> get_Width(This,Width) ) 

#define InanoCADApplication_put_Width(This,Width)	\
    ( (This)->lpVtbl -> put_Width(This,Width) ) 

#define InanoCADApplication_get_StatusId(This,VportObj,bStatus)	\
    ( (This)->lpVtbl -> get_StatusId(This,VportObj,bStatus) ) 

#define InanoCADApplication_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define InanoCADApplication_Quit(This)	\
    ( (This)->lpVtbl -> Quit(This) ) 

#define InanoCADApplication_get_Documents(This,pDocuments)	\
    ( (This)->lpVtbl -> get_Documents(This,pDocuments) ) 

#define InanoCADApplication_get_WindowState(This,eWinState)	\
    ( (This)->lpVtbl -> get_WindowState(This,eWinState) ) 

#define InanoCADApplication_put_WindowState(This,eWinState)	\
    ( (This)->lpVtbl -> put_WindowState(This,eWinState) ) 

#define InanoCADApplication_ZoomExtents(This)	\
    ( (This)->lpVtbl -> ZoomExtents(This) ) 

#define InanoCADApplication_ZoomAll(This)	\
    ( (This)->lpVtbl -> ZoomAll(This) ) 

#define InanoCADApplication_ZoomCenter(This,Center,Magnify)	\
    ( (This)->lpVtbl -> ZoomCenter(This,Center,Magnify) ) 

#define InanoCADApplication_ZoomScaled(This,scale,ScaleType)	\
    ( (This)->lpVtbl -> ZoomScaled(This,scale,ScaleType) ) 

#define InanoCADApplication_ZoomWindow(This,LowerLeft,UpperRight)	\
    ( (This)->lpVtbl -> ZoomWindow(This,LowerLeft,UpperRight) ) 

#define InanoCADApplication_ZoomPickWindow(This)	\
    ( (This)->lpVtbl -> ZoomPickWindow(This) ) 

#define InanoCADApplication_GetState(This,pVal)	\
    ( (This)->lpVtbl -> GetState(This,pVal) ) 

#define InanoCADApplication_ZoomPrevious(This)	\
    ( (This)->lpVtbl -> ZoomPrevious(This) ) 

#define InanoCADApplication_get_HWND(This,HWND)	\
    ( (This)->lpVtbl -> get_HWND(This,HWND) ) 

#define InanoCADApplication_get_Utility(This,pUtil)	\
    ( (This)->lpVtbl -> get_Utility(This,pUtil) ) 

#define InanoCADApplication_SendCommand(This,Command)	\
    ( (This)->lpVtbl -> SendCommand(This,Command) ) 

#define InanoCADApplication_get_Services(This,services)	\
    ( (This)->lpVtbl -> get_Services(This,services) ) 

#define InanoCADApplication_get_AllUsersAppData(This,path)	\
    ( (This)->lpVtbl -> get_AllUsersAppData(This,path) ) 

#define InanoCADApplication_get_CurUserAppData(This,path)	\
    ( (This)->lpVtbl -> get_CurUserAppData(This,path) ) 

#define InanoCADApplication_get_Profile(This,section)	\
    ( (This)->lpVtbl -> get_Profile(This,section) ) 

#define InanoCADApplication_Help(This,topic)	\
    ( (This)->lpVtbl -> Help(This,topic) ) 

#define InanoCADApplication_NewParam(This,param)	\
    ( (This)->lpVtbl -> NewParam(This,param) ) 

#define InanoCADApplication_LoadModule(This,path)	\
    ( (This)->lpVtbl -> LoadModule(This,path) ) 

#define InanoCADApplication_UnloadModule(This,name)	\
    ( (This)->lpVtbl -> UnloadModule(This,name) ) 

#define InanoCADApplication_get_ListModules(This,pVal)	\
    ( (This)->lpVtbl -> get_ListModules(This,pVal) ) 

#define InanoCADApplication_LoadArx(This,path)	\
    ( (This)->lpVtbl -> LoadArx(This,path) ) 

#define InanoCADApplication_UnloadArx(This,name)	\
    ( (This)->lpVtbl -> UnloadArx(This,name) ) 

#define InanoCADApplication_get_ListArx(This,pVal)	\
    ( (This)->lpVtbl -> get_ListArx(This,pVal) ) 

#define InanoCADApplication_putref_ActiveDocument(This,pActiveDoc)	\
    ( (This)->lpVtbl -> putref_ActiveDocument(This,pActiveDoc) ) 

#define InanoCADApplication_get_Preferences(This,pPreferences)	\
    ( (This)->lpVtbl -> get_Preferences(This,pPreferences) ) 

#define InanoCADApplication_get_MenuGroups(This,pMenuGroups)	\
    ( (This)->lpVtbl -> get_MenuGroups(This,pMenuGroups) ) 

#define InanoCADApplication_get_MenuBar(This,pMenuBar)	\
    ( (This)->lpVtbl -> get_MenuBar(This,pMenuBar) ) 

#define InanoCADApplication_RunMacro(This,MacroPath)	\
    ( (This)->lpVtbl -> RunMacro(This,MacroPath) ) 

#define InanoCADApplication_ApplyProfile(This)	\
    ( (This)->lpVtbl -> ApplyProfile(This) ) 

#define InanoCADApplication_GetInterfaceObject(This,ProgID,pObj)	\
    ( (This)->lpVtbl -> GetInterfaceObject(This,ProgID,pObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADApplication_INTERFACE_DEFINED__ */


#ifndef __InanoCADDocuments_INTERFACE_DEFINED__
#define __InanoCADDocuments_INTERFACE_DEFINED__

/* interface InanoCADDocuments */
/* [oleautomation][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_InanoCADDocuments;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B01B0F7-AE77-4066-BEB0-666DB80F3C61")
    InanoCADDocuments : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADDocument **pItem) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pEnumVariant) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [optional][in] */ VARIANT TemplateName,
            /* [retval][out] */ InanoCADDocument **pDispDoc) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR Name,
            /* [optional][in] */ VARIANT ReadOnly,
            /* [optional][in] */ VARIANT Password,
            /* [retval][out] */ InanoCADDocument **pDispDoc) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADDocumentsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADDocuments * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADDocuments * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADDocuments * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADDocuments * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADDocuments * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADDocuments * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADDocuments * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADDocuments, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            InanoCADDocuments * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADDocument **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADDocuments, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADDocuments * This,
            /* [retval][out] */ IUnknown **pEnumVariant);
        
        DECLSPEC_XFGVIRT(InanoCADDocuments, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADDocuments * This,
            /* [retval][out] */ long *Count);
        
        DECLSPEC_XFGVIRT(InanoCADDocuments, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADDocuments * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADDocuments, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            InanoCADDocuments * This,
            /* [optional][in] */ VARIANT TemplateName,
            /* [retval][out] */ InanoCADDocument **pDispDoc);
        
        DECLSPEC_XFGVIRT(InanoCADDocuments, Open)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            InanoCADDocuments * This,
            /* [in] */ BSTR Name,
            /* [optional][in] */ VARIANT ReadOnly,
            /* [optional][in] */ VARIANT Password,
            /* [retval][out] */ InanoCADDocument **pDispDoc);
        
        DECLSPEC_XFGVIRT(InanoCADDocuments, Close)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            InanoCADDocuments * This);
        
        END_INTERFACE
    } InanoCADDocumentsVtbl;

    interface InanoCADDocuments
    {
        CONST_VTBL struct InanoCADDocumentsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADDocuments_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADDocuments_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADDocuments_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADDocuments_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADDocuments_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADDocuments_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADDocuments_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADDocuments_get_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pItem) ) 

#define InanoCADDocuments_get__NewEnum(This,pEnumVariant)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pEnumVariant) ) 

#define InanoCADDocuments_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define InanoCADDocuments_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADDocuments_Add(This,TemplateName,pDispDoc)	\
    ( (This)->lpVtbl -> Add(This,TemplateName,pDispDoc) ) 

#define InanoCADDocuments_Open(This,Name,ReadOnly,Password,pDispDoc)	\
    ( (This)->lpVtbl -> Open(This,Name,ReadOnly,Password,pDispDoc) ) 

#define InanoCADDocuments_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADDocuments_INTERFACE_DEFINED__ */


#ifndef __InanoCADDocument_INTERFACE_DEFINED__
#define __InanoCADDocument_INTERFACE_DEFINED__

/* interface InanoCADDocument */
/* [oleautomation][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_InanoCADDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E65DD1F-5315-4FEA-A098-543975128D49")
    InanoCADDocument : public IAcadDatabase
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Plot( 
            /* [retval][out] */ IDispatch **pPlot) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveLayer( 
            /* [retval][out] */ IAcadLayer **pActLayer) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveLayer( 
            /* [in] */ IAcadLayer *pActLayer) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveLinetype( 
            /* [retval][out] */ IAcadLineType **pActLinetype) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveLinetype( 
            /* [in] */ IAcadLineType *pActLinetype) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveDimStyle( 
            /* [retval][out] */ IAcadDimStyle **pActDimStyle) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveDimStyle( 
            /* [in] */ IAcadDimStyle *pActDimStyle) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveTextStyle( 
            /* [retval][out] */ IAcadTextStyle **pActTextStyle) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveTextStyle( 
            /* [in] */ IAcadTextStyle *pActTextStyle) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveUCS( 
            /* [retval][out] */ IAcadUCS **pActUCS) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveUCS( 
            /* [in] */ IAcadUCS *pActUCS) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveViewport( 
            /* [retval][out] */ IAcadViewport **pActView) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveViewport( 
            /* [in] */ IAcadViewport *pActView) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActivePViewport( 
            /* [retval][out] */ IAcadPViewport **pActView) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActivePViewport( 
            /* [in] */ IAcadPViewport *pActView) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveSpace( 
            /* [retval][out] */ AcActiveSpace *ActSpace) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveSpace( 
            /* [in] */ AcActiveSpace ActSpace) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectionSets( 
            /* [retval][out] */ InanoCADSelectionSets **pSelSets) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveSelectionSet( 
            /* [retval][out] */ InanoCADSelectionSet **pSelSet) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *FullName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ObjectSnapMode( 
            /* [retval][out] */ VARIANT_BOOL *fSnapMode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ObjectSnapMode( 
            /* [in] */ VARIANT_BOOL fSnapMode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *bReadOnly) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Saved( 
            /* [retval][out] */ VARIANT_BOOL *bSaved) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MSpace( 
            /* [retval][out] */ VARIANT_BOOL *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MSpace( 
            /* [in] */ VARIANT_BOOL Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Utility( 
            /* [retval][out] */ InanoCADUtility **pUtil) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR FullName,
            /* [optional][in] */ VARIANT Password,
            /* [retval][out] */ InanoCADDocument **pDocObj) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AuditInfo( 
            /* [in] */ VARIANT_BOOL FixErr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Import( 
            /* [in] */ BSTR FileName,
            /* [in] */ VARIANT InsertionPoint,
            /* [in] */ double ScaleFactor,
            /* [retval][out] */ IDispatch **pObj) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Export( 
            /* [in] */ BSTR FileName,
            /* [in] */ BSTR Extension,
            /* [in] */ InanoCADSelectionSet *SelectionSet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( 
            /* [in] */ BSTR TemplateFileName,
            /* [retval][out] */ InanoCADDocument **pDocObj) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ BSTR FullFileName,
            /* [optional][in] */ VARIANT SaveAsType,
            /* [optional][in] */ VARIANT vSecurityParams) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Wblock( 
            /* [in] */ BSTR FileName,
            /* [in] */ InanoCADSelectionSet *SelectionSet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PurgeAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVariable( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetVariable( 
            /* [in] */ BSTR Name,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Regen( 
            /* [in] */ AcRegenType WhichViewports) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PickfirstSelectionSet( 
            /* [retval][out] */ IDispatch **pSelSet) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Active( 
            /* [retval][out] */ VARIANT_BOOL *pvbActive) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( 
            /* [optional][in] */ VARIANT SaveChanges,
            /* [optional][in] */ VARIANT FileName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowState( 
            /* [in] */ AcWindowState pWinState) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowState( 
            /* [retval][out] */ AcWindowState *pWinState) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ int pWidth) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ int *pWidth) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ int pHeight) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ int *pHeight) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveLayout( 
            /* [in] */ IAcadLayout *pLayout) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveLayout( 
            /* [retval][out] */ IAcadLayout **pLayout) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendCommand( 
            /* [in] */ BSTR Command) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ LONG_PTR *HWND) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowTitle( 
            /* [retval][out] */ BSTR *Title) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowTitle( 
            BSTR Title) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Database( 
            /* [retval][out] */ IAcadDatabase **pDatabase) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartUndoMark( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndUndoMark( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddCustomObjectToBlock( 
            /* [in] */ BSTR rxClass,
            /* [in] */ IDispatch *blk,
            /* [retval][out] */ IDispatch **ent) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveTextStyle( 
            /* [in] */ IAcadTextStyle *pActTextStyle) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveLayer( 
            /* [in] */ IAcadLayer *pActLayer) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveLinetype( 
            /* [in] */ IAcadLineType *pActLinetype) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveDimStyle( 
            /* [in] */ IAcadDimStyle *pActDimStyle) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveUCS( 
            /* [in] */ IAcadUCS *pActUCS) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveViewport( 
            /* [in] */ IAcadViewport *pActView) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActivePViewport( 
            /* [in] */ IAcadPViewport *pActView) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveLayout( 
            /* [in] */ IAcadLayout *pLayout) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADDocumentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADDocument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADDocument * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADDocument * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADDocument * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADDocument * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADDocument * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADDocument * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_ModelSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ModelSpace )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadModelSpace **pMSpace);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_PaperSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PaperSpace )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadPaperSpace **pPSpace);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Blocks)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Blocks )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadBlocks **pBlocks);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, CopyObjects)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyObjects )( 
            InanoCADDocument * This,
            /* [in] */ VARIANT Objects,
            /* [optional][in] */ VARIANT Owner,
            /* [optional][out][in] */ VARIANT *IdPairs,
            /* [retval][out] */ VARIANT *pNewObjects);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Groups)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Groups )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadGroups **pGroups);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_DimStyles)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DimStyles )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadDimStyles **pDimStyles);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Layers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Layers )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadLayers **pLayers);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Linetypes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Linetypes )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadLineTypes **pLinetypes);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Dictionaries)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Dictionaries )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadDictionaries **pDictionaries);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_RegisteredApplications)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredApplications )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadRegisteredApplications **pRegApps);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_TextStyles)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextStyles )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadTextStyles **pTextStyles);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_UserCoordinateSystems)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserCoordinateSystems )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadUCSs **pUCSs);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Views)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Views )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadViews **pViews);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Viewports)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Viewports )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadViewports **pViewports);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_ElevationModelSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ElevationModelSpace )( 
            InanoCADDocument * This,
            /* [retval][out] */ double *Elevation);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, put_ElevationModelSpace)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ElevationModelSpace )( 
            InanoCADDocument * This,
            /* [in] */ double Elevation);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_ElevationPaperSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ElevationPaperSpace )( 
            InanoCADDocument * This,
            /* [retval][out] */ double *Elevation);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, put_ElevationPaperSpace)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ElevationPaperSpace )( 
            InanoCADDocument * This,
            /* [in] */ double Elevation);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Limits)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Limits )( 
            InanoCADDocument * This,
            /* [retval][out] */ VARIANT *Limits);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, put_Limits)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Limits )( 
            InanoCADDocument * This,
            /* [in] */ VARIANT Limits);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, HandleToObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HandleToObject )( 
            InanoCADDocument * This,
            /* [in] */ BSTR Handle,
            /* [retval][out] */ IDispatch **pObj);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, ObjectIdToObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ObjectIdToObject )( 
            InanoCADDocument * This,
            /* [in] */ LONG_PTR ObjectID,
            /* [retval][out] */ IDispatch **pObj);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Layouts)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Layouts )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadLayouts **pLayouts);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_PlotConfigurations)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlotConfigurations )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadPlotConfigurations **pPlotConfigs);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Preferences)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Preferences )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadDatabasePreferences **pPref);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_FileDependencies)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileDependencies )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadFileDependencies **pFDM);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_SummaryInfo)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SummaryInfo )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadSummaryInfo **pSummaryInfo);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_SectionManager)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SectionManager )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadSectionManager **pSecMgr);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Materials)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Materials )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadMaterials **pMaterials);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Plot)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Plot )( 
            InanoCADDocument * This,
            /* [retval][out] */ IDispatch **pPlot);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActiveLayer)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveLayer )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadLayer **pActLayer);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ActiveLayer)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveLayer )( 
            InanoCADDocument * This,
            /* [in] */ IAcadLayer *pActLayer);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActiveLinetype)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveLinetype )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadLineType **pActLinetype);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ActiveLinetype)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveLinetype )( 
            InanoCADDocument * This,
            /* [in] */ IAcadLineType *pActLinetype);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActiveDimStyle)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveDimStyle )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadDimStyle **pActDimStyle);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ActiveDimStyle)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveDimStyle )( 
            InanoCADDocument * This,
            /* [in] */ IAcadDimStyle *pActDimStyle);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActiveTextStyle)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveTextStyle )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadTextStyle **pActTextStyle);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ActiveTextStyle)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveTextStyle )( 
            InanoCADDocument * This,
            /* [in] */ IAcadTextStyle *pActTextStyle);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActiveUCS)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveUCS )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadUCS **pActUCS);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ActiveUCS)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveUCS )( 
            InanoCADDocument * This,
            /* [in] */ IAcadUCS *pActUCS);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActiveViewport)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveViewport )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadViewport **pActView);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ActiveViewport)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveViewport )( 
            InanoCADDocument * This,
            /* [in] */ IAcadViewport *pActView);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActivePViewport)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActivePViewport )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadPViewport **pActView);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ActivePViewport)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActivePViewport )( 
            InanoCADDocument * This,
            /* [in] */ IAcadPViewport *pActView);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActiveSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveSpace )( 
            InanoCADDocument * This,
            /* [retval][out] */ AcActiveSpace *ActSpace);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ActiveSpace)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveSpace )( 
            InanoCADDocument * This,
            /* [in] */ AcActiveSpace ActSpace);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_SelectionSets)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectionSets )( 
            InanoCADDocument * This,
            /* [retval][out] */ InanoCADSelectionSets **pSelSets);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActiveSelectionSet)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveSelectionSet )( 
            InanoCADDocument * This,
            /* [retval][out] */ InanoCADSelectionSet **pSelSet);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_FullName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            InanoCADDocument * This,
            /* [retval][out] */ BSTR *FullName);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            InanoCADDocument * This,
            /* [retval][out] */ BSTR *Name);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Path)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            InanoCADDocument * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ObjectSnapMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectSnapMode )( 
            InanoCADDocument * This,
            /* [retval][out] */ VARIANT_BOOL *fSnapMode);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ObjectSnapMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ObjectSnapMode )( 
            InanoCADDocument * This,
            /* [in] */ VARIANT_BOOL fSnapMode);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ReadOnly)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadOnly )( 
            InanoCADDocument * This,
            /* [retval][out] */ VARIANT_BOOL *bReadOnly);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Saved)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Saved )( 
            InanoCADDocument * This,
            /* [retval][out] */ VARIANT_BOOL *bSaved);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_MSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MSpace )( 
            InanoCADDocument * This,
            /* [retval][out] */ VARIANT_BOOL *Mode);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_MSpace)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MSpace )( 
            InanoCADDocument * This,
            /* [in] */ VARIANT_BOOL Mode);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Utility)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Utility )( 
            InanoCADDocument * This,
            /* [retval][out] */ InanoCADUtility **pUtil);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, Open)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            InanoCADDocument * This,
            /* [in] */ BSTR FullName,
            /* [optional][in] */ VARIANT Password,
            /* [retval][out] */ InanoCADDocument **pDocObj);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, AuditInfo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AuditInfo )( 
            InanoCADDocument * This,
            /* [in] */ VARIANT_BOOL FixErr);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, Import)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            InanoCADDocument * This,
            /* [in] */ BSTR FileName,
            /* [in] */ VARIANT InsertionPoint,
            /* [in] */ double ScaleFactor,
            /* [retval][out] */ IDispatch **pObj);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, Export)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            InanoCADDocument * This,
            /* [in] */ BSTR FileName,
            /* [in] */ BSTR Extension,
            /* [in] */ InanoCADSelectionSet *SelectionSet);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, New)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            InanoCADDocument * This,
            /* [in] */ BSTR TemplateFileName,
            /* [retval][out] */ InanoCADDocument **pDocObj);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, Save)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            InanoCADDocument * This);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, SaveAs)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            InanoCADDocument * This,
            /* [in] */ BSTR FullFileName,
            /* [optional][in] */ VARIANT SaveAsType,
            /* [optional][in] */ VARIANT vSecurityParams);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, Wblock)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Wblock )( 
            InanoCADDocument * This,
            /* [in] */ BSTR FileName,
            /* [in] */ InanoCADSelectionSet *SelectionSet);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, PurgeAll)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PurgeAll )( 
            InanoCADDocument * This);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, GetVariable)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVariable )( 
            InanoCADDocument * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ VARIANT *Value);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, SetVariable)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetVariable )( 
            InanoCADDocument * This,
            /* [in] */ BSTR Name,
            /* [in] */ VARIANT Value);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, Regen)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Regen )( 
            InanoCADDocument * This,
            /* [in] */ AcRegenType WhichViewports);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_PickfirstSelectionSet)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PickfirstSelectionSet )( 
            InanoCADDocument * This,
            /* [retval][out] */ IDispatch **pSelSet);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Active)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Active )( 
            InanoCADDocument * This,
            /* [retval][out] */ VARIANT_BOOL *pvbActive);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, Activate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            InanoCADDocument * This);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, Close)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            InanoCADDocument * This,
            /* [optional][in] */ VARIANT SaveChanges,
            /* [optional][in] */ VARIANT FileName);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_WindowState)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowState )( 
            InanoCADDocument * This,
            /* [in] */ AcWindowState pWinState);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_WindowState)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowState )( 
            InanoCADDocument * This,
            /* [retval][out] */ AcWindowState *pWinState);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_Width)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            InanoCADDocument * This,
            /* [in] */ int pWidth);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Width)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            InanoCADDocument * This,
            /* [retval][out] */ int *pWidth);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_Height)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            InanoCADDocument * This,
            /* [in] */ int pHeight);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Height)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            InanoCADDocument * This,
            /* [retval][out] */ int *pHeight);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_ActiveLayout)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveLayout )( 
            InanoCADDocument * This,
            /* [in] */ IAcadLayout *pLayout);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_ActiveLayout)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveLayout )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadLayout **pLayout);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, SendCommand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendCommand )( 
            InanoCADDocument * This,
            /* [in] */ BSTR Command);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_HWND)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            InanoCADDocument * This,
            /* [retval][out] */ LONG_PTR *HWND);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_WindowTitle)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowTitle )( 
            InanoCADDocument * This,
            /* [retval][out] */ BSTR *Title);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, put_WindowTitle)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowTitle )( 
            InanoCADDocument * This,
            BSTR Title);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADDocument * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, get_Database)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Database )( 
            InanoCADDocument * This,
            /* [retval][out] */ IAcadDatabase **pDatabase);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, StartUndoMark)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartUndoMark )( 
            InanoCADDocument * This);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, EndUndoMark)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndUndoMark )( 
            InanoCADDocument * This);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, AddCustomObjectToBlock)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddCustomObjectToBlock )( 
            InanoCADDocument * This,
            /* [in] */ BSTR rxClass,
            /* [in] */ IDispatch *blk,
            /* [retval][out] */ IDispatch **ent);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, putref_ActiveTextStyle)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveTextStyle )( 
            InanoCADDocument * This,
            /* [in] */ IAcadTextStyle *pActTextStyle);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, putref_ActiveLayer)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveLayer )( 
            InanoCADDocument * This,
            /* [in] */ IAcadLayer *pActLayer);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, putref_ActiveLinetype)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveLinetype )( 
            InanoCADDocument * This,
            /* [in] */ IAcadLineType *pActLinetype);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, putref_ActiveDimStyle)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveDimStyle )( 
            InanoCADDocument * This,
            /* [in] */ IAcadDimStyle *pActDimStyle);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, putref_ActiveUCS)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveUCS )( 
            InanoCADDocument * This,
            /* [in] */ IAcadUCS *pActUCS);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, putref_ActiveViewport)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveViewport )( 
            InanoCADDocument * This,
            /* [in] */ IAcadViewport *pActView);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, putref_ActivePViewport)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActivePViewport )( 
            InanoCADDocument * This,
            /* [in] */ IAcadPViewport *pActView);
        
        DECLSPEC_XFGVIRT(InanoCADDocument, putref_ActiveLayout)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveLayout )( 
            InanoCADDocument * This,
            /* [in] */ IAcadLayout *pLayout);
        
        END_INTERFACE
    } InanoCADDocumentVtbl;

    interface InanoCADDocument
    {
        CONST_VTBL struct InanoCADDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADDocument_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADDocument_get_ModelSpace(This,pMSpace)	\
    ( (This)->lpVtbl -> get_ModelSpace(This,pMSpace) ) 

#define InanoCADDocument_get_PaperSpace(This,pPSpace)	\
    ( (This)->lpVtbl -> get_PaperSpace(This,pPSpace) ) 

#define InanoCADDocument_get_Blocks(This,pBlocks)	\
    ( (This)->lpVtbl -> get_Blocks(This,pBlocks) ) 

#define InanoCADDocument_CopyObjects(This,Objects,Owner,IdPairs,pNewObjects)	\
    ( (This)->lpVtbl -> CopyObjects(This,Objects,Owner,IdPairs,pNewObjects) ) 

#define InanoCADDocument_get_Groups(This,pGroups)	\
    ( (This)->lpVtbl -> get_Groups(This,pGroups) ) 

#define InanoCADDocument_get_DimStyles(This,pDimStyles)	\
    ( (This)->lpVtbl -> get_DimStyles(This,pDimStyles) ) 

#define InanoCADDocument_get_Layers(This,pLayers)	\
    ( (This)->lpVtbl -> get_Layers(This,pLayers) ) 

#define InanoCADDocument_get_Linetypes(This,pLinetypes)	\
    ( (This)->lpVtbl -> get_Linetypes(This,pLinetypes) ) 

#define InanoCADDocument_get_Dictionaries(This,pDictionaries)	\
    ( (This)->lpVtbl -> get_Dictionaries(This,pDictionaries) ) 

#define InanoCADDocument_get_RegisteredApplications(This,pRegApps)	\
    ( (This)->lpVtbl -> get_RegisteredApplications(This,pRegApps) ) 

#define InanoCADDocument_get_TextStyles(This,pTextStyles)	\
    ( (This)->lpVtbl -> get_TextStyles(This,pTextStyles) ) 

#define InanoCADDocument_get_UserCoordinateSystems(This,pUCSs)	\
    ( (This)->lpVtbl -> get_UserCoordinateSystems(This,pUCSs) ) 

#define InanoCADDocument_get_Views(This,pViews)	\
    ( (This)->lpVtbl -> get_Views(This,pViews) ) 

#define InanoCADDocument_get_Viewports(This,pViewports)	\
    ( (This)->lpVtbl -> get_Viewports(This,pViewports) ) 

#define InanoCADDocument_get_ElevationModelSpace(This,Elevation)	\
    ( (This)->lpVtbl -> get_ElevationModelSpace(This,Elevation) ) 

#define InanoCADDocument_put_ElevationModelSpace(This,Elevation)	\
    ( (This)->lpVtbl -> put_ElevationModelSpace(This,Elevation) ) 

#define InanoCADDocument_get_ElevationPaperSpace(This,Elevation)	\
    ( (This)->lpVtbl -> get_ElevationPaperSpace(This,Elevation) ) 

#define InanoCADDocument_put_ElevationPaperSpace(This,Elevation)	\
    ( (This)->lpVtbl -> put_ElevationPaperSpace(This,Elevation) ) 

#define InanoCADDocument_get_Limits(This,Limits)	\
    ( (This)->lpVtbl -> get_Limits(This,Limits) ) 

#define InanoCADDocument_put_Limits(This,Limits)	\
    ( (This)->lpVtbl -> put_Limits(This,Limits) ) 

#define InanoCADDocument_HandleToObject(This,Handle,pObj)	\
    ( (This)->lpVtbl -> HandleToObject(This,Handle,pObj) ) 

#define InanoCADDocument_ObjectIdToObject(This,ObjectID,pObj)	\
    ( (This)->lpVtbl -> ObjectIdToObject(This,ObjectID,pObj) ) 

#define InanoCADDocument_get_Layouts(This,pLayouts)	\
    ( (This)->lpVtbl -> get_Layouts(This,pLayouts) ) 

#define InanoCADDocument_get_PlotConfigurations(This,pPlotConfigs)	\
    ( (This)->lpVtbl -> get_PlotConfigurations(This,pPlotConfigs) ) 

#define InanoCADDocument_get_Preferences(This,pPref)	\
    ( (This)->lpVtbl -> get_Preferences(This,pPref) ) 

#define InanoCADDocument_get_FileDependencies(This,pFDM)	\
    ( (This)->lpVtbl -> get_FileDependencies(This,pFDM) ) 

#define InanoCADDocument_get_SummaryInfo(This,pSummaryInfo)	\
    ( (This)->lpVtbl -> get_SummaryInfo(This,pSummaryInfo) ) 

#define InanoCADDocument_get_SectionManager(This,pSecMgr)	\
    ( (This)->lpVtbl -> get_SectionManager(This,pSecMgr) ) 

#define InanoCADDocument_get_Materials(This,pMaterials)	\
    ( (This)->lpVtbl -> get_Materials(This,pMaterials) ) 


#define InanoCADDocument_get_Plot(This,pPlot)	\
    ( (This)->lpVtbl -> get_Plot(This,pPlot) ) 

#define InanoCADDocument_get_ActiveLayer(This,pActLayer)	\
    ( (This)->lpVtbl -> get_ActiveLayer(This,pActLayer) ) 

#define InanoCADDocument_put_ActiveLayer(This,pActLayer)	\
    ( (This)->lpVtbl -> put_ActiveLayer(This,pActLayer) ) 

#define InanoCADDocument_get_ActiveLinetype(This,pActLinetype)	\
    ( (This)->lpVtbl -> get_ActiveLinetype(This,pActLinetype) ) 

#define InanoCADDocument_put_ActiveLinetype(This,pActLinetype)	\
    ( (This)->lpVtbl -> put_ActiveLinetype(This,pActLinetype) ) 

#define InanoCADDocument_get_ActiveDimStyle(This,pActDimStyle)	\
    ( (This)->lpVtbl -> get_ActiveDimStyle(This,pActDimStyle) ) 

#define InanoCADDocument_put_ActiveDimStyle(This,pActDimStyle)	\
    ( (This)->lpVtbl -> put_ActiveDimStyle(This,pActDimStyle) ) 

#define InanoCADDocument_get_ActiveTextStyle(This,pActTextStyle)	\
    ( (This)->lpVtbl -> get_ActiveTextStyle(This,pActTextStyle) ) 

#define InanoCADDocument_put_ActiveTextStyle(This,pActTextStyle)	\
    ( (This)->lpVtbl -> put_ActiveTextStyle(This,pActTextStyle) ) 

#define InanoCADDocument_get_ActiveUCS(This,pActUCS)	\
    ( (This)->lpVtbl -> get_ActiveUCS(This,pActUCS) ) 

#define InanoCADDocument_put_ActiveUCS(This,pActUCS)	\
    ( (This)->lpVtbl -> put_ActiveUCS(This,pActUCS) ) 

#define InanoCADDocument_get_ActiveViewport(This,pActView)	\
    ( (This)->lpVtbl -> get_ActiveViewport(This,pActView) ) 

#define InanoCADDocument_put_ActiveViewport(This,pActView)	\
    ( (This)->lpVtbl -> put_ActiveViewport(This,pActView) ) 

#define InanoCADDocument_get_ActivePViewport(This,pActView)	\
    ( (This)->lpVtbl -> get_ActivePViewport(This,pActView) ) 

#define InanoCADDocument_put_ActivePViewport(This,pActView)	\
    ( (This)->lpVtbl -> put_ActivePViewport(This,pActView) ) 

#define InanoCADDocument_get_ActiveSpace(This,ActSpace)	\
    ( (This)->lpVtbl -> get_ActiveSpace(This,ActSpace) ) 

#define InanoCADDocument_put_ActiveSpace(This,ActSpace)	\
    ( (This)->lpVtbl -> put_ActiveSpace(This,ActSpace) ) 

#define InanoCADDocument_get_SelectionSets(This,pSelSets)	\
    ( (This)->lpVtbl -> get_SelectionSets(This,pSelSets) ) 

#define InanoCADDocument_get_ActiveSelectionSet(This,pSelSet)	\
    ( (This)->lpVtbl -> get_ActiveSelectionSet(This,pSelSet) ) 

#define InanoCADDocument_get_FullName(This,FullName)	\
    ( (This)->lpVtbl -> get_FullName(This,FullName) ) 

#define InanoCADDocument_get_Name(This,Name)	\
    ( (This)->lpVtbl -> get_Name(This,Name) ) 

#define InanoCADDocument_get_Path(This,Path)	\
    ( (This)->lpVtbl -> get_Path(This,Path) ) 

#define InanoCADDocument_get_ObjectSnapMode(This,fSnapMode)	\
    ( (This)->lpVtbl -> get_ObjectSnapMode(This,fSnapMode) ) 

#define InanoCADDocument_put_ObjectSnapMode(This,fSnapMode)	\
    ( (This)->lpVtbl -> put_ObjectSnapMode(This,fSnapMode) ) 

#define InanoCADDocument_get_ReadOnly(This,bReadOnly)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,bReadOnly) ) 

#define InanoCADDocument_get_Saved(This,bSaved)	\
    ( (This)->lpVtbl -> get_Saved(This,bSaved) ) 

#define InanoCADDocument_get_MSpace(This,Mode)	\
    ( (This)->lpVtbl -> get_MSpace(This,Mode) ) 

#define InanoCADDocument_put_MSpace(This,Mode)	\
    ( (This)->lpVtbl -> put_MSpace(This,Mode) ) 

#define InanoCADDocument_get_Utility(This,pUtil)	\
    ( (This)->lpVtbl -> get_Utility(This,pUtil) ) 

#define InanoCADDocument_Open(This,FullName,Password,pDocObj)	\
    ( (This)->lpVtbl -> Open(This,FullName,Password,pDocObj) ) 

#define InanoCADDocument_AuditInfo(This,FixErr)	\
    ( (This)->lpVtbl -> AuditInfo(This,FixErr) ) 

#define InanoCADDocument_Import(This,FileName,InsertionPoint,ScaleFactor,pObj)	\
    ( (This)->lpVtbl -> Import(This,FileName,InsertionPoint,ScaleFactor,pObj) ) 

#define InanoCADDocument_Export(This,FileName,Extension,SelectionSet)	\
    ( (This)->lpVtbl -> Export(This,FileName,Extension,SelectionSet) ) 

#define InanoCADDocument_New(This,TemplateFileName,pDocObj)	\
    ( (This)->lpVtbl -> New(This,TemplateFileName,pDocObj) ) 

#define InanoCADDocument_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define InanoCADDocument_SaveAs(This,FullFileName,SaveAsType,vSecurityParams)	\
    ( (This)->lpVtbl -> SaveAs(This,FullFileName,SaveAsType,vSecurityParams) ) 

#define InanoCADDocument_Wblock(This,FileName,SelectionSet)	\
    ( (This)->lpVtbl -> Wblock(This,FileName,SelectionSet) ) 

#define InanoCADDocument_PurgeAll(This)	\
    ( (This)->lpVtbl -> PurgeAll(This) ) 

#define InanoCADDocument_GetVariable(This,Name,Value)	\
    ( (This)->lpVtbl -> GetVariable(This,Name,Value) ) 

#define InanoCADDocument_SetVariable(This,Name,Value)	\
    ( (This)->lpVtbl -> SetVariable(This,Name,Value) ) 

#define InanoCADDocument_Regen(This,WhichViewports)	\
    ( (This)->lpVtbl -> Regen(This,WhichViewports) ) 

#define InanoCADDocument_get_PickfirstSelectionSet(This,pSelSet)	\
    ( (This)->lpVtbl -> get_PickfirstSelectionSet(This,pSelSet) ) 

#define InanoCADDocument_get_Active(This,pvbActive)	\
    ( (This)->lpVtbl -> get_Active(This,pvbActive) ) 

#define InanoCADDocument_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define InanoCADDocument_Close(This,SaveChanges,FileName)	\
    ( (This)->lpVtbl -> Close(This,SaveChanges,FileName) ) 

#define InanoCADDocument_put_WindowState(This,pWinState)	\
    ( (This)->lpVtbl -> put_WindowState(This,pWinState) ) 

#define InanoCADDocument_get_WindowState(This,pWinState)	\
    ( (This)->lpVtbl -> get_WindowState(This,pWinState) ) 

#define InanoCADDocument_put_Width(This,pWidth)	\
    ( (This)->lpVtbl -> put_Width(This,pWidth) ) 

#define InanoCADDocument_get_Width(This,pWidth)	\
    ( (This)->lpVtbl -> get_Width(This,pWidth) ) 

#define InanoCADDocument_put_Height(This,pHeight)	\
    ( (This)->lpVtbl -> put_Height(This,pHeight) ) 

#define InanoCADDocument_get_Height(This,pHeight)	\
    ( (This)->lpVtbl -> get_Height(This,pHeight) ) 

#define InanoCADDocument_put_ActiveLayout(This,pLayout)	\
    ( (This)->lpVtbl -> put_ActiveLayout(This,pLayout) ) 

#define InanoCADDocument_get_ActiveLayout(This,pLayout)	\
    ( (This)->lpVtbl -> get_ActiveLayout(This,pLayout) ) 

#define InanoCADDocument_SendCommand(This,Command)	\
    ( (This)->lpVtbl -> SendCommand(This,Command) ) 

#define InanoCADDocument_get_HWND(This,HWND)	\
    ( (This)->lpVtbl -> get_HWND(This,HWND) ) 

#define InanoCADDocument_get_WindowTitle(This,Title)	\
    ( (This)->lpVtbl -> get_WindowTitle(This,Title) ) 

#define InanoCADDocument_put_WindowTitle(This,Title)	\
    ( (This)->lpVtbl -> put_WindowTitle(This,Title) ) 

#define InanoCADDocument_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADDocument_get_Database(This,pDatabase)	\
    ( (This)->lpVtbl -> get_Database(This,pDatabase) ) 

#define InanoCADDocument_StartUndoMark(This)	\
    ( (This)->lpVtbl -> StartUndoMark(This) ) 

#define InanoCADDocument_EndUndoMark(This)	\
    ( (This)->lpVtbl -> EndUndoMark(This) ) 

#define InanoCADDocument_AddCustomObjectToBlock(This,rxClass,blk,ent)	\
    ( (This)->lpVtbl -> AddCustomObjectToBlock(This,rxClass,blk,ent) ) 

#define InanoCADDocument_putref_ActiveTextStyle(This,pActTextStyle)	\
    ( (This)->lpVtbl -> putref_ActiveTextStyle(This,pActTextStyle) ) 

#define InanoCADDocument_putref_ActiveLayer(This,pActLayer)	\
    ( (This)->lpVtbl -> putref_ActiveLayer(This,pActLayer) ) 

#define InanoCADDocument_putref_ActiveLinetype(This,pActLinetype)	\
    ( (This)->lpVtbl -> putref_ActiveLinetype(This,pActLinetype) ) 

#define InanoCADDocument_putref_ActiveDimStyle(This,pActDimStyle)	\
    ( (This)->lpVtbl -> putref_ActiveDimStyle(This,pActDimStyle) ) 

#define InanoCADDocument_putref_ActiveUCS(This,pActUCS)	\
    ( (This)->lpVtbl -> putref_ActiveUCS(This,pActUCS) ) 

#define InanoCADDocument_putref_ActiveViewport(This,pActView)	\
    ( (This)->lpVtbl -> putref_ActiveViewport(This,pActView) ) 

#define InanoCADDocument_putref_ActivePViewport(This,pActView)	\
    ( (This)->lpVtbl -> putref_ActivePViewport(This,pActView) ) 

#define InanoCADDocument_putref_ActiveLayout(This,pLayout)	\
    ( (This)->lpVtbl -> putref_ActiveLayout(This,pLayout) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADDocument_INTERFACE_DEFINED__ */


#ifndef __InanoCADSelectionSets_INTERFACE_DEFINED__
#define __InanoCADSelectionSets_INTERFACE_DEFINED__

/* interface InanoCADSelectionSets */
/* [unique][oleautomation][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_InanoCADSelectionSets;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F01626A-96CC-4FAD-ADAA-9FA7E0986FF3")
    InanoCADSelectionSets : public IDispatch
    {
    public:
        virtual /* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADSelectionSet **pItem) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ InanoCADSelectionSet **pSet) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADSelectionSetsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADSelectionSets * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADSelectionSets * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADSelectionSets * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADSelectionSets * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADSelectionSets * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADSelectionSets * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADSelectionSets * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSets, get__NewEnum)
        /* [restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADSelectionSets * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSets, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            InanoCADSelectionSets * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADSelectionSet **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSets, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADSelectionSets * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSets, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            InanoCADSelectionSets * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ InanoCADSelectionSet **pSet);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSets, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADSelectionSets * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        END_INTERFACE
    } InanoCADSelectionSetsVtbl;

    interface InanoCADSelectionSets
    {
        CONST_VTBL struct InanoCADSelectionSetsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADSelectionSets_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADSelectionSets_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADSelectionSets_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADSelectionSets_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADSelectionSets_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADSelectionSets_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADSelectionSets_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADSelectionSets_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define InanoCADSelectionSets_get_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pItem) ) 

#define InanoCADSelectionSets_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define InanoCADSelectionSets_Add(This,Name,pSet)	\
    ( (This)->lpVtbl -> Add(This,Name,pSet) ) 

#define InanoCADSelectionSets_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADSelectionSets_INTERFACE_DEFINED__ */


#ifndef __InanoCADSelectionSet_INTERFACE_DEFINED__
#define __InanoCADSelectionSet_INTERFACE_DEFINED__

/* interface InanoCADSelectionSet */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADSelectionSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35B2128F-F1AC-4536-97C5-B57CA4DC3043")
    InanoCADSelectionSet : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAcadEntity **pEntity) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Highlight( 
            /* [in] */ VARIANT_BOOL bFlag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Erase( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddItems( 
            /* [in] */ VARIANT pSelSet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItems( 
            /* [in] */ VARIANT Objects) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Select( 
            /* [in] */ AcSelect Mode,
            /* [optional][in] */ VARIANT Point1,
            /* [optional][in] */ VARIANT Point2,
            /* [optional][in] */ VARIANT FilterType,
            /* [optional][in] */ VARIANT FilterData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectAtPoint( 
            /* [in] */ VARIANT Point,
            /* [optional][in] */ VARIANT FilterType,
            /* [optional][in] */ VARIANT FilterData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectByPolygon( 
            /* [in] */ AcSelect Mode,
            /* [in] */ VARIANT PointsList,
            /* [optional][in] */ VARIANT FilterType,
            /* [optional][in] */ VARIANT FilterData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectOnScreen( 
            /* [optional][in] */ VARIANT FilterType,
            /* [optional][in] */ VARIANT FilterData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBoundingBox( 
            /* [out] */ VARIANT *MinPoint,
            /* [out] */ VARIANT *MaxPoint) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADSelectionSetVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADSelectionSet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADSelectionSet * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADSelectionSet * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADSelectionSet * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADSelectionSet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADSelectionSet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADSelectionSet * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            InanoCADSelectionSet * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IAcadEntity **pEntity);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADSelectionSet * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADSelectionSet * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            InanoCADSelectionSet * This,
            /* [retval][out] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, Highlight)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Highlight )( 
            InanoCADSelectionSet * This,
            /* [in] */ VARIANT_BOOL bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, Erase)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Erase )( 
            InanoCADSelectionSet * This);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, Update)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            InanoCADSelectionSet * This);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADSelectionSet * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, AddItems)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddItems )( 
            InanoCADSelectionSet * This,
            /* [in] */ VARIANT pSelSet);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, RemoveItems)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItems )( 
            InanoCADSelectionSet * This,
            /* [in] */ VARIANT Objects);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, Clear)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            InanoCADSelectionSet * This);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, Select)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            InanoCADSelectionSet * This,
            /* [in] */ AcSelect Mode,
            /* [optional][in] */ VARIANT Point1,
            /* [optional][in] */ VARIANT Point2,
            /* [optional][in] */ VARIANT FilterType,
            /* [optional][in] */ VARIANT FilterData);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, SelectAtPoint)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectAtPoint )( 
            InanoCADSelectionSet * This,
            /* [in] */ VARIANT Point,
            /* [optional][in] */ VARIANT FilterType,
            /* [optional][in] */ VARIANT FilterData);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, SelectByPolygon)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectByPolygon )( 
            InanoCADSelectionSet * This,
            /* [in] */ AcSelect Mode,
            /* [in] */ VARIANT PointsList,
            /* [optional][in] */ VARIANT FilterType,
            /* [optional][in] */ VARIANT FilterData);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, SelectOnScreen)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectOnScreen )( 
            InanoCADSelectionSet * This,
            /* [optional][in] */ VARIANT FilterType,
            /* [optional][in] */ VARIANT FilterData);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, Delete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            InanoCADSelectionSet * This);
        
        DECLSPEC_XFGVIRT(InanoCADSelectionSet, GetBoundingBox)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )( 
            InanoCADSelectionSet * This,
            /* [out] */ VARIANT *MinPoint,
            /* [out] */ VARIANT *MaxPoint);
        
        END_INTERFACE
    } InanoCADSelectionSetVtbl;

    interface InanoCADSelectionSet
    {
        CONST_VTBL struct InanoCADSelectionSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADSelectionSet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADSelectionSet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADSelectionSet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADSelectionSet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADSelectionSet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADSelectionSet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADSelectionSet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADSelectionSet_get_Item(This,Index,pEntity)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pEntity) ) 

#define InanoCADSelectionSet_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define InanoCADSelectionSet_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define InanoCADSelectionSet_get_Name(This,bstrName)	\
    ( (This)->lpVtbl -> get_Name(This,bstrName) ) 

#define InanoCADSelectionSet_Highlight(This,bFlag)	\
    ( (This)->lpVtbl -> Highlight(This,bFlag) ) 

#define InanoCADSelectionSet_Erase(This)	\
    ( (This)->lpVtbl -> Erase(This) ) 

#define InanoCADSelectionSet_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define InanoCADSelectionSet_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADSelectionSet_AddItems(This,pSelSet)	\
    ( (This)->lpVtbl -> AddItems(This,pSelSet) ) 

#define InanoCADSelectionSet_RemoveItems(This,Objects)	\
    ( (This)->lpVtbl -> RemoveItems(This,Objects) ) 

#define InanoCADSelectionSet_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define InanoCADSelectionSet_Select(This,Mode,Point1,Point2,FilterType,FilterData)	\
    ( (This)->lpVtbl -> Select(This,Mode,Point1,Point2,FilterType,FilterData) ) 

#define InanoCADSelectionSet_SelectAtPoint(This,Point,FilterType,FilterData)	\
    ( (This)->lpVtbl -> SelectAtPoint(This,Point,FilterType,FilterData) ) 

#define InanoCADSelectionSet_SelectByPolygon(This,Mode,PointsList,FilterType,FilterData)	\
    ( (This)->lpVtbl -> SelectByPolygon(This,Mode,PointsList,FilterType,FilterData) ) 

#define InanoCADSelectionSet_SelectOnScreen(This,FilterType,FilterData)	\
    ( (This)->lpVtbl -> SelectOnScreen(This,FilterType,FilterData) ) 

#define InanoCADSelectionSet_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define InanoCADSelectionSet_GetBoundingBox(This,MinPoint,MaxPoint)	\
    ( (This)->lpVtbl -> GetBoundingBox(This,MinPoint,MaxPoint) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADSelectionSet_INTERFACE_DEFINED__ */


#ifndef __InanoCADUtility_INTERFACE_DEFINED__
#define __InanoCADUtility_INTERFACE_DEFINED__

/* interface InanoCADUtility */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADUtility;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE21AEC0-F2BF-4419-B455-9E13A58CE45B")
    InanoCADUtility : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AngleToReal( 
            /* [in] */ BSTR Angle,
            /* [in] */ AcAngleUnits Unit,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AngleToString( 
            /* [in] */ double Angle,
            /* [in] */ AcAngleUnits Unit,
            /* [in] */ int precision,
            /* [retval][out] */ BSTR *bstrValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DistanceToReal( 
            /* [in] */ BSTR Distance,
            /* [in] */ AcUnits Unit,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RealToString( 
            /* [in] */ double Value,
            /* [in] */ AcUnits Unit,
            /* [in] */ int precision,
            /* [retval][out] */ BSTR *bstrValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TranslateCoordinates( 
            /* [in] */ VARIANT Point,
            /* [in] */ AcCoordinateSystem FromCoordSystem,
            /* [in] */ AcCoordinateSystem ToCoordSystem,
            /* [in] */ int Displacement,
            /* [optional][in] */ VARIANT OCSNormal,
            /* [retval][out] */ VARIANT *transPt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitializeUserInput( 
            /* [in] */ int Bits,
            /* [optional][in] */ VARIANT KeyWordList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInteger( 
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ int *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetReal( 
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInput( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetKeyword( 
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ BSTR *bstrKeyword) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ int HasSpaces,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ BSTR *bstrValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAngle( 
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AngleFromXAxis( 
            /* [in] */ VARIANT StartPoint,
            /* [in] */ VARIANT EndPoint,
            /* [retval][out] */ double *Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCorner( 
            /* [in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ VARIANT *corner) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDistance( 
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *dist) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOrientation( 
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPoint( 
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ VARIANT *inputPoint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PolarPoint( 
            /* [in] */ VARIANT Point,
            /* [in] */ double Angle,
            /* [in] */ double Distance,
            /* [retval][out] */ VARIANT *inputPoint) = 0;
        
        virtual /* [helpstring][vararg][id] */ HRESULT STDMETHODCALLTYPE CreateTypedArray( 
            /* [out] */ VARIANT *varArr,
            /* [in] */ int Type,
            /* [in] */ SAFEARRAY * inArgs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetEntity( 
            /* [out][in] */ VARIANT *Object,
            /* [out][in] */ VARIANT *PickedPoint,
            /* [optional][in] */ VARIANT Prompt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Prompt( 
            /* [in] */ BSTR Message) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSubEntity( 
            /* [out] */ VARIANT *Object,
            /* [out] */ VARIANT *PickedPoint,
            /* [out] */ VARIANT *transMatrix,
            /* [out] */ VARIANT *ContextData,
            /* [optional][in] */ VARIANT Prompt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsURL( 
            /* [in] */ BSTR URL,
            /* [retval][out] */ VARIANT_BOOL *IsValidURL) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRemoteFile( 
            /* [in] */ BSTR URL,
            /* [out] */ BSTR *LocalFile,
            /* [in] */ VARIANT_BOOL IgnoreCache) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutRemoteFile( 
            /* [in] */ BSTR URL,
            /* [in] */ BSTR LocalFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsRemoteFile( 
            /* [in] */ BSTR LocalFile,
            /* [out][in] */ VARIANT *URL,
            /* [retval][out] */ VARIANT_BOOL *IsDownloadedFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LaunchBrowserDialog( 
            /* [out] */ BSTR *SelectedURL,
            /* [in] */ BSTR DialogTitle,
            /* [in] */ BSTR OpenButtonCaption,
            /* [in] */ BSTR StartPageURL,
            /* [in] */ BSTR RegistryRootKey,
            /* [in] */ VARIANT_BOOL OpenButtonAlwaysEnabled,
            /* [retval][out] */ VARIANT_BOOL *success) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSafeArrayFromVector( 
            /* [in] */ VARIANT varVec,
            /* [retval][out] */ SAFEARRAY * *outArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateTypedArrayFromJSArray( 
            /* [in] */ int Type,
            /* [in] */ VARIANT varJSArray,
            /* [retval][out] */ VARIANT *outVect) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AnalyzeEnt( 
            /* [in] */ IDispatch *ent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPolyline( 
            /* [optional][in] */ VARIANT Prompt,
            /* [optional][in] */ VARIANT secondPrompt,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL closed,
            /* [retval][out] */ VARIANT *inputPoly) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Matrix4x4( 
            /* [in] */ BSTR str,
            /* [retval][out] */ VARIANT *arrayMatrix) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TranslateString( 
            /* [in] */ BSTR inStr,
            /* [retval][out] */ BSTR *outStr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ChooseFile( 
            /* [optional][in] */ BSTR title,
            /* [optional][in] */ BSTR format,
            /* [defaultvalue][optional][in] */ long flags,
            /* [optional][in] */ BSTR folder,
            /* [retval][out] */ BSTR *file) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ChooseFolder( 
            /* [optional][in] */ BSTR title,
            /* [optional][in] */ BSTR inifolder,
            /* [retval][out] */ BSTR *folder) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShellExec( 
            /* [in] */ BSTR op,
            /* [in] */ BSTR file,
            /* [optional][in] */ BSTR param,
            /* [optional][in] */ BSTR dir,
            /* [defaultvalue][optional][in] */ long flags = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewDatabase( 
            /* [retval][out] */ IAcadDatabase **pDatabase) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenDatabase( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IAcadDatabase **pDatabase) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveDatabase( 
            IAcadDatabase *pDatabase,
            /* [in] */ BSTR FullFileName,
            /* [optional][in] */ VARIANT SaveAsType,
            /* [optional][in] */ VARIANT vSecurityParams) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowMenu( 
            /* [in] */ VARIANT menu,
            /* [in] */ VARIANT x,
            /* [in] */ VARIANT y,
            /* [retval][out] */ VARIANT *result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWinNum( 
            /* [in] */ VARIANT point,
            /* [retval][out] */ long *num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CoordFromPixelToWorld( 
            /* [in] */ long num,
            /* [in] */ VARIANT point,
            /* [retval][out] */ VARIANT *ptOut) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CoordFromWorldToPixel( 
            /* [in] */ long num,
            /* [in] */ VARIANT point,
            /* [retval][out] */ VARIANT *ptOut) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectIdString( 
            /* [in] */ IDispatch *Object,
            /* [in] */ VARIANT_BOOL asHex,
            /* [retval][out] */ BSTR *string) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADUtilityVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADUtility * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADUtility * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADUtility * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADUtility * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADUtility * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADUtility * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADUtility * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, AngleToReal)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AngleToReal )( 
            InanoCADUtility * This,
            /* [in] */ BSTR Angle,
            /* [in] */ AcAngleUnits Unit,
            /* [retval][out] */ double *Value);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, AngleToString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AngleToString )( 
            InanoCADUtility * This,
            /* [in] */ double Angle,
            /* [in] */ AcAngleUnits Unit,
            /* [in] */ int precision,
            /* [retval][out] */ BSTR *bstrValue);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, DistanceToReal)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DistanceToReal )( 
            InanoCADUtility * This,
            /* [in] */ BSTR Distance,
            /* [in] */ AcUnits Unit,
            /* [retval][out] */ double *Value);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, RealToString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RealToString )( 
            InanoCADUtility * This,
            /* [in] */ double Value,
            /* [in] */ AcUnits Unit,
            /* [in] */ int precision,
            /* [retval][out] */ BSTR *bstrValue);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, TranslateCoordinates)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TranslateCoordinates )( 
            InanoCADUtility * This,
            /* [in] */ VARIANT Point,
            /* [in] */ AcCoordinateSystem FromCoordSystem,
            /* [in] */ AcCoordinateSystem ToCoordSystem,
            /* [in] */ int Displacement,
            /* [optional][in] */ VARIANT OCSNormal,
            /* [retval][out] */ VARIANT *transPt);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, InitializeUserInput)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitializeUserInput )( 
            InanoCADUtility * This,
            /* [in] */ int Bits,
            /* [optional][in] */ VARIANT KeyWordList);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetInteger)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInteger )( 
            InanoCADUtility * This,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ int *Value);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetReal)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetReal )( 
            InanoCADUtility * This,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Value);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetInput)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInput )( 
            InanoCADUtility * This,
            /* [retval][out] */ BSTR *Value);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetKeyword)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetKeyword )( 
            InanoCADUtility * This,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ BSTR *bstrKeyword);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetString )( 
            InanoCADUtility * This,
            /* [in] */ int HasSpaces,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ BSTR *bstrValue);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetAngle)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAngle )( 
            InanoCADUtility * This,
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Angle);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, AngleFromXAxis)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AngleFromXAxis )( 
            InanoCADUtility * This,
            /* [in] */ VARIANT StartPoint,
            /* [in] */ VARIANT EndPoint,
            /* [retval][out] */ double *Angle);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetCorner)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCorner )( 
            InanoCADUtility * This,
            /* [in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ VARIANT *corner);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetDistance)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDistance )( 
            InanoCADUtility * This,
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *dist);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetOrientation)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOrientation )( 
            InanoCADUtility * This,
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ double *Angle);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetPoint)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPoint )( 
            InanoCADUtility * This,
            /* [optional][in] */ VARIANT Point,
            /* [optional][in] */ VARIANT Prompt,
            /* [retval][out] */ VARIANT *inputPoint);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, PolarPoint)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PolarPoint )( 
            InanoCADUtility * This,
            /* [in] */ VARIANT Point,
            /* [in] */ double Angle,
            /* [in] */ double Distance,
            /* [retval][out] */ VARIANT *inputPoint);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, CreateTypedArray)
        /* [helpstring][vararg][id] */ HRESULT ( STDMETHODCALLTYPE *CreateTypedArray )( 
            InanoCADUtility * This,
            /* [out] */ VARIANT *varArr,
            /* [in] */ int Type,
            /* [in] */ SAFEARRAY * inArgs);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetEntity)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEntity )( 
            InanoCADUtility * This,
            /* [out][in] */ VARIANT *Object,
            /* [out][in] */ VARIANT *PickedPoint,
            /* [optional][in] */ VARIANT Prompt);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, Prompt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Prompt )( 
            InanoCADUtility * This,
            /* [in] */ BSTR Message);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetSubEntity)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSubEntity )( 
            InanoCADUtility * This,
            /* [out] */ VARIANT *Object,
            /* [out] */ VARIANT *PickedPoint,
            /* [out] */ VARIANT *transMatrix,
            /* [out] */ VARIANT *ContextData,
            /* [optional][in] */ VARIANT Prompt);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, IsURL)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsURL )( 
            InanoCADUtility * This,
            /* [in] */ BSTR URL,
            /* [retval][out] */ VARIANT_BOOL *IsValidURL);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetRemoteFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRemoteFile )( 
            InanoCADUtility * This,
            /* [in] */ BSTR URL,
            /* [out] */ BSTR *LocalFile,
            /* [in] */ VARIANT_BOOL IgnoreCache);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, PutRemoteFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutRemoteFile )( 
            InanoCADUtility * This,
            /* [in] */ BSTR URL,
            /* [in] */ BSTR LocalFile);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, IsRemoteFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsRemoteFile )( 
            InanoCADUtility * This,
            /* [in] */ BSTR LocalFile,
            /* [out][in] */ VARIANT *URL,
            /* [retval][out] */ VARIANT_BOOL *IsDownloadedFile);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, LaunchBrowserDialog)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LaunchBrowserDialog )( 
            InanoCADUtility * This,
            /* [out] */ BSTR *SelectedURL,
            /* [in] */ BSTR DialogTitle,
            /* [in] */ BSTR OpenButtonCaption,
            /* [in] */ BSTR StartPageURL,
            /* [in] */ BSTR RegistryRootKey,
            /* [in] */ VARIANT_BOOL OpenButtonAlwaysEnabled,
            /* [retval][out] */ VARIANT_BOOL *success);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, CreateSafeArrayFromVector)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSafeArrayFromVector )( 
            InanoCADUtility * This,
            /* [in] */ VARIANT varVec,
            /* [retval][out] */ SAFEARRAY * *outArray);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, CreateTypedArrayFromJSArray)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateTypedArrayFromJSArray )( 
            InanoCADUtility * This,
            /* [in] */ int Type,
            /* [in] */ VARIANT varJSArray,
            /* [retval][out] */ VARIANT *outVect);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, AnalyzeEnt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AnalyzeEnt )( 
            InanoCADUtility * This,
            /* [in] */ IDispatch *ent);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetPolyline)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPolyline )( 
            InanoCADUtility * This,
            /* [optional][in] */ VARIANT Prompt,
            /* [optional][in] */ VARIANT secondPrompt,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL closed,
            /* [retval][out] */ VARIANT *inputPoly);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, Matrix4x4)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Matrix4x4 )( 
            InanoCADUtility * This,
            /* [in] */ BSTR str,
            /* [retval][out] */ VARIANT *arrayMatrix);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, TranslateString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TranslateString )( 
            InanoCADUtility * This,
            /* [in] */ BSTR inStr,
            /* [retval][out] */ BSTR *outStr);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, ChooseFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ChooseFile )( 
            InanoCADUtility * This,
            /* [optional][in] */ BSTR title,
            /* [optional][in] */ BSTR format,
            /* [defaultvalue][optional][in] */ long flags,
            /* [optional][in] */ BSTR folder,
            /* [retval][out] */ BSTR *file);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, ChooseFolder)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ChooseFolder )( 
            InanoCADUtility * This,
            /* [optional][in] */ BSTR title,
            /* [optional][in] */ BSTR inifolder,
            /* [retval][out] */ BSTR *folder);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, ShellExec)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShellExec )( 
            InanoCADUtility * This,
            /* [in] */ BSTR op,
            /* [in] */ BSTR file,
            /* [optional][in] */ BSTR param,
            /* [optional][in] */ BSTR dir,
            /* [defaultvalue][optional][in] */ long flags);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, NewDatabase)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewDatabase )( 
            InanoCADUtility * This,
            /* [retval][out] */ IAcadDatabase **pDatabase);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, OpenDatabase)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenDatabase )( 
            InanoCADUtility * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IAcadDatabase **pDatabase);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, SaveDatabase)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveDatabase )( 
            InanoCADUtility * This,
            IAcadDatabase *pDatabase,
            /* [in] */ BSTR FullFileName,
            /* [optional][in] */ VARIANT SaveAsType,
            /* [optional][in] */ VARIANT vSecurityParams);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, ShowMenu)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowMenu )( 
            InanoCADUtility * This,
            /* [in] */ VARIANT menu,
            /* [in] */ VARIANT x,
            /* [in] */ VARIANT y,
            /* [retval][out] */ VARIANT *result);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetWinNum)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWinNum )( 
            InanoCADUtility * This,
            /* [in] */ VARIANT point,
            /* [retval][out] */ long *num);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, CoordFromPixelToWorld)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CoordFromPixelToWorld )( 
            InanoCADUtility * This,
            /* [in] */ long num,
            /* [in] */ VARIANT point,
            /* [retval][out] */ VARIANT *ptOut);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, CoordFromWorldToPixel)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CoordFromWorldToPixel )( 
            InanoCADUtility * This,
            /* [in] */ long num,
            /* [in] */ VARIANT point,
            /* [retval][out] */ VARIANT *ptOut);
        
        DECLSPEC_XFGVIRT(InanoCADUtility, GetObjectIdString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIdString )( 
            InanoCADUtility * This,
            /* [in] */ IDispatch *Object,
            /* [in] */ VARIANT_BOOL asHex,
            /* [retval][out] */ BSTR *string);
        
        END_INTERFACE
    } InanoCADUtilityVtbl;

    interface InanoCADUtility
    {
        CONST_VTBL struct InanoCADUtilityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADUtility_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADUtility_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADUtility_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADUtility_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADUtility_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADUtility_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADUtility_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADUtility_AngleToReal(This,Angle,Unit,Value)	\
    ( (This)->lpVtbl -> AngleToReal(This,Angle,Unit,Value) ) 

#define InanoCADUtility_AngleToString(This,Angle,Unit,precision,bstrValue)	\
    ( (This)->lpVtbl -> AngleToString(This,Angle,Unit,precision,bstrValue) ) 

#define InanoCADUtility_DistanceToReal(This,Distance,Unit,Value)	\
    ( (This)->lpVtbl -> DistanceToReal(This,Distance,Unit,Value) ) 

#define InanoCADUtility_RealToString(This,Value,Unit,precision,bstrValue)	\
    ( (This)->lpVtbl -> RealToString(This,Value,Unit,precision,bstrValue) ) 

#define InanoCADUtility_TranslateCoordinates(This,Point,FromCoordSystem,ToCoordSystem,Displacement,OCSNormal,transPt)	\
    ( (This)->lpVtbl -> TranslateCoordinates(This,Point,FromCoordSystem,ToCoordSystem,Displacement,OCSNormal,transPt) ) 

#define InanoCADUtility_InitializeUserInput(This,Bits,KeyWordList)	\
    ( (This)->lpVtbl -> InitializeUserInput(This,Bits,KeyWordList) ) 

#define InanoCADUtility_GetInteger(This,Prompt,Value)	\
    ( (This)->lpVtbl -> GetInteger(This,Prompt,Value) ) 

#define InanoCADUtility_GetReal(This,Prompt,Value)	\
    ( (This)->lpVtbl -> GetReal(This,Prompt,Value) ) 

#define InanoCADUtility_GetInput(This,Value)	\
    ( (This)->lpVtbl -> GetInput(This,Value) ) 

#define InanoCADUtility_GetKeyword(This,Prompt,bstrKeyword)	\
    ( (This)->lpVtbl -> GetKeyword(This,Prompt,bstrKeyword) ) 

#define InanoCADUtility_GetString(This,HasSpaces,Prompt,bstrValue)	\
    ( (This)->lpVtbl -> GetString(This,HasSpaces,Prompt,bstrValue) ) 

#define InanoCADUtility_GetAngle(This,Point,Prompt,Angle)	\
    ( (This)->lpVtbl -> GetAngle(This,Point,Prompt,Angle) ) 

#define InanoCADUtility_AngleFromXAxis(This,StartPoint,EndPoint,Angle)	\
    ( (This)->lpVtbl -> AngleFromXAxis(This,StartPoint,EndPoint,Angle) ) 

#define InanoCADUtility_GetCorner(This,Point,Prompt,corner)	\
    ( (This)->lpVtbl -> GetCorner(This,Point,Prompt,corner) ) 

#define InanoCADUtility_GetDistance(This,Point,Prompt,dist)	\
    ( (This)->lpVtbl -> GetDistance(This,Point,Prompt,dist) ) 

#define InanoCADUtility_GetOrientation(This,Point,Prompt,Angle)	\
    ( (This)->lpVtbl -> GetOrientation(This,Point,Prompt,Angle) ) 

#define InanoCADUtility_GetPoint(This,Point,Prompt,inputPoint)	\
    ( (This)->lpVtbl -> GetPoint(This,Point,Prompt,inputPoint) ) 

#define InanoCADUtility_PolarPoint(This,Point,Angle,Distance,inputPoint)	\
    ( (This)->lpVtbl -> PolarPoint(This,Point,Angle,Distance,inputPoint) ) 

#define InanoCADUtility_CreateTypedArray(This,varArr,Type,inArgs)	\
    ( (This)->lpVtbl -> CreateTypedArray(This,varArr,Type,inArgs) ) 

#define InanoCADUtility_GetEntity(This,Object,PickedPoint,Prompt)	\
    ( (This)->lpVtbl -> GetEntity(This,Object,PickedPoint,Prompt) ) 

#define InanoCADUtility_Prompt(This,Message)	\
    ( (This)->lpVtbl -> Prompt(This,Message) ) 

#define InanoCADUtility_GetSubEntity(This,Object,PickedPoint,transMatrix,ContextData,Prompt)	\
    ( (This)->lpVtbl -> GetSubEntity(This,Object,PickedPoint,transMatrix,ContextData,Prompt) ) 

#define InanoCADUtility_IsURL(This,URL,IsValidURL)	\
    ( (This)->lpVtbl -> IsURL(This,URL,IsValidURL) ) 

#define InanoCADUtility_GetRemoteFile(This,URL,LocalFile,IgnoreCache)	\
    ( (This)->lpVtbl -> GetRemoteFile(This,URL,LocalFile,IgnoreCache) ) 

#define InanoCADUtility_PutRemoteFile(This,URL,LocalFile)	\
    ( (This)->lpVtbl -> PutRemoteFile(This,URL,LocalFile) ) 

#define InanoCADUtility_IsRemoteFile(This,LocalFile,URL,IsDownloadedFile)	\
    ( (This)->lpVtbl -> IsRemoteFile(This,LocalFile,URL,IsDownloadedFile) ) 

#define InanoCADUtility_LaunchBrowserDialog(This,SelectedURL,DialogTitle,OpenButtonCaption,StartPageURL,RegistryRootKey,OpenButtonAlwaysEnabled,success)	\
    ( (This)->lpVtbl -> LaunchBrowserDialog(This,SelectedURL,DialogTitle,OpenButtonCaption,StartPageURL,RegistryRootKey,OpenButtonAlwaysEnabled,success) ) 

#define InanoCADUtility_CreateSafeArrayFromVector(This,varVec,outArray)	\
    ( (This)->lpVtbl -> CreateSafeArrayFromVector(This,varVec,outArray) ) 

#define InanoCADUtility_CreateTypedArrayFromJSArray(This,Type,varJSArray,outVect)	\
    ( (This)->lpVtbl -> CreateTypedArrayFromJSArray(This,Type,varJSArray,outVect) ) 

#define InanoCADUtility_AnalyzeEnt(This,ent)	\
    ( (This)->lpVtbl -> AnalyzeEnt(This,ent) ) 

#define InanoCADUtility_GetPolyline(This,Prompt,secondPrompt,closed,inputPoly)	\
    ( (This)->lpVtbl -> GetPolyline(This,Prompt,secondPrompt,closed,inputPoly) ) 

#define InanoCADUtility_Matrix4x4(This,str,arrayMatrix)	\
    ( (This)->lpVtbl -> Matrix4x4(This,str,arrayMatrix) ) 

#define InanoCADUtility_TranslateString(This,inStr,outStr)	\
    ( (This)->lpVtbl -> TranslateString(This,inStr,outStr) ) 

#define InanoCADUtility_ChooseFile(This,title,format,flags,folder,file)	\
    ( (This)->lpVtbl -> ChooseFile(This,title,format,flags,folder,file) ) 

#define InanoCADUtility_ChooseFolder(This,title,inifolder,folder)	\
    ( (This)->lpVtbl -> ChooseFolder(This,title,inifolder,folder) ) 

#define InanoCADUtility_ShellExec(This,op,file,param,dir,flags)	\
    ( (This)->lpVtbl -> ShellExec(This,op,file,param,dir,flags) ) 

#define InanoCADUtility_NewDatabase(This,pDatabase)	\
    ( (This)->lpVtbl -> NewDatabase(This,pDatabase) ) 

#define InanoCADUtility_OpenDatabase(This,Name,pDatabase)	\
    ( (This)->lpVtbl -> OpenDatabase(This,Name,pDatabase) ) 

#define InanoCADUtility_SaveDatabase(This,pDatabase,FullFileName,SaveAsType,vSecurityParams)	\
    ( (This)->lpVtbl -> SaveDatabase(This,pDatabase,FullFileName,SaveAsType,vSecurityParams) ) 

#define InanoCADUtility_ShowMenu(This,menu,x,y,result)	\
    ( (This)->lpVtbl -> ShowMenu(This,menu,x,y,result) ) 

#define InanoCADUtility_GetWinNum(This,point,num)	\
    ( (This)->lpVtbl -> GetWinNum(This,point,num) ) 

#define InanoCADUtility_CoordFromPixelToWorld(This,num,point,ptOut)	\
    ( (This)->lpVtbl -> CoordFromPixelToWorld(This,num,point,ptOut) ) 

#define InanoCADUtility_CoordFromWorldToPixel(This,num,point,ptOut)	\
    ( (This)->lpVtbl -> CoordFromWorldToPixel(This,num,point,ptOut) ) 

#define InanoCADUtility_GetObjectIdString(This,Object,asHex,string)	\
    ( (This)->lpVtbl -> GetObjectIdString(This,Object,asHex,string) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADUtility_INTERFACE_DEFINED__ */


#ifndef __InanoCADServices_INTERFACE_DEFINED__
#define __InanoCADServices_INTERFACE_DEFINED__

/* interface InanoCADServices */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1CAECC1-39E7-4186-BE1B-A519BB0082C7")
    InanoCADServices : public IDispatch
    {
    public:
        virtual /* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDispatch **service) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR Name,
            /* [in] */ IDispatch *service) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADServicesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADServices * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADServices * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADServices * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADServices * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADServices * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADServices * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADServices * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADServices, get__NewEnum)
        /* [restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADServices * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(InanoCADServices, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            InanoCADServices * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IDispatch **service);
        
        DECLSPEC_XFGVIRT(InanoCADServices, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADServices * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(InanoCADServices, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            InanoCADServices * This,
            /* [in] */ BSTR Name,
            /* [in] */ IDispatch *service);
        
        DECLSPEC_XFGVIRT(InanoCADServices, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            InanoCADServices * This,
            /* [in] */ BSTR Name);
        
        DECLSPEC_XFGVIRT(InanoCADServices, RemoveAll)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            InanoCADServices * This);
        
        DECLSPEC_XFGVIRT(InanoCADServices, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADServices * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        END_INTERFACE
    } InanoCADServicesVtbl;

    interface InanoCADServices
    {
        CONST_VTBL struct InanoCADServicesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADServices_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADServices_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADServices_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADServices_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADServices_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADServices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADServices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADServices_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define InanoCADServices_get_Item(This,Index,service)	\
    ( (This)->lpVtbl -> get_Item(This,Index,service) ) 

#define InanoCADServices_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define InanoCADServices_Add(This,Name,service)	\
    ( (This)->lpVtbl -> Add(This,Name,service) ) 

#define InanoCADServices_Remove(This,Name)	\
    ( (This)->lpVtbl -> Remove(This,Name) ) 

#define InanoCADServices_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define InanoCADServices_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADServices_INTERFACE_DEFINED__ */


#ifndef __IParams_INTERFACE_DEFINED__
#define __IParams_INTERFACE_DEFINED__

/* interface IParams */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IParams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FA8BB9B2-01CA-4CEC-9FC2-375AC4324DF7")
    IParams : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Section( 
            /* [in] */ BSTR path,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL create,
            /* [in] */ IParams *section) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Section( 
            /* [in] */ BSTR path,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL create,
            /* [retval][out] */ IParams **section) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Sections( 
            /* [retval][out] */ IArguments **val) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ ValueType Type,
            /* [retval][out] */ VARIANT *pValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ ValueType Type,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Values( 
            /* [retval][out] */ IArguments **val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [defaultvalue][optional][in] */ SerializationFormat format,
            /* [retval][out] */ BSTR *text) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [defaultvalue][optional][in] */ SerializationFormat format,
            /* [in] */ BSTR text) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IParamsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IParams * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IParams * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IParams * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IParams * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IParams * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IParams * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IParams * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IParams, put_Section)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Section )( 
            IParams * This,
            /* [in] */ BSTR path,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL create,
            /* [in] */ IParams *section);
        
        DECLSPEC_XFGVIRT(IParams, get_Section)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Section )( 
            IParams * This,
            /* [in] */ BSTR path,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL create,
            /* [retval][out] */ IParams **section);
        
        DECLSPEC_XFGVIRT(IParams, get_Sections)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Sections )( 
            IParams * This,
            /* [retval][out] */ IArguments **val);
        
        DECLSPEC_XFGVIRT(IParams, get_Value)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IParams * This,
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ ValueType Type,
            /* [retval][out] */ VARIANT *pValue);
        
        DECLSPEC_XFGVIRT(IParams, put_Value)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IParams * This,
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ ValueType Type,
            /* [in] */ VARIANT Value);
        
        DECLSPEC_XFGVIRT(IParams, get_Values)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Values )( 
            IParams * This,
            /* [retval][out] */ IArguments **val);
        
        DECLSPEC_XFGVIRT(IParams, get_Text)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IParams * This,
            /* [defaultvalue][optional][in] */ SerializationFormat format,
            /* [retval][out] */ BSTR *text);
        
        DECLSPEC_XFGVIRT(IParams, put_Text)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IParams * This,
            /* [defaultvalue][optional][in] */ SerializationFormat format,
            /* [in] */ BSTR text);
        
        END_INTERFACE
    } IParamsVtbl;

    interface IParams
    {
        CONST_VTBL struct IParamsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IParams_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IParams_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IParams_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IParams_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IParams_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IParams_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IParams_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IParams_put_Section(This,path,create,section)	\
    ( (This)->lpVtbl -> put_Section(This,path,create,section) ) 

#define IParams_get_Section(This,path,create,section)	\
    ( (This)->lpVtbl -> get_Section(This,path,create,section) ) 

#define IParams_get_Sections(This,val)	\
    ( (This)->lpVtbl -> get_Sections(This,val) ) 

#define IParams_get_Value(This,name,Type,pValue)	\
    ( (This)->lpVtbl -> get_Value(This,name,Type,pValue) ) 

#define IParams_put_Value(This,name,Type,Value)	\
    ( (This)->lpVtbl -> put_Value(This,name,Type,Value) ) 

#define IParams_get_Values(This,val)	\
    ( (This)->lpVtbl -> get_Values(This,val) ) 

#define IParams_get_Text(This,format,text)	\
    ( (This)->lpVtbl -> get_Text(This,format,text) ) 

#define IParams_put_Text(This,format,text)	\
    ( (This)->lpVtbl -> put_Text(This,format,text) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IParams_INTERFACE_DEFINED__ */


#ifndef __InanoCADPlotArea_INTERFACE_DEFINED__
#define __InanoCADPlotArea_INTERFACE_DEFINED__

/* interface InanoCADPlotArea */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPlotArea;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B9D0149C-39A7-4EA7-9A4A-B9B3695DDD65")
    InanoCADPlotArea : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Offset( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ptMin( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ptMin( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ptMax( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ptMax( 
            /* [in] */ VARIANT val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPlotAreaVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPlotArea * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPlotArea * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPlotArea * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPlotArea * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPlotArea * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPlotArea * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPlotArea * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, get_Offset)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            InanoCADPlotArea * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, put_Offset)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            InanoCADPlotArea * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, get_ptMin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ptMin )( 
            InanoCADPlotArea * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, put_ptMin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ptMin )( 
            InanoCADPlotArea * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, get_ptMax)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ptMax )( 
            InanoCADPlotArea * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, put_ptMax)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ptMax )( 
            InanoCADPlotArea * This,
            /* [in] */ VARIANT val);
        
        END_INTERFACE
    } InanoCADPlotAreaVtbl;

    interface InanoCADPlotArea
    {
        CONST_VTBL struct InanoCADPlotAreaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPlotArea_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPlotArea_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPlotArea_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPlotArea_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPlotArea_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPlotArea_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPlotArea_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPlotArea_get_Offset(This,val)	\
    ( (This)->lpVtbl -> get_Offset(This,val) ) 

#define InanoCADPlotArea_put_Offset(This,val)	\
    ( (This)->lpVtbl -> put_Offset(This,val) ) 

#define InanoCADPlotArea_get_ptMin(This,val)	\
    ( (This)->lpVtbl -> get_ptMin(This,val) ) 

#define InanoCADPlotArea_put_ptMin(This,val)	\
    ( (This)->lpVtbl -> put_ptMin(This,val) ) 

#define InanoCADPlotArea_get_ptMax(This,val)	\
    ( (This)->lpVtbl -> get_ptMax(This,val) ) 

#define InanoCADPlotArea_put_ptMax(This,val)	\
    ( (This)->lpVtbl -> put_ptMax(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPlotArea_INTERFACE_DEFINED__ */


#ifndef __InanoCADPlotArea2_INTERFACE_DEFINED__
#define __InanoCADPlotArea2_INTERFACE_DEFINED__

/* interface InanoCADPlotArea2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPlotArea2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A6F0556-BCE2-441A-9BD3-E4808AFB3E31")
    InanoCADPlotArea2 : public InanoCADPlotArea
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Target( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UpVector( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_UpVector( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Field( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Field( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Perspective( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Perspective( 
            /* [in] */ VARIANT_BOOL val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LensLength( 
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LensLength( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Elevation( 
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Elevation( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ViewOffset( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ViewOffset( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ptWindow1( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ptWindow1( 
            /* [in] */ VARIANT val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ptWindow2( 
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ptWindow2( 
            /* [in] */ VARIANT val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPlotArea2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPlotArea2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPlotArea2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPlotArea2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPlotArea2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPlotArea2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPlotArea2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPlotArea2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, get_Offset)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Offset )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, put_Offset)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Offset )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, get_ptMin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ptMin )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, put_ptMin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ptMin )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, get_ptMax)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ptMax )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea, put_ptMax)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ptMax )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_Position)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_Position)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_Target)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_Target)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Target )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_UpVector)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UpVector )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_UpVector)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UpVector )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_Field)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Field )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_Field)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Field )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_Perspective)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Perspective )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_Perspective)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Perspective )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_LensLength)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LensLength )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ double *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_LensLength)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LensLength )( 
            InanoCADPlotArea2 * This,
            /* [in] */ double val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_Elevation)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Elevation )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ double *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_Elevation)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Elevation )( 
            InanoCADPlotArea2 * This,
            /* [in] */ double val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_ViewOffset)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ViewOffset )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_ViewOffset)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ViewOffset )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_ptWindow1)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ptWindow1 )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_ptWindow1)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ptWindow1 )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, get_ptWindow2)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ptWindow2 )( 
            InanoCADPlotArea2 * This,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotArea2, put_ptWindow2)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ptWindow2 )( 
            InanoCADPlotArea2 * This,
            /* [in] */ VARIANT val);
        
        END_INTERFACE
    } InanoCADPlotArea2Vtbl;

    interface InanoCADPlotArea2
    {
        CONST_VTBL struct InanoCADPlotArea2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPlotArea2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPlotArea2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPlotArea2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPlotArea2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPlotArea2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPlotArea2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPlotArea2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPlotArea2_get_Offset(This,val)	\
    ( (This)->lpVtbl -> get_Offset(This,val) ) 

#define InanoCADPlotArea2_put_Offset(This,val)	\
    ( (This)->lpVtbl -> put_Offset(This,val) ) 

#define InanoCADPlotArea2_get_ptMin(This,val)	\
    ( (This)->lpVtbl -> get_ptMin(This,val) ) 

#define InanoCADPlotArea2_put_ptMin(This,val)	\
    ( (This)->lpVtbl -> put_ptMin(This,val) ) 

#define InanoCADPlotArea2_get_ptMax(This,val)	\
    ( (This)->lpVtbl -> get_ptMax(This,val) ) 

#define InanoCADPlotArea2_put_ptMax(This,val)	\
    ( (This)->lpVtbl -> put_ptMax(This,val) ) 


#define InanoCADPlotArea2_get_Position(This,val)	\
    ( (This)->lpVtbl -> get_Position(This,val) ) 

#define InanoCADPlotArea2_put_Position(This,val)	\
    ( (This)->lpVtbl -> put_Position(This,val) ) 

#define InanoCADPlotArea2_get_Target(This,val)	\
    ( (This)->lpVtbl -> get_Target(This,val) ) 

#define InanoCADPlotArea2_put_Target(This,val)	\
    ( (This)->lpVtbl -> put_Target(This,val) ) 

#define InanoCADPlotArea2_get_UpVector(This,val)	\
    ( (This)->lpVtbl -> get_UpVector(This,val) ) 

#define InanoCADPlotArea2_put_UpVector(This,val)	\
    ( (This)->lpVtbl -> put_UpVector(This,val) ) 

#define InanoCADPlotArea2_get_Field(This,val)	\
    ( (This)->lpVtbl -> get_Field(This,val) ) 

#define InanoCADPlotArea2_put_Field(This,val)	\
    ( (This)->lpVtbl -> put_Field(This,val) ) 

#define InanoCADPlotArea2_get_Perspective(This,val)	\
    ( (This)->lpVtbl -> get_Perspective(This,val) ) 

#define InanoCADPlotArea2_put_Perspective(This,val)	\
    ( (This)->lpVtbl -> put_Perspective(This,val) ) 

#define InanoCADPlotArea2_get_LensLength(This,val)	\
    ( (This)->lpVtbl -> get_LensLength(This,val) ) 

#define InanoCADPlotArea2_put_LensLength(This,val)	\
    ( (This)->lpVtbl -> put_LensLength(This,val) ) 

#define InanoCADPlotArea2_get_Elevation(This,val)	\
    ( (This)->lpVtbl -> get_Elevation(This,val) ) 

#define InanoCADPlotArea2_put_Elevation(This,val)	\
    ( (This)->lpVtbl -> put_Elevation(This,val) ) 

#define InanoCADPlotArea2_get_ViewOffset(This,val)	\
    ( (This)->lpVtbl -> get_ViewOffset(This,val) ) 

#define InanoCADPlotArea2_put_ViewOffset(This,val)	\
    ( (This)->lpVtbl -> put_ViewOffset(This,val) ) 

#define InanoCADPlotArea2_get_ptWindow1(This,val)	\
    ( (This)->lpVtbl -> get_ptWindow1(This,val) ) 

#define InanoCADPlotArea2_put_ptWindow1(This,val)	\
    ( (This)->lpVtbl -> put_ptWindow1(This,val) ) 

#define InanoCADPlotArea2_get_ptWindow2(This,val)	\
    ( (This)->lpVtbl -> get_ptWindow2(This,val) ) 

#define InanoCADPlotArea2_put_ptWindow2(This,val)	\
    ( (This)->lpVtbl -> put_ptWindow2(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPlotArea2_INTERFACE_DEFINED__ */


#ifndef __InanoCADPlotAreas_INTERFACE_DEFINED__
#define __InanoCADPlotAreas_INTERFACE_DEFINED__

/* interface InanoCADPlotAreas */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPlotAreas;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC8292AB-2D18-4382-81AA-D0ADE8125868")
    InanoCADPlotAreas : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long idx,
            /* [retval][out] */ InanoCADPlotArea **val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            VARIANT ptMin,
            VARIANT ptMax,
            /* [retval][out] */ InanoCADPlotArea **area) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPlotAreasVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPlotAreas * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPlotAreas * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPlotAreas * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPlotAreas * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPlotAreas * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPlotAreas * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPlotAreas * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPlotAreas, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            InanoCADPlotAreas * This,
            /* [in] */ long idx,
            /* [retval][out] */ InanoCADPlotArea **val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotAreas, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADPlotAreas * This,
            /* [retval][out] */ long *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotAreas, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            InanoCADPlotAreas * This,
            VARIANT ptMin,
            VARIANT ptMax,
            /* [retval][out] */ InanoCADPlotArea **area);
        
        DECLSPEC_XFGVIRT(InanoCADPlotAreas, Clear)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            InanoCADPlotAreas * This);
        
        DECLSPEC_XFGVIRT(InanoCADPlotAreas, get__NewEnum)
        /* [restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADPlotAreas * This,
            /* [retval][out] */ IUnknown **pVal);
        
        END_INTERFACE
    } InanoCADPlotAreasVtbl;

    interface InanoCADPlotAreas
    {
        CONST_VTBL struct InanoCADPlotAreasVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPlotAreas_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPlotAreas_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPlotAreas_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPlotAreas_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPlotAreas_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPlotAreas_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPlotAreas_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPlotAreas_get_Item(This,idx,val)	\
    ( (This)->lpVtbl -> get_Item(This,idx,val) ) 

#define InanoCADPlotAreas_get_Count(This,val)	\
    ( (This)->lpVtbl -> get_Count(This,val) ) 

#define InanoCADPlotAreas_Add(This,ptMin,ptMax,area)	\
    ( (This)->lpVtbl -> Add(This,ptMin,ptMax,area) ) 

#define InanoCADPlotAreas_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define InanoCADPlotAreas_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPlotAreas_INTERFACE_DEFINED__ */


#ifndef __InanoCADPlotCustomParams_INTERFACE_DEFINED__
#define __InanoCADPlotCustomParams_INTERFACE_DEFINED__

/* interface InanoCADPlotCustomParams */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPlotCustomParams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7F6A2837-6F25-4556-A68C-9E01D1033ECE")
    InanoCADPlotCustomParams : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Params( 
            /* [retval][out] */ IParams **param) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Params( 
            /* [in] */ IParams *param) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_Params( 
            /* [in] */ IParams *param) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ColorMode( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ColorMode( 
            /* [in] */ VARIANT_BOOL val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrinterDPI( 
            /* [retval][out] */ long *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrinterDPI( 
            /* [in] */ long val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UsePrefinedNames( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_UsePrefinedNames( 
            /* [in] */ VARIANT_BOOL val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IfFileExist( 
            /* [retval][out] */ FileExistAction *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IfFileExist( 
            /* [in] */ FileExistAction val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RunPDFApp( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RunPDFApp( 
            /* [in] */ VARIANT_BOOL val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UseDWGPath( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_UseDWGPath( 
            /* [in] */ VARIANT_BOOL val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileFolder( 
            /* [retval][out] */ BSTR *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileFolder( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileMask( 
            /* [retval][out] */ BSTR *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileMask( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PlotToFile( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PlotToFile( 
            /* [in] */ VARIANT_BOOL val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Multipage( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Multipage( 
            /* [in] */ VARIANT_BOOL val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InflateWidth( 
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InflateWidth( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Alignment( 
            /* [retval][out] */ long *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Alignment( 
            /* [in] */ long val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PaperOutMargins( 
            /* [retval][out] */ long *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PaperOutMargins( 
            /* [in] */ long val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PlotAreas( 
            /* [retval][out] */ InanoCADPlotAreas **val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPlotCustomParamsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPlotCustomParams * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPlotCustomParams * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPlotCustomParams * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPlotCustomParams * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_Params)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Params )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ IParams **param);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_Params)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Params )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ IParams *param);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, putref_Params)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_Params )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ IParams *param);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_ColorMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorMode )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_ColorMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorMode )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_PrinterDPI)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterDPI )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ long *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_PrinterDPI)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterDPI )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ long val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_UsePrefinedNames)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UsePrefinedNames )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_UsePrefinedNames)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UsePrefinedNames )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_IfFileExist)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IfFileExist )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ FileExistAction *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_IfFileExist)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IfFileExist )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ FileExistAction val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_RunPDFApp)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunPDFApp )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_RunPDFApp)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunPDFApp )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_UseDWGPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseDWGPath )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_UseDWGPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseDWGPath )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_FileFolder)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileFolder )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ BSTR *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_FileFolder)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileFolder )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ BSTR val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_FileMask)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileMask )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ BSTR *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_FileMask)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileMask )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ BSTR val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_PlotToFile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlotToFile )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_PlotToFile)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PlotToFile )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_Multipage)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Multipage )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_Multipage)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Multipage )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_InflateWidth)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InflateWidth )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ double *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_InflateWidth)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InflateWidth )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ double val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_Alignment)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Alignment )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ long *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_Alignment)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Alignment )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ long val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_PaperOutMargins)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PaperOutMargins )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ long *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_PaperOutMargins)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PaperOutMargins )( 
            InanoCADPlotCustomParams * This,
            /* [in] */ long val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_PlotAreas)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlotAreas )( 
            InanoCADPlotCustomParams * This,
            /* [retval][out] */ InanoCADPlotAreas **val);
        
        END_INTERFACE
    } InanoCADPlotCustomParamsVtbl;

    interface InanoCADPlotCustomParams
    {
        CONST_VTBL struct InanoCADPlotCustomParamsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPlotCustomParams_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPlotCustomParams_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPlotCustomParams_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPlotCustomParams_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPlotCustomParams_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPlotCustomParams_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPlotCustomParams_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPlotCustomParams_get_Params(This,param)	\
    ( (This)->lpVtbl -> get_Params(This,param) ) 

#define InanoCADPlotCustomParams_put_Params(This,param)	\
    ( (This)->lpVtbl -> put_Params(This,param) ) 

#define InanoCADPlotCustomParams_putref_Params(This,param)	\
    ( (This)->lpVtbl -> putref_Params(This,param) ) 

#define InanoCADPlotCustomParams_get_ColorMode(This,val)	\
    ( (This)->lpVtbl -> get_ColorMode(This,val) ) 

#define InanoCADPlotCustomParams_put_ColorMode(This,val)	\
    ( (This)->lpVtbl -> put_ColorMode(This,val) ) 

#define InanoCADPlotCustomParams_get_PrinterDPI(This,val)	\
    ( (This)->lpVtbl -> get_PrinterDPI(This,val) ) 

#define InanoCADPlotCustomParams_put_PrinterDPI(This,val)	\
    ( (This)->lpVtbl -> put_PrinterDPI(This,val) ) 

#define InanoCADPlotCustomParams_get_UsePrefinedNames(This,val)	\
    ( (This)->lpVtbl -> get_UsePrefinedNames(This,val) ) 

#define InanoCADPlotCustomParams_put_UsePrefinedNames(This,val)	\
    ( (This)->lpVtbl -> put_UsePrefinedNames(This,val) ) 

#define InanoCADPlotCustomParams_get_IfFileExist(This,val)	\
    ( (This)->lpVtbl -> get_IfFileExist(This,val) ) 

#define InanoCADPlotCustomParams_put_IfFileExist(This,val)	\
    ( (This)->lpVtbl -> put_IfFileExist(This,val) ) 

#define InanoCADPlotCustomParams_get_RunPDFApp(This,val)	\
    ( (This)->lpVtbl -> get_RunPDFApp(This,val) ) 

#define InanoCADPlotCustomParams_put_RunPDFApp(This,val)	\
    ( (This)->lpVtbl -> put_RunPDFApp(This,val) ) 

#define InanoCADPlotCustomParams_get_UseDWGPath(This,val)	\
    ( (This)->lpVtbl -> get_UseDWGPath(This,val) ) 

#define InanoCADPlotCustomParams_put_UseDWGPath(This,val)	\
    ( (This)->lpVtbl -> put_UseDWGPath(This,val) ) 

#define InanoCADPlotCustomParams_get_FileFolder(This,val)	\
    ( (This)->lpVtbl -> get_FileFolder(This,val) ) 

#define InanoCADPlotCustomParams_put_FileFolder(This,val)	\
    ( (This)->lpVtbl -> put_FileFolder(This,val) ) 

#define InanoCADPlotCustomParams_get_FileMask(This,val)	\
    ( (This)->lpVtbl -> get_FileMask(This,val) ) 

#define InanoCADPlotCustomParams_put_FileMask(This,val)	\
    ( (This)->lpVtbl -> put_FileMask(This,val) ) 

#define InanoCADPlotCustomParams_get_PlotToFile(This,val)	\
    ( (This)->lpVtbl -> get_PlotToFile(This,val) ) 

#define InanoCADPlotCustomParams_put_PlotToFile(This,val)	\
    ( (This)->lpVtbl -> put_PlotToFile(This,val) ) 

#define InanoCADPlotCustomParams_get_Multipage(This,val)	\
    ( (This)->lpVtbl -> get_Multipage(This,val) ) 

#define InanoCADPlotCustomParams_put_Multipage(This,val)	\
    ( (This)->lpVtbl -> put_Multipage(This,val) ) 

#define InanoCADPlotCustomParams_get_InflateWidth(This,val)	\
    ( (This)->lpVtbl -> get_InflateWidth(This,val) ) 

#define InanoCADPlotCustomParams_put_InflateWidth(This,val)	\
    ( (This)->lpVtbl -> put_InflateWidth(This,val) ) 

#define InanoCADPlotCustomParams_get_Alignment(This,val)	\
    ( (This)->lpVtbl -> get_Alignment(This,val) ) 

#define InanoCADPlotCustomParams_put_Alignment(This,val)	\
    ( (This)->lpVtbl -> put_Alignment(This,val) ) 

#define InanoCADPlotCustomParams_get_PaperOutMargins(This,val)	\
    ( (This)->lpVtbl -> get_PaperOutMargins(This,val) ) 

#define InanoCADPlotCustomParams_put_PaperOutMargins(This,val)	\
    ( (This)->lpVtbl -> put_PaperOutMargins(This,val) ) 

#define InanoCADPlotCustomParams_get_PlotAreas(This,val)	\
    ( (This)->lpVtbl -> get_PlotAreas(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPlotCustomParams_INTERFACE_DEFINED__ */


#ifndef __InanoCADMenuGroups_INTERFACE_DEFINED__
#define __InanoCADMenuGroups_INTERFACE_DEFINED__

/* interface InanoCADMenuGroups */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADMenuGroups;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A51795BA-B7B1-4BBA-BE05-95D9837EB6D4")
    InanoCADMenuGroups : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADMenuGroup **pItem) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pEnumVariant) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ InanoCADApplication **pParent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR MenuFileName,
            /* [optional][in] */ VARIANT BaseMenu,
            /* [retval][out] */ InanoCADMenuGroup **pMenuGroup) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADMenuGroupsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADMenuGroups * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADMenuGroups * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADMenuGroups * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADMenuGroups * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADMenuGroups * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADMenuGroups * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADMenuGroups * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroups, Item)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            InanoCADMenuGroups * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADMenuGroup **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroups, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADMenuGroups * This,
            /* [retval][out] */ IUnknown **pEnumVariant);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroups, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADMenuGroups * This,
            /* [retval][out] */ long *Count);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroups, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADMenuGroups * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroups, get_Parent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            InanoCADMenuGroups * This,
            /* [retval][out] */ InanoCADApplication **pParent);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroups, Load)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            InanoCADMenuGroups * This,
            /* [in] */ BSTR MenuFileName,
            /* [optional][in] */ VARIANT BaseMenu,
            /* [retval][out] */ InanoCADMenuGroup **pMenuGroup);
        
        END_INTERFACE
    } InanoCADMenuGroupsVtbl;

    interface InanoCADMenuGroups
    {
        CONST_VTBL struct InanoCADMenuGroupsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADMenuGroups_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADMenuGroups_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADMenuGroups_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADMenuGroups_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADMenuGroups_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADMenuGroups_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADMenuGroups_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADMenuGroups_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> Item(This,Index,pItem) ) 

#define InanoCADMenuGroups_get__NewEnum(This,pEnumVariant)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pEnumVariant) ) 

#define InanoCADMenuGroups_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define InanoCADMenuGroups_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADMenuGroups_get_Parent(This,pParent)	\
    ( (This)->lpVtbl -> get_Parent(This,pParent) ) 

#define InanoCADMenuGroups_Load(This,MenuFileName,BaseMenu,pMenuGroup)	\
    ( (This)->lpVtbl -> Load(This,MenuFileName,BaseMenu,pMenuGroup) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADMenuGroups_INTERFACE_DEFINED__ */


#ifndef __InanoCADMenuGroup_INTERFACE_DEFINED__
#define __InanoCADMenuGroup_INTERFACE_DEFINED__

/* interface InanoCADMenuGroup */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADMenuGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CB911746-FAE9-4BB2-8033-38CCA84EB9CE")
    InanoCADMenuGroup : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ InanoCADMenuGroups **pParent) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ AcMenuGroupType *menuType) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MenuFileName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Menus( 
            /* [retval][out] */ InanoCADPopupMenus **pMenus) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Toolbars( 
            /* [retval][out] */ InanoCADToolbars **pToolbars) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Unload( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ AcMenuFileType MenuFileType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ BSTR MenuFileName,
            /* [in] */ AcMenuFileType MenuFileType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADMenuGroupVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADMenuGroup * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADMenuGroup * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADMenuGroup * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADMenuGroup * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADMenuGroup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADMenuGroup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADMenuGroup * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADMenuGroup * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, get_Parent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            InanoCADMenuGroup * This,
            /* [retval][out] */ InanoCADMenuGroups **pParent);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            InanoCADMenuGroup * This,
            /* [retval][out] */ BSTR *Name);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, get_Type)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            InanoCADMenuGroup * This,
            /* [retval][out] */ AcMenuGroupType *menuType);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, get_MenuFileName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MenuFileName )( 
            InanoCADMenuGroup * This,
            /* [retval][out] */ BSTR *Name);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, get_Menus)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Menus )( 
            InanoCADMenuGroup * This,
            /* [retval][out] */ InanoCADPopupMenus **pMenus);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, get_Toolbars)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Toolbars )( 
            InanoCADMenuGroup * This,
            /* [retval][out] */ InanoCADToolbars **pToolbars);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, Unload)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Unload )( 
            InanoCADMenuGroup * This);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, Save)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            InanoCADMenuGroup * This,
            /* [in] */ AcMenuFileType MenuFileType);
        
        DECLSPEC_XFGVIRT(InanoCADMenuGroup, SaveAs)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            InanoCADMenuGroup * This,
            /* [in] */ BSTR MenuFileName,
            /* [in] */ AcMenuFileType MenuFileType);
        
        END_INTERFACE
    } InanoCADMenuGroupVtbl;

    interface InanoCADMenuGroup
    {
        CONST_VTBL struct InanoCADMenuGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADMenuGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADMenuGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADMenuGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADMenuGroup_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADMenuGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADMenuGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADMenuGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADMenuGroup_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADMenuGroup_get_Parent(This,pParent)	\
    ( (This)->lpVtbl -> get_Parent(This,pParent) ) 

#define InanoCADMenuGroup_get_Name(This,Name)	\
    ( (This)->lpVtbl -> get_Name(This,Name) ) 

#define InanoCADMenuGroup_get_Type(This,menuType)	\
    ( (This)->lpVtbl -> get_Type(This,menuType) ) 

#define InanoCADMenuGroup_get_MenuFileName(This,Name)	\
    ( (This)->lpVtbl -> get_MenuFileName(This,Name) ) 

#define InanoCADMenuGroup_get_Menus(This,pMenus)	\
    ( (This)->lpVtbl -> get_Menus(This,pMenus) ) 

#define InanoCADMenuGroup_get_Toolbars(This,pToolbars)	\
    ( (This)->lpVtbl -> get_Toolbars(This,pToolbars) ) 

#define InanoCADMenuGroup_Unload(This)	\
    ( (This)->lpVtbl -> Unload(This) ) 

#define InanoCADMenuGroup_Save(This,MenuFileType)	\
    ( (This)->lpVtbl -> Save(This,MenuFileType) ) 

#define InanoCADMenuGroup_SaveAs(This,MenuFileName,MenuFileType)	\
    ( (This)->lpVtbl -> SaveAs(This,MenuFileName,MenuFileType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADMenuGroup_INTERFACE_DEFINED__ */


#ifndef __InanoCADMenuBar_INTERFACE_DEFINED__
#define __InanoCADMenuBar_INTERFACE_DEFINED__

/* interface InanoCADMenuBar */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADMenuBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4CF095BC-83C4-4057-91A7-28678F698AE9")
    InanoCADMenuBar : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADPopupMenu **pItem) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pEnumVariant) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ InanoCADApplication **pParent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADMenuBarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADMenuBar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADMenuBar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADMenuBar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADMenuBar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADMenuBar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADMenuBar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADMenuBar * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADMenuBar, Item)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            InanoCADMenuBar * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADPopupMenu **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADMenuBar, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADMenuBar * This,
            /* [retval][out] */ IUnknown **pEnumVariant);
        
        DECLSPEC_XFGVIRT(InanoCADMenuBar, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADMenuBar * This,
            /* [retval][out] */ long *Count);
        
        DECLSPEC_XFGVIRT(InanoCADMenuBar, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADMenuBar * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADMenuBar, get_Parent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            InanoCADMenuBar * This,
            /* [retval][out] */ InanoCADApplication **pParent);
        
        END_INTERFACE
    } InanoCADMenuBarVtbl;

    interface InanoCADMenuBar
    {
        CONST_VTBL struct InanoCADMenuBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADMenuBar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADMenuBar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADMenuBar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADMenuBar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADMenuBar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADMenuBar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADMenuBar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADMenuBar_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> Item(This,Index,pItem) ) 

#define InanoCADMenuBar_get__NewEnum(This,pEnumVariant)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pEnumVariant) ) 

#define InanoCADMenuBar_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define InanoCADMenuBar_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADMenuBar_get_Parent(This,pParent)	\
    ( (This)->lpVtbl -> get_Parent(This,pParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADMenuBar_INTERFACE_DEFINED__ */


#ifndef __InanoCADToolbars_INTERFACE_DEFINED__
#define __InanoCADToolbars_INTERFACE_DEFINED__

/* interface InanoCADToolbars */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADToolbars;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B59AA50-8E12-471B-AA2A-40B1910B5DB7")
    InanoCADToolbars : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADToolbar **pItem) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pEnumVariant) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ InanoCADMenuGroup **pParent) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LargeButtons( 
            /* [retval][out] */ VARIANT_BOOL *bFlag) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LargeButtons( 
            /* [in] */ VARIANT_BOOL bFlag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR ToolbarName,
            /* [retval][out] */ InanoCADToolbar **pTlbar) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADToolbarsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADToolbars * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADToolbars * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADToolbars * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADToolbars * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADToolbars * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADToolbars * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADToolbars * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADToolbars, Item)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            InanoCADToolbars * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADToolbar **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADToolbars, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADToolbars * This,
            /* [retval][out] */ IUnknown **pEnumVariant);
        
        DECLSPEC_XFGVIRT(InanoCADToolbars, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADToolbars * This,
            /* [retval][out] */ long *Count);
        
        DECLSPEC_XFGVIRT(InanoCADToolbars, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADToolbars * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADToolbars, get_Parent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            InanoCADToolbars * This,
            /* [retval][out] */ InanoCADMenuGroup **pParent);
        
        DECLSPEC_XFGVIRT(InanoCADToolbars, get_LargeButtons)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LargeButtons )( 
            InanoCADToolbars * This,
            /* [retval][out] */ VARIANT_BOOL *bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADToolbars, put_LargeButtons)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LargeButtons )( 
            InanoCADToolbars * This,
            /* [in] */ VARIANT_BOOL bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADToolbars, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            InanoCADToolbars * This,
            /* [in] */ BSTR ToolbarName,
            /* [retval][out] */ InanoCADToolbar **pTlbar);
        
        END_INTERFACE
    } InanoCADToolbarsVtbl;

    interface InanoCADToolbars
    {
        CONST_VTBL struct InanoCADToolbarsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADToolbars_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADToolbars_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADToolbars_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADToolbars_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADToolbars_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADToolbars_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADToolbars_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADToolbars_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> Item(This,Index,pItem) ) 

#define InanoCADToolbars_get__NewEnum(This,pEnumVariant)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pEnumVariant) ) 

#define InanoCADToolbars_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define InanoCADToolbars_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADToolbars_get_Parent(This,pParent)	\
    ( (This)->lpVtbl -> get_Parent(This,pParent) ) 

#define InanoCADToolbars_get_LargeButtons(This,bFlag)	\
    ( (This)->lpVtbl -> get_LargeButtons(This,bFlag) ) 

#define InanoCADToolbars_put_LargeButtons(This,bFlag)	\
    ( (This)->lpVtbl -> put_LargeButtons(This,bFlag) ) 

#define InanoCADToolbars_Add(This,ToolbarName,pTlbar)	\
    ( (This)->lpVtbl -> Add(This,ToolbarName,pTlbar) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADToolbars_INTERFACE_DEFINED__ */


#ifndef __InanoCADToolbar_INTERFACE_DEFINED__
#define __InanoCADToolbar_INTERFACE_DEFINED__

/* interface InanoCADToolbar */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADToolbar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("650D6A34-59A7-42EB-B9E3-4D1171BEA3C1")
    InanoCADToolbar : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADToolbarItem **pItem) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pEnumVariant) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **pParent) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *bFlag) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL bFlag) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DockStatus( 
            /* [retval][out] */ AcToolbarDockStatus *nStatus) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LargeButtons( 
            /* [retval][out] */ VARIANT_BOOL *bFlag) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ int *nLeft) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ int nLeft) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ int *nTop) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ int nTop) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ int *nWidth) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ int *nHeight) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FloatingRows( 
            /* [retval][out] */ int *nRows) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FloatingRows( 
            /* [in] */ int nRows) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HelpString( 
            /* [retval][out] */ BSTR *bstrHelp) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HelpString( 
            /* [in] */ BSTR bstrHelp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddToolbarButton( 
            /* [in] */ VARIANT Index,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR HelpString,
            /* [in] */ BSTR Macro,
            /* [optional][in] */ VARIANT FlyoutButton,
            /* [retval][out] */ InanoCADToolbarItem **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSeparator( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADToolbarItem **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Dock( 
            /* [in] */ AcToolbarDockStatus Side) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Float( 
            /* [in] */ int top,
            /* [in] */ int left,
            /* [in] */ int NumberFloatRows) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TagString( 
            /* [retval][out] */ BSTR *bstrTag) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADToolbarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADToolbar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADToolbar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADToolbar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADToolbar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADToolbar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADToolbar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADToolbar * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, Item)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            InanoCADToolbar * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADToolbarItem **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADToolbar * This,
            /* [retval][out] */ IUnknown **pEnumVariant);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADToolbar * This,
            /* [retval][out] */ long *Count);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADToolbar * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_Parent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            InanoCADToolbar * This,
            /* [retval][out] */ IDispatch **pParent);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            InanoCADToolbar * This,
            /* [retval][out] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            InanoCADToolbar * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_Visible)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            InanoCADToolbar * This,
            /* [retval][out] */ VARIANT_BOOL *bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, put_Visible)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            InanoCADToolbar * This,
            /* [in] */ VARIANT_BOOL bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_DockStatus)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DockStatus )( 
            InanoCADToolbar * This,
            /* [retval][out] */ AcToolbarDockStatus *nStatus);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_LargeButtons)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LargeButtons )( 
            InanoCADToolbar * This,
            /* [retval][out] */ VARIANT_BOOL *bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_Left)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            InanoCADToolbar * This,
            /* [retval][out] */ int *nLeft);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, put_Left)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Left )( 
            InanoCADToolbar * This,
            /* [in] */ int nLeft);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_Top)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            InanoCADToolbar * This,
            /* [retval][out] */ int *nTop);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, put_Top)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Top )( 
            InanoCADToolbar * This,
            /* [in] */ int nTop);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_Width)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            InanoCADToolbar * This,
            /* [retval][out] */ int *nWidth);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_Height)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            InanoCADToolbar * This,
            /* [retval][out] */ int *nHeight);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_FloatingRows)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FloatingRows )( 
            InanoCADToolbar * This,
            /* [retval][out] */ int *nRows);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, put_FloatingRows)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FloatingRows )( 
            InanoCADToolbar * This,
            /* [in] */ int nRows);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_HelpString)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpString )( 
            InanoCADToolbar * This,
            /* [retval][out] */ BSTR *bstrHelp);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, put_HelpString)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HelpString )( 
            InanoCADToolbar * This,
            /* [in] */ BSTR bstrHelp);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, AddToolbarButton)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddToolbarButton )( 
            InanoCADToolbar * This,
            /* [in] */ VARIANT Index,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR HelpString,
            /* [in] */ BSTR Macro,
            /* [optional][in] */ VARIANT FlyoutButton,
            /* [retval][out] */ InanoCADToolbarItem **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, AddSeparator)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSeparator )( 
            InanoCADToolbar * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADToolbarItem **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, Dock)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Dock )( 
            InanoCADToolbar * This,
            /* [in] */ AcToolbarDockStatus Side);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, Float)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Float )( 
            InanoCADToolbar * This,
            /* [in] */ int top,
            /* [in] */ int left,
            /* [in] */ int NumberFloatRows);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, Delete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            InanoCADToolbar * This);
        
        DECLSPEC_XFGVIRT(InanoCADToolbar, get_TagString)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TagString )( 
            InanoCADToolbar * This,
            /* [retval][out] */ BSTR *bstrTag);
        
        END_INTERFACE
    } InanoCADToolbarVtbl;

    interface InanoCADToolbar
    {
        CONST_VTBL struct InanoCADToolbarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADToolbar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADToolbar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADToolbar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADToolbar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADToolbar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADToolbar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADToolbar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADToolbar_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> Item(This,Index,pItem) ) 

#define InanoCADToolbar_get__NewEnum(This,pEnumVariant)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pEnumVariant) ) 

#define InanoCADToolbar_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define InanoCADToolbar_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADToolbar_get_Parent(This,pParent)	\
    ( (This)->lpVtbl -> get_Parent(This,pParent) ) 

#define InanoCADToolbar_get_Name(This,bstrName)	\
    ( (This)->lpVtbl -> get_Name(This,bstrName) ) 

#define InanoCADToolbar_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define InanoCADToolbar_get_Visible(This,bFlag)	\
    ( (This)->lpVtbl -> get_Visible(This,bFlag) ) 

#define InanoCADToolbar_put_Visible(This,bFlag)	\
    ( (This)->lpVtbl -> put_Visible(This,bFlag) ) 

#define InanoCADToolbar_get_DockStatus(This,nStatus)	\
    ( (This)->lpVtbl -> get_DockStatus(This,nStatus) ) 

#define InanoCADToolbar_get_LargeButtons(This,bFlag)	\
    ( (This)->lpVtbl -> get_LargeButtons(This,bFlag) ) 

#define InanoCADToolbar_get_Left(This,nLeft)	\
    ( (This)->lpVtbl -> get_Left(This,nLeft) ) 

#define InanoCADToolbar_put_Left(This,nLeft)	\
    ( (This)->lpVtbl -> put_Left(This,nLeft) ) 

#define InanoCADToolbar_get_Top(This,nTop)	\
    ( (This)->lpVtbl -> get_Top(This,nTop) ) 

#define InanoCADToolbar_put_Top(This,nTop)	\
    ( (This)->lpVtbl -> put_Top(This,nTop) ) 

#define InanoCADToolbar_get_Width(This,nWidth)	\
    ( (This)->lpVtbl -> get_Width(This,nWidth) ) 

#define InanoCADToolbar_get_Height(This,nHeight)	\
    ( (This)->lpVtbl -> get_Height(This,nHeight) ) 

#define InanoCADToolbar_get_FloatingRows(This,nRows)	\
    ( (This)->lpVtbl -> get_FloatingRows(This,nRows) ) 

#define InanoCADToolbar_put_FloatingRows(This,nRows)	\
    ( (This)->lpVtbl -> put_FloatingRows(This,nRows) ) 

#define InanoCADToolbar_get_HelpString(This,bstrHelp)	\
    ( (This)->lpVtbl -> get_HelpString(This,bstrHelp) ) 

#define InanoCADToolbar_put_HelpString(This,bstrHelp)	\
    ( (This)->lpVtbl -> put_HelpString(This,bstrHelp) ) 

#define InanoCADToolbar_AddToolbarButton(This,Index,Name,HelpString,Macro,FlyoutButton,pItem)	\
    ( (This)->lpVtbl -> AddToolbarButton(This,Index,Name,HelpString,Macro,FlyoutButton,pItem) ) 

#define InanoCADToolbar_AddSeparator(This,Index,pItem)	\
    ( (This)->lpVtbl -> AddSeparator(This,Index,pItem) ) 

#define InanoCADToolbar_Dock(This,Side)	\
    ( (This)->lpVtbl -> Dock(This,Side) ) 

#define InanoCADToolbar_Float(This,top,left,NumberFloatRows)	\
    ( (This)->lpVtbl -> Float(This,top,left,NumberFloatRows) ) 

#define InanoCADToolbar_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define InanoCADToolbar_get_TagString(This,bstrTag)	\
    ( (This)->lpVtbl -> get_TagString(This,bstrTag) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADToolbar_INTERFACE_DEFINED__ */


#ifndef __InanoCADToolbarItem_INTERFACE_DEFINED__
#define __InanoCADToolbarItem_INTERFACE_DEFINED__

/* interface InanoCADToolbarItem */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADToolbarItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C09DCAF-308D-4ABA-8E4E-2A5D2772FDC7")
    InanoCADToolbarItem : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ InanoCADToolbar **pParent) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TagString( 
            /* [retval][out] */ BSTR *bstrTag) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TagString( 
            /* [in] */ BSTR bstrTag) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ AcToolbarItemType *itemType) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Flyout( 
            /* [retval][out] */ InanoCADToolbar **pTlbar) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Macro( 
            /* [retval][out] */ BSTR *bstrMacro) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Macro( 
            /* [in] */ BSTR bstrMacro) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Index( 
            /* [retval][out] */ int *nIndex) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HelpString( 
            /* [retval][out] */ BSTR *bstrHelp) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HelpString( 
            /* [in] */ BSTR bstrHelp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBitmaps( 
            /* [out] */ BSTR *SmallIconName,
            /* [out] */ BSTR *LargeIconName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetBitmaps( 
            /* [in] */ BSTR SmallIconName,
            /* [in] */ BSTR LargeIconName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AttachToolbarToFlyout( 
            /* [in] */ BSTR MenuGroupName,
            /* [in] */ BSTR ToolbarName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CommandDisplayName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CommandDisplayName( 
            /* [in] */ BSTR Name) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADToolbarItemVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADToolbarItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADToolbarItem * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADToolbarItem * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADToolbarItem * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADToolbarItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADToolbarItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADToolbarItem * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_Parent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ InanoCADToolbar **pParent);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            InanoCADToolbarItem * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_TagString)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TagString )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ BSTR *bstrTag);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, put_TagString)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TagString )( 
            InanoCADToolbarItem * This,
            /* [in] */ BSTR bstrTag);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_Type)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ AcToolbarItemType *itemType);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_Flyout)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Flyout )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ InanoCADToolbar **pTlbar);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_Macro)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Macro )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ BSTR *bstrMacro);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, put_Macro)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Macro )( 
            InanoCADToolbarItem * This,
            /* [in] */ BSTR bstrMacro);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_Index)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ int *nIndex);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_HelpString)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpString )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ BSTR *bstrHelp);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, put_HelpString)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HelpString )( 
            InanoCADToolbarItem * This,
            /* [in] */ BSTR bstrHelp);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, GetBitmaps)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBitmaps )( 
            InanoCADToolbarItem * This,
            /* [out] */ BSTR *SmallIconName,
            /* [out] */ BSTR *LargeIconName);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, SetBitmaps)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetBitmaps )( 
            InanoCADToolbarItem * This,
            /* [in] */ BSTR SmallIconName,
            /* [in] */ BSTR LargeIconName);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, AttachToolbarToFlyout)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AttachToolbarToFlyout )( 
            InanoCADToolbarItem * This,
            /* [in] */ BSTR MenuGroupName,
            /* [in] */ BSTR ToolbarName);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, Delete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            InanoCADToolbarItem * This);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, get_CommandDisplayName)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CommandDisplayName )( 
            InanoCADToolbarItem * This,
            /* [retval][out] */ BSTR *Name);
        
        DECLSPEC_XFGVIRT(InanoCADToolbarItem, put_CommandDisplayName)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CommandDisplayName )( 
            InanoCADToolbarItem * This,
            /* [in] */ BSTR Name);
        
        END_INTERFACE
    } InanoCADToolbarItemVtbl;

    interface InanoCADToolbarItem
    {
        CONST_VTBL struct InanoCADToolbarItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADToolbarItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADToolbarItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADToolbarItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADToolbarItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADToolbarItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADToolbarItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADToolbarItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADToolbarItem_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADToolbarItem_get_Parent(This,pParent)	\
    ( (This)->lpVtbl -> get_Parent(This,pParent) ) 

#define InanoCADToolbarItem_get_Name(This,bstrName)	\
    ( (This)->lpVtbl -> get_Name(This,bstrName) ) 

#define InanoCADToolbarItem_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define InanoCADToolbarItem_get_TagString(This,bstrTag)	\
    ( (This)->lpVtbl -> get_TagString(This,bstrTag) ) 

#define InanoCADToolbarItem_put_TagString(This,bstrTag)	\
    ( (This)->lpVtbl -> put_TagString(This,bstrTag) ) 

#define InanoCADToolbarItem_get_Type(This,itemType)	\
    ( (This)->lpVtbl -> get_Type(This,itemType) ) 

#define InanoCADToolbarItem_get_Flyout(This,pTlbar)	\
    ( (This)->lpVtbl -> get_Flyout(This,pTlbar) ) 

#define InanoCADToolbarItem_get_Macro(This,bstrMacro)	\
    ( (This)->lpVtbl -> get_Macro(This,bstrMacro) ) 

#define InanoCADToolbarItem_put_Macro(This,bstrMacro)	\
    ( (This)->lpVtbl -> put_Macro(This,bstrMacro) ) 

#define InanoCADToolbarItem_get_Index(This,nIndex)	\
    ( (This)->lpVtbl -> get_Index(This,nIndex) ) 

#define InanoCADToolbarItem_get_HelpString(This,bstrHelp)	\
    ( (This)->lpVtbl -> get_HelpString(This,bstrHelp) ) 

#define InanoCADToolbarItem_put_HelpString(This,bstrHelp)	\
    ( (This)->lpVtbl -> put_HelpString(This,bstrHelp) ) 

#define InanoCADToolbarItem_GetBitmaps(This,SmallIconName,LargeIconName)	\
    ( (This)->lpVtbl -> GetBitmaps(This,SmallIconName,LargeIconName) ) 

#define InanoCADToolbarItem_SetBitmaps(This,SmallIconName,LargeIconName)	\
    ( (This)->lpVtbl -> SetBitmaps(This,SmallIconName,LargeIconName) ) 

#define InanoCADToolbarItem_AttachToolbarToFlyout(This,MenuGroupName,ToolbarName)	\
    ( (This)->lpVtbl -> AttachToolbarToFlyout(This,MenuGroupName,ToolbarName) ) 

#define InanoCADToolbarItem_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define InanoCADToolbarItem_get_CommandDisplayName(This,Name)	\
    ( (This)->lpVtbl -> get_CommandDisplayName(This,Name) ) 

#define InanoCADToolbarItem_put_CommandDisplayName(This,Name)	\
    ( (This)->lpVtbl -> put_CommandDisplayName(This,Name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADToolbarItem_INTERFACE_DEFINED__ */


#ifndef __InanoCADPopupMenus_INTERFACE_DEFINED__
#define __InanoCADPopupMenus_INTERFACE_DEFINED__

/* interface InanoCADPopupMenus */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPopupMenus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B30328DF-EE49-4861-9C7E-78E00333E272")
    InanoCADPopupMenus : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADPopupMenu **pItem) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pEnumVariant) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ InanoCADMenuGroup **pParent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR MenuName,
            /* [retval][out] */ InanoCADPopupMenu **pMenu) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertMenuInMenuBar( 
            /* [in] */ BSTR MenuName,
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveMenuFromMenuBar( 
            /* [in] */ VARIANT Index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPopupMenusVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPopupMenus * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPopupMenus * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPopupMenus * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPopupMenus * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPopupMenus * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPopupMenus * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPopupMenus * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenus, Item)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            InanoCADPopupMenus * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADPopupMenu **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenus, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADPopupMenus * This,
            /* [retval][out] */ IUnknown **pEnumVariant);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenus, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADPopupMenus * This,
            /* [retval][out] */ long *Count);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenus, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPopupMenus * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenus, get_Parent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            InanoCADPopupMenus * This,
            /* [retval][out] */ InanoCADMenuGroup **pParent);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenus, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            InanoCADPopupMenus * This,
            /* [in] */ BSTR MenuName,
            /* [retval][out] */ InanoCADPopupMenu **pMenu);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenus, InsertMenuInMenuBar)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertMenuInMenuBar )( 
            InanoCADPopupMenus * This,
            /* [in] */ BSTR MenuName,
            /* [in] */ VARIANT Index);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenus, RemoveMenuFromMenuBar)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveMenuFromMenuBar )( 
            InanoCADPopupMenus * This,
            /* [in] */ VARIANT Index);
        
        END_INTERFACE
    } InanoCADPopupMenusVtbl;

    interface InanoCADPopupMenus
    {
        CONST_VTBL struct InanoCADPopupMenusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPopupMenus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPopupMenus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPopupMenus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPopupMenus_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPopupMenus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPopupMenus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPopupMenus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPopupMenus_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> Item(This,Index,pItem) ) 

#define InanoCADPopupMenus_get__NewEnum(This,pEnumVariant)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pEnumVariant) ) 

#define InanoCADPopupMenus_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define InanoCADPopupMenus_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPopupMenus_get_Parent(This,pParent)	\
    ( (This)->lpVtbl -> get_Parent(This,pParent) ) 

#define InanoCADPopupMenus_Add(This,MenuName,pMenu)	\
    ( (This)->lpVtbl -> Add(This,MenuName,pMenu) ) 

#define InanoCADPopupMenus_InsertMenuInMenuBar(This,MenuName,Index)	\
    ( (This)->lpVtbl -> InsertMenuInMenuBar(This,MenuName,Index) ) 

#define InanoCADPopupMenus_RemoveMenuFromMenuBar(This,Index)	\
    ( (This)->lpVtbl -> RemoveMenuFromMenuBar(This,Index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPopupMenus_INTERFACE_DEFINED__ */


#ifndef __InanoCADPopupMenu_INTERFACE_DEFINED__
#define __InanoCADPopupMenu_INTERFACE_DEFINED__

/* interface InanoCADPopupMenu */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPopupMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57CA6ED4-E195-4B5D-A028-06BC31BE6088")
    InanoCADPopupMenu : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADPopupMenuItem **pItem) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pEnumVariant) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **pParent) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_NameNoMnemonic( 
            /* [retval][out] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ShortcutMenu( 
            /* [retval][out] */ VARIANT_BOOL *bFlag) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OnMenuBar( 
            /* [retval][out] */ VARIANT_BOOL *bFlag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddMenuItem( 
            /* [in] */ VARIANT Index,
            /* [in] */ BSTR Label,
            /* [in] */ BSTR Macro,
            /* [retval][out] */ InanoCADPopupMenuItem **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSubMenu( 
            /* [in] */ VARIANT Index,
            /* [in] */ BSTR Label,
            /* [retval][out] */ InanoCADPopupMenu **pMenu) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSeparator( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADPopupMenuItem **pItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertInMenuBar( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveFromMenuBar( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TagString( 
            /* [retval][out] */ BSTR *bstrTag) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPopupMenuVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPopupMenu * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPopupMenu * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPopupMenu * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPopupMenu * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPopupMenu * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPopupMenu * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPopupMenu * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, Item)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            InanoCADPopupMenu * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADPopupMenuItem **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            InanoCADPopupMenu * This,
            /* [retval][out] */ IUnknown **pEnumVariant);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            InanoCADPopupMenu * This,
            /* [retval][out] */ long *Count);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPopupMenu * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, get_Parent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            InanoCADPopupMenu * This,
            /* [retval][out] */ IDispatch **pParent);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            InanoCADPopupMenu * This,
            /* [retval][out] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            InanoCADPopupMenu * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, get_NameNoMnemonic)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NameNoMnemonic )( 
            InanoCADPopupMenu * This,
            /* [retval][out] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, get_ShortcutMenu)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShortcutMenu )( 
            InanoCADPopupMenu * This,
            /* [retval][out] */ VARIANT_BOOL *bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, get_OnMenuBar)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OnMenuBar )( 
            InanoCADPopupMenu * This,
            /* [retval][out] */ VARIANT_BOOL *bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, AddMenuItem)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddMenuItem )( 
            InanoCADPopupMenu * This,
            /* [in] */ VARIANT Index,
            /* [in] */ BSTR Label,
            /* [in] */ BSTR Macro,
            /* [retval][out] */ InanoCADPopupMenuItem **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, AddSubMenu)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSubMenu )( 
            InanoCADPopupMenu * This,
            /* [in] */ VARIANT Index,
            /* [in] */ BSTR Label,
            /* [retval][out] */ InanoCADPopupMenu **pMenu);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, AddSeparator)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSeparator )( 
            InanoCADPopupMenu * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ InanoCADPopupMenuItem **pItem);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, InsertInMenuBar)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertInMenuBar )( 
            InanoCADPopupMenu * This,
            /* [in] */ VARIANT Index);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, RemoveFromMenuBar)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveFromMenuBar )( 
            InanoCADPopupMenu * This);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenu, get_TagString)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TagString )( 
            InanoCADPopupMenu * This,
            /* [retval][out] */ BSTR *bstrTag);
        
        END_INTERFACE
    } InanoCADPopupMenuVtbl;

    interface InanoCADPopupMenu
    {
        CONST_VTBL struct InanoCADPopupMenuVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPopupMenu_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPopupMenu_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPopupMenu_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPopupMenu_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPopupMenu_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPopupMenu_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPopupMenu_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPopupMenu_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> Item(This,Index,pItem) ) 

#define InanoCADPopupMenu_get__NewEnum(This,pEnumVariant)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pEnumVariant) ) 

#define InanoCADPopupMenu_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define InanoCADPopupMenu_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPopupMenu_get_Parent(This,pParent)	\
    ( (This)->lpVtbl -> get_Parent(This,pParent) ) 

#define InanoCADPopupMenu_get_Name(This,bstrName)	\
    ( (This)->lpVtbl -> get_Name(This,bstrName) ) 

#define InanoCADPopupMenu_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define InanoCADPopupMenu_get_NameNoMnemonic(This,bstrName)	\
    ( (This)->lpVtbl -> get_NameNoMnemonic(This,bstrName) ) 

#define InanoCADPopupMenu_get_ShortcutMenu(This,bFlag)	\
    ( (This)->lpVtbl -> get_ShortcutMenu(This,bFlag) ) 

#define InanoCADPopupMenu_get_OnMenuBar(This,bFlag)	\
    ( (This)->lpVtbl -> get_OnMenuBar(This,bFlag) ) 

#define InanoCADPopupMenu_AddMenuItem(This,Index,Label,Macro,pItem)	\
    ( (This)->lpVtbl -> AddMenuItem(This,Index,Label,Macro,pItem) ) 

#define InanoCADPopupMenu_AddSubMenu(This,Index,Label,pMenu)	\
    ( (This)->lpVtbl -> AddSubMenu(This,Index,Label,pMenu) ) 

#define InanoCADPopupMenu_AddSeparator(This,Index,pItem)	\
    ( (This)->lpVtbl -> AddSeparator(This,Index,pItem) ) 

#define InanoCADPopupMenu_InsertInMenuBar(This,Index)	\
    ( (This)->lpVtbl -> InsertInMenuBar(This,Index) ) 

#define InanoCADPopupMenu_RemoveFromMenuBar(This)	\
    ( (This)->lpVtbl -> RemoveFromMenuBar(This) ) 

#define InanoCADPopupMenu_get_TagString(This,bstrTag)	\
    ( (This)->lpVtbl -> get_TagString(This,bstrTag) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPopupMenu_INTERFACE_DEFINED__ */


#ifndef __InanoCADPopupMenuItem_INTERFACE_DEFINED__
#define __InanoCADPopupMenuItem_INTERFACE_DEFINED__

/* interface InanoCADPopupMenuItem */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPopupMenuItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E784059E-1149-414F-9F68-44B01896DA30")
    InanoCADPopupMenuItem : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ InanoCADPopupMenu **pParent) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ BSTR *bstrLabel) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Label( 
            /* [in] */ BSTR bstrLabel) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TagString( 
            /* [retval][out] */ BSTR *bstrTag) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TagString( 
            /* [in] */ BSTR bstrTag) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Enable( 
            /* [retval][out] */ VARIANT_BOOL *bFlag) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Enable( 
            /* [in] */ VARIANT_BOOL bFlag) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Check( 
            /* [retval][out] */ VARIANT_BOOL *bFlag) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Check( 
            /* [in] */ VARIANT_BOOL bFlag) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ AcMenuItemType *itemType) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SubMenu( 
            /* [retval][out] */ InanoCADPopupMenu **pMenu) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Macro( 
            /* [retval][out] */ BSTR *bstrMacro) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Macro( 
            /* [in] */ BSTR bstrMacro) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Index( 
            /* [retval][out] */ int *nIndex) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Caption( 
            /* [retval][out] */ BSTR *bstrCaption) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HelpString( 
            /* [retval][out] */ BSTR *bstrHelp) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HelpString( 
            /* [in] */ BSTR bstrHelp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EndSubMenuLevel( 
            /* [retval][out] */ int *level) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_EndSubMenuLevel( 
            /* [in] */ int level) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPopupMenuItemVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPopupMenuItem * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPopupMenuItem * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPopupMenuItem * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPopupMenuItem * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_Parent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ InanoCADPopupMenu **pParent);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_Label)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ BSTR *bstrLabel);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, put_Label)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Label )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ BSTR bstrLabel);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_TagString)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TagString )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ BSTR *bstrTag);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, put_TagString)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TagString )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ BSTR bstrTag);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_Enable)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enable )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, put_Enable)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Enable )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ VARIANT_BOOL bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_Check)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Check )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, put_Check)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Check )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ VARIANT_BOOL bFlag);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_Type)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ AcMenuItemType *itemType);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_SubMenu)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SubMenu )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ InanoCADPopupMenu **pMenu);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_Macro)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Macro )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ BSTR *bstrMacro);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, put_Macro)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Macro )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ BSTR bstrMacro);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_Index)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ int *nIndex);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_Caption)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ BSTR *bstrCaption);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_HelpString)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpString )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ BSTR *bstrHelp);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, put_HelpString)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HelpString )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ BSTR bstrHelp);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, Delete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            InanoCADPopupMenuItem * This);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, get_EndSubMenuLevel)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EndSubMenuLevel )( 
            InanoCADPopupMenuItem * This,
            /* [retval][out] */ int *level);
        
        DECLSPEC_XFGVIRT(InanoCADPopupMenuItem, put_EndSubMenuLevel)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EndSubMenuLevel )( 
            InanoCADPopupMenuItem * This,
            /* [in] */ int level);
        
        END_INTERFACE
    } InanoCADPopupMenuItemVtbl;

    interface InanoCADPopupMenuItem
    {
        CONST_VTBL struct InanoCADPopupMenuItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPopupMenuItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPopupMenuItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPopupMenuItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPopupMenuItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPopupMenuItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPopupMenuItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPopupMenuItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPopupMenuItem_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPopupMenuItem_get_Parent(This,pParent)	\
    ( (This)->lpVtbl -> get_Parent(This,pParent) ) 

#define InanoCADPopupMenuItem_get_Label(This,bstrLabel)	\
    ( (This)->lpVtbl -> get_Label(This,bstrLabel) ) 

#define InanoCADPopupMenuItem_put_Label(This,bstrLabel)	\
    ( (This)->lpVtbl -> put_Label(This,bstrLabel) ) 

#define InanoCADPopupMenuItem_get_TagString(This,bstrTag)	\
    ( (This)->lpVtbl -> get_TagString(This,bstrTag) ) 

#define InanoCADPopupMenuItem_put_TagString(This,bstrTag)	\
    ( (This)->lpVtbl -> put_TagString(This,bstrTag) ) 

#define InanoCADPopupMenuItem_get_Enable(This,bFlag)	\
    ( (This)->lpVtbl -> get_Enable(This,bFlag) ) 

#define InanoCADPopupMenuItem_put_Enable(This,bFlag)	\
    ( (This)->lpVtbl -> put_Enable(This,bFlag) ) 

#define InanoCADPopupMenuItem_get_Check(This,bFlag)	\
    ( (This)->lpVtbl -> get_Check(This,bFlag) ) 

#define InanoCADPopupMenuItem_put_Check(This,bFlag)	\
    ( (This)->lpVtbl -> put_Check(This,bFlag) ) 

#define InanoCADPopupMenuItem_get_Type(This,itemType)	\
    ( (This)->lpVtbl -> get_Type(This,itemType) ) 

#define InanoCADPopupMenuItem_get_SubMenu(This,pMenu)	\
    ( (This)->lpVtbl -> get_SubMenu(This,pMenu) ) 

#define InanoCADPopupMenuItem_get_Macro(This,bstrMacro)	\
    ( (This)->lpVtbl -> get_Macro(This,bstrMacro) ) 

#define InanoCADPopupMenuItem_put_Macro(This,bstrMacro)	\
    ( (This)->lpVtbl -> put_Macro(This,bstrMacro) ) 

#define InanoCADPopupMenuItem_get_Index(This,nIndex)	\
    ( (This)->lpVtbl -> get_Index(This,nIndex) ) 

#define InanoCADPopupMenuItem_get_Caption(This,bstrCaption)	\
    ( (This)->lpVtbl -> get_Caption(This,bstrCaption) ) 

#define InanoCADPopupMenuItem_get_HelpString(This,bstrHelp)	\
    ( (This)->lpVtbl -> get_HelpString(This,bstrHelp) ) 

#define InanoCADPopupMenuItem_put_HelpString(This,bstrHelp)	\
    ( (This)->lpVtbl -> put_HelpString(This,bstrHelp) ) 

#define InanoCADPopupMenuItem_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define InanoCADPopupMenuItem_get_EndSubMenuLevel(This,level)	\
    ( (This)->lpVtbl -> get_EndSubMenuLevel(This,level) ) 

#define InanoCADPopupMenuItem_put_EndSubMenuLevel(This,level)	\
    ( (This)->lpVtbl -> put_EndSubMenuLevel(This,level) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPopupMenuItem_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferences_INTERFACE_DEFINED__
#define __InanoCADPreferences_INTERFACE_DEFINED__

/* interface InanoCADPreferences */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferences;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A38E1530-1648-45C7-B0ED-7ADC5F8CD7F0")
    InanoCADPreferences : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Files( 
            /* [retval][out] */ InanoCADPreferencesFiles **pObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Display( 
            /* [retval][out] */ InanoCADPreferencesDisplay **pObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OpenSave( 
            /* [retval][out] */ InanoCADPreferencesOpenSave **pObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Output( 
            /* [retval][out] */ InanoCADPreferencesOutput **pObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_System( 
            /* [retval][out] */ InanoCADPreferencesSystem **pObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_User( 
            /* [retval][out] */ InanoCADPreferencesUser **pObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Drafting( 
            /* [retval][out] */ InanoCADPreferencesDrafting **pObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Selection( 
            /* [retval][out] */ InanoCADPreferencesSelection **pObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Profiles( 
            /* [retval][out] */ InanoCADPreferencesProfiles **pObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferences * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferences * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferences * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferences * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferences * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferences * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferences * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_Files)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Files )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADPreferencesFiles **pObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_Display)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Display )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADPreferencesDisplay **pObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_OpenSave)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OpenSave )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADPreferencesOpenSave **pObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_Output)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Output )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADPreferencesOutput **pObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_System)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_System )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADPreferencesSystem **pObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_User)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_User )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADPreferencesUser **pObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_Drafting)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Drafting )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADPreferencesDrafting **pObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_Selection)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Selection )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADPreferencesSelection **pObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferences, get_Profiles)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Profiles )( 
            InanoCADPreferences * This,
            /* [retval][out] */ InanoCADPreferencesProfiles **pObj);
        
        END_INTERFACE
    } InanoCADPreferencesVtbl;

    interface InanoCADPreferences
    {
        CONST_VTBL struct InanoCADPreferencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferences_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferences_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferences_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferences_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferences_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferences_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferences_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferences_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferences_get_Files(This,pObj)	\
    ( (This)->lpVtbl -> get_Files(This,pObj) ) 

#define InanoCADPreferences_get_Display(This,pObj)	\
    ( (This)->lpVtbl -> get_Display(This,pObj) ) 

#define InanoCADPreferences_get_OpenSave(This,pObj)	\
    ( (This)->lpVtbl -> get_OpenSave(This,pObj) ) 

#define InanoCADPreferences_get_Output(This,pObj)	\
    ( (This)->lpVtbl -> get_Output(This,pObj) ) 

#define InanoCADPreferences_get_System(This,pObj)	\
    ( (This)->lpVtbl -> get_System(This,pObj) ) 

#define InanoCADPreferences_get_User(This,pObj)	\
    ( (This)->lpVtbl -> get_User(This,pObj) ) 

#define InanoCADPreferences_get_Drafting(This,pObj)	\
    ( (This)->lpVtbl -> get_Drafting(This,pObj) ) 

#define InanoCADPreferences_get_Selection(This,pObj)	\
    ( (This)->lpVtbl -> get_Selection(This,pObj) ) 

#define InanoCADPreferences_get_Profiles(This,pObj)	\
    ( (This)->lpVtbl -> get_Profiles(This,pObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferences_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferencesFiles_INTERFACE_DEFINED__
#define __InanoCADPreferencesFiles_INTERFACE_DEFINED__

/* interface InanoCADPreferencesFiles */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferencesFiles;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8AE0EE0-2198-40B3-8045-AF450DECC58B")
    InanoCADPreferencesFiles : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SupportPath( 
            /* [in] */ BSTR orient) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SupportPath( 
            /* [retval][out] */ BSTR *orient) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DriversPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DriversPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MenuFile( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MenuFile( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HelpFilePath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HelpFilePath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DefaultInternetURL( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DefaultInternetURL( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ConfigFile( 
            /* [retval][out] */ BSTR *ConfigFile) = 0;
        
        virtual /* [helpstring][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_LicenseServer( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TextEditor( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TextEditor( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MainDictionary( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MainDictionary( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CustomDictionary( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CustomDictionary( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AltFontFile( 
            /* [in] */ BSTR fontFile) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AltFontFile( 
            /* [retval][out] */ BSTR *fontFile) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FontFileMap( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FontFileMap( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintFile( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintFile( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintSpoolExecutable( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintSpoolExecutable( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PostScriptPrologFile( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PostScriptPrologFile( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintSpoolerPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintSpoolerPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoSavePath( 
            /* [in] */ BSTR AutoSavePath) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSavePath( 
            /* [retval][out] */ BSTR *AutoSavePath) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TemplateDwgPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TemplateDwgPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LogFilePath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LogFilePath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TempFilePath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TempFilePath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TempXrefPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TempXrefPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TextureMapPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TextureMapPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AltTabletMenuFile( 
            /* [in] */ BSTR MenuFile) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AltTabletMenuFile( 
            /* [retval][out] */ BSTR *MenuFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProjectFilePath( 
            /* [in] */ BSTR ProjectName,
            /* [in] */ BSTR ProjectFilePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProjectFilePath( 
            /* [in] */ BSTR ProjectName,
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrinterConfigPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrinterConfigPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrinterDescPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrinterDescPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrinterStyleSheetPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrinterStyleSheetPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_WorkspacePath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WorkspacePath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][hidden][propput][id] */ HRESULT STDMETHODCALLTYPE put_ObjectARXPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_ObjectARXPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ColorBookPath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ColorBookPath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ToolPalettePath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ToolPalettePath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesFilesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferencesFiles * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferencesFiles * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferencesFiles * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferencesFiles * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_SupportPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SupportPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR orient);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_SupportPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *orient);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_DriversPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DriversPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_DriversPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DriversPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_MenuFile)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MenuFile )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_MenuFile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MenuFile )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_HelpFilePath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HelpFilePath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_HelpFilePath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpFilePath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_DefaultInternetURL)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultInternetURL )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_DefaultInternetURL)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultInternetURL )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_ConfigFile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConfigFile )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *ConfigFile);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_LicenseServer)
        /* [helpstring][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseServer )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_TextEditor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextEditor )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_TextEditor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextEditor )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_MainDictionary)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MainDictionary )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_MainDictionary)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MainDictionary )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_CustomDictionary)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CustomDictionary )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_CustomDictionary)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CustomDictionary )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_AltFontFile)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AltFontFile )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR fontFile);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_AltFontFile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AltFontFile )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *fontFile);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_FontFileMap)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FontFileMap )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_FontFileMap)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FontFileMap )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_PrintFile)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintFile )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_PrintFile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintFile )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_PrintSpoolExecutable)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintSpoolExecutable )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_PrintSpoolExecutable)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintSpoolExecutable )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_PostScriptPrologFile)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PostScriptPrologFile )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_PostScriptPrologFile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PostScriptPrologFile )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_PrintSpoolerPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintSpoolerPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_PrintSpoolerPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintSpoolerPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_AutoSavePath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSavePath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR AutoSavePath);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_AutoSavePath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSavePath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *AutoSavePath);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_TemplateDwgPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TemplateDwgPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_TemplateDwgPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateDwgPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_LogFilePath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LogFilePath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_LogFilePath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LogFilePath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_TempFilePath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TempFilePath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_TempFilePath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TempFilePath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_TempXrefPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TempXrefPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_TempXrefPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TempXrefPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_TextureMapPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextureMapPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_TextureMapPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextureMapPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_AltTabletMenuFile)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AltTabletMenuFile )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR MenuFile);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_AltTabletMenuFile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AltTabletMenuFile )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *MenuFile);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, SetProjectFilePath)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProjectFilePath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR ProjectName,
            /* [in] */ BSTR ProjectFilePath);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, GetProjectFilePath)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProjectFilePath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR ProjectName,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_PrinterConfigPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterConfigPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_PrinterConfigPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterConfigPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_PrinterDescPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterDescPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_PrinterDescPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterDescPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_PrinterStyleSheetPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterStyleSheetPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_PrinterStyleSheetPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterStyleSheetPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_WorkspacePath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WorkspacePath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_WorkspacePath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspacePath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_ObjectARXPath)
        /* [helpstring][hidden][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ObjectARXPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_ObjectARXPath)
        /* [helpstring][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectARXPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_ColorBookPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorBookPath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_ColorBookPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorBookPath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, put_ToolPalettePath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ToolPalettePath )( 
            InanoCADPreferencesFiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesFiles, get_ToolPalettePath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ToolPalettePath )( 
            InanoCADPreferencesFiles * This,
            /* [retval][out] */ BSTR *Path);
        
        END_INTERFACE
    } InanoCADPreferencesFilesVtbl;

    interface InanoCADPreferencesFiles
    {
        CONST_VTBL struct InanoCADPreferencesFilesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferencesFiles_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferencesFiles_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferencesFiles_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferencesFiles_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferencesFiles_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferencesFiles_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferencesFiles_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferencesFiles_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferencesFiles_put_SupportPath(This,orient)	\
    ( (This)->lpVtbl -> put_SupportPath(This,orient) ) 

#define InanoCADPreferencesFiles_get_SupportPath(This,orient)	\
    ( (This)->lpVtbl -> get_SupportPath(This,orient) ) 

#define InanoCADPreferencesFiles_put_DriversPath(This,Path)	\
    ( (This)->lpVtbl -> put_DriversPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_DriversPath(This,Path)	\
    ( (This)->lpVtbl -> get_DriversPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_MenuFile(This,Path)	\
    ( (This)->lpVtbl -> put_MenuFile(This,Path) ) 

#define InanoCADPreferencesFiles_get_MenuFile(This,Path)	\
    ( (This)->lpVtbl -> get_MenuFile(This,Path) ) 

#define InanoCADPreferencesFiles_put_HelpFilePath(This,Path)	\
    ( (This)->lpVtbl -> put_HelpFilePath(This,Path) ) 

#define InanoCADPreferencesFiles_get_HelpFilePath(This,Path)	\
    ( (This)->lpVtbl -> get_HelpFilePath(This,Path) ) 

#define InanoCADPreferencesFiles_put_DefaultInternetURL(This,Path)	\
    ( (This)->lpVtbl -> put_DefaultInternetURL(This,Path) ) 

#define InanoCADPreferencesFiles_get_DefaultInternetURL(This,Path)	\
    ( (This)->lpVtbl -> get_DefaultInternetURL(This,Path) ) 

#define InanoCADPreferencesFiles_get_ConfigFile(This,ConfigFile)	\
    ( (This)->lpVtbl -> get_ConfigFile(This,ConfigFile) ) 

#define InanoCADPreferencesFiles_get_LicenseServer(This,Path)	\
    ( (This)->lpVtbl -> get_LicenseServer(This,Path) ) 

#define InanoCADPreferencesFiles_put_TextEditor(This,Path)	\
    ( (This)->lpVtbl -> put_TextEditor(This,Path) ) 

#define InanoCADPreferencesFiles_get_TextEditor(This,Path)	\
    ( (This)->lpVtbl -> get_TextEditor(This,Path) ) 

#define InanoCADPreferencesFiles_put_MainDictionary(This,Path)	\
    ( (This)->lpVtbl -> put_MainDictionary(This,Path) ) 

#define InanoCADPreferencesFiles_get_MainDictionary(This,Path)	\
    ( (This)->lpVtbl -> get_MainDictionary(This,Path) ) 

#define InanoCADPreferencesFiles_put_CustomDictionary(This,Path)	\
    ( (This)->lpVtbl -> put_CustomDictionary(This,Path) ) 

#define InanoCADPreferencesFiles_get_CustomDictionary(This,Path)	\
    ( (This)->lpVtbl -> get_CustomDictionary(This,Path) ) 

#define InanoCADPreferencesFiles_put_AltFontFile(This,fontFile)	\
    ( (This)->lpVtbl -> put_AltFontFile(This,fontFile) ) 

#define InanoCADPreferencesFiles_get_AltFontFile(This,fontFile)	\
    ( (This)->lpVtbl -> get_AltFontFile(This,fontFile) ) 

#define InanoCADPreferencesFiles_put_FontFileMap(This,Path)	\
    ( (This)->lpVtbl -> put_FontFileMap(This,Path) ) 

#define InanoCADPreferencesFiles_get_FontFileMap(This,Path)	\
    ( (This)->lpVtbl -> get_FontFileMap(This,Path) ) 

#define InanoCADPreferencesFiles_put_PrintFile(This,Path)	\
    ( (This)->lpVtbl -> put_PrintFile(This,Path) ) 

#define InanoCADPreferencesFiles_get_PrintFile(This,Path)	\
    ( (This)->lpVtbl -> get_PrintFile(This,Path) ) 

#define InanoCADPreferencesFiles_put_PrintSpoolExecutable(This,Path)	\
    ( (This)->lpVtbl -> put_PrintSpoolExecutable(This,Path) ) 

#define InanoCADPreferencesFiles_get_PrintSpoolExecutable(This,Path)	\
    ( (This)->lpVtbl -> get_PrintSpoolExecutable(This,Path) ) 

#define InanoCADPreferencesFiles_put_PostScriptPrologFile(This,Path)	\
    ( (This)->lpVtbl -> put_PostScriptPrologFile(This,Path) ) 

#define InanoCADPreferencesFiles_get_PostScriptPrologFile(This,Path)	\
    ( (This)->lpVtbl -> get_PostScriptPrologFile(This,Path) ) 

#define InanoCADPreferencesFiles_put_PrintSpoolerPath(This,Path)	\
    ( (This)->lpVtbl -> put_PrintSpoolerPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_PrintSpoolerPath(This,Path)	\
    ( (This)->lpVtbl -> get_PrintSpoolerPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_AutoSavePath(This,AutoSavePath)	\
    ( (This)->lpVtbl -> put_AutoSavePath(This,AutoSavePath) ) 

#define InanoCADPreferencesFiles_get_AutoSavePath(This,AutoSavePath)	\
    ( (This)->lpVtbl -> get_AutoSavePath(This,AutoSavePath) ) 

#define InanoCADPreferencesFiles_put_TemplateDwgPath(This,Path)	\
    ( (This)->lpVtbl -> put_TemplateDwgPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_TemplateDwgPath(This,Path)	\
    ( (This)->lpVtbl -> get_TemplateDwgPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_LogFilePath(This,Path)	\
    ( (This)->lpVtbl -> put_LogFilePath(This,Path) ) 

#define InanoCADPreferencesFiles_get_LogFilePath(This,Path)	\
    ( (This)->lpVtbl -> get_LogFilePath(This,Path) ) 

#define InanoCADPreferencesFiles_put_TempFilePath(This,Path)	\
    ( (This)->lpVtbl -> put_TempFilePath(This,Path) ) 

#define InanoCADPreferencesFiles_get_TempFilePath(This,Path)	\
    ( (This)->lpVtbl -> get_TempFilePath(This,Path) ) 

#define InanoCADPreferencesFiles_put_TempXrefPath(This,Path)	\
    ( (This)->lpVtbl -> put_TempXrefPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_TempXrefPath(This,Path)	\
    ( (This)->lpVtbl -> get_TempXrefPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_TextureMapPath(This,Path)	\
    ( (This)->lpVtbl -> put_TextureMapPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_TextureMapPath(This,Path)	\
    ( (This)->lpVtbl -> get_TextureMapPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_AltTabletMenuFile(This,MenuFile)	\
    ( (This)->lpVtbl -> put_AltTabletMenuFile(This,MenuFile) ) 

#define InanoCADPreferencesFiles_get_AltTabletMenuFile(This,MenuFile)	\
    ( (This)->lpVtbl -> get_AltTabletMenuFile(This,MenuFile) ) 

#define InanoCADPreferencesFiles_SetProjectFilePath(This,ProjectName,ProjectFilePath)	\
    ( (This)->lpVtbl -> SetProjectFilePath(This,ProjectName,ProjectFilePath) ) 

#define InanoCADPreferencesFiles_GetProjectFilePath(This,ProjectName,Path)	\
    ( (This)->lpVtbl -> GetProjectFilePath(This,ProjectName,Path) ) 

#define InanoCADPreferencesFiles_put_PrinterConfigPath(This,Path)	\
    ( (This)->lpVtbl -> put_PrinterConfigPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_PrinterConfigPath(This,Path)	\
    ( (This)->lpVtbl -> get_PrinterConfigPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_PrinterDescPath(This,Path)	\
    ( (This)->lpVtbl -> put_PrinterDescPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_PrinterDescPath(This,Path)	\
    ( (This)->lpVtbl -> get_PrinterDescPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_PrinterStyleSheetPath(This,Path)	\
    ( (This)->lpVtbl -> put_PrinterStyleSheetPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_PrinterStyleSheetPath(This,Path)	\
    ( (This)->lpVtbl -> get_PrinterStyleSheetPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_WorkspacePath(This,Path)	\
    ( (This)->lpVtbl -> put_WorkspacePath(This,Path) ) 

#define InanoCADPreferencesFiles_get_WorkspacePath(This,Path)	\
    ( (This)->lpVtbl -> get_WorkspacePath(This,Path) ) 

#define InanoCADPreferencesFiles_put_ObjectARXPath(This,Path)	\
    ( (This)->lpVtbl -> put_ObjectARXPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_ObjectARXPath(This,Path)	\
    ( (This)->lpVtbl -> get_ObjectARXPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_ColorBookPath(This,Path)	\
    ( (This)->lpVtbl -> put_ColorBookPath(This,Path) ) 

#define InanoCADPreferencesFiles_get_ColorBookPath(This,Path)	\
    ( (This)->lpVtbl -> get_ColorBookPath(This,Path) ) 

#define InanoCADPreferencesFiles_put_ToolPalettePath(This,Path)	\
    ( (This)->lpVtbl -> put_ToolPalettePath(This,Path) ) 

#define InanoCADPreferencesFiles_get_ToolPalettePath(This,Path)	\
    ( (This)->lpVtbl -> get_ToolPalettePath(This,Path) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferencesFiles_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferencesDisplay_INTERFACE_DEFINED__
#define __InanoCADPreferencesDisplay_INTERFACE_DEFINED__

/* interface InanoCADPreferencesDisplay */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferencesDisplay;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7F5BB426-7FEF-4E28-9F94-4239486AA032")
    InanoCADPreferencesDisplay : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LayoutDisplayMargins( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LayoutDisplayMargins( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LayoutDisplayPaper( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LayoutDisplayPaper( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LayoutDisplayPaperShadow( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LayoutDisplayPaperShadow( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LayoutShowPlotSetup( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LayoutShowPlotSetup( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LayoutCreateViewport( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LayoutCreateViewport( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DisplayScrollBars( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayScrollBars( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DisplayScreenMenu( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayScreenMenu( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CursorSize( 
            /* [in] */ int Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CursorSize( 
            /* [retval][out] */ int *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DockedVisibleLines( 
            /* [in] */ int Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DockedVisibleLines( 
            /* [retval][out] */ int *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ShowRasterImage( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ShowRasterImage( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_GraphicsWinModelBackgrndColor( 
            /* [in] */ OLE_COLOR color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_GraphicsWinModelBackgrndColor( 
            /* [retval][out] */ OLE_COLOR *color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ModelCrosshairColor( 
            /* [in] */ OLE_COLOR crossHairColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ModelCrosshairColor( 
            /* [retval][out] */ OLE_COLOR *crossHairColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_GraphicsWinLayoutBackgrndColor( 
            /* [in] */ OLE_COLOR color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_GraphicsWinLayoutBackgrndColor( 
            /* [retval][out] */ OLE_COLOR *color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TextWinBackgrndColor( 
            /* [in] */ OLE_COLOR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TextWinBackgrndColor( 
            /* [retval][out] */ OLE_COLOR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TextWinTextColor( 
            /* [in] */ OLE_COLOR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TextWinTextColor( 
            /* [retval][out] */ OLE_COLOR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LayoutCrosshairColor( 
            /* [in] */ OLE_COLOR crossHairColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LayoutCrosshairColor( 
            /* [retval][out] */ OLE_COLOR *crossHairColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoTrackingVecColor( 
            /* [in] */ OLE_COLOR AutoTrackingVecColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoTrackingVecColor( 
            /* [retval][out] */ OLE_COLOR *AutoTrackingVecColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TextFont( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TextFont( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TextFontStyle( 
            /* [in] */ AcTextFontStyle Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TextFontStyle( 
            /* [retval][out] */ AcTextFontStyle *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TextFontSize( 
            /* [in] */ int Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TextFontSize( 
            /* [retval][out] */ int *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HistoryLines( 
            /* [in] */ int Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HistoryLines( 
            /* [retval][out] */ int *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MaxWindow( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxWindow( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DisplayLayoutTabs( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayLayoutTabs( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ImageFrameHighlight( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ImageFrameHighlight( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TrueColorImages( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TrueColorImages( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_XRefFadeIntensity( 
            /* [in] */ long Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_XRefFadeIntensity( 
            /* [retval][out] */ long *Path) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesDisplayVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferencesDisplay * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferencesDisplay * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferencesDisplay * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferencesDisplay * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_LayoutDisplayMargins)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LayoutDisplayMargins )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_LayoutDisplayMargins)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LayoutDisplayMargins )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_LayoutDisplayPaper)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LayoutDisplayPaper )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_LayoutDisplayPaper)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LayoutDisplayPaper )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_LayoutDisplayPaperShadow)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LayoutDisplayPaperShadow )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_LayoutDisplayPaperShadow)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LayoutDisplayPaperShadow )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_LayoutShowPlotSetup)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LayoutShowPlotSetup )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_LayoutShowPlotSetup)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LayoutShowPlotSetup )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_LayoutCreateViewport)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LayoutCreateViewport )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_LayoutCreateViewport)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LayoutCreateViewport )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_DisplayScrollBars)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayScrollBars )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_DisplayScrollBars)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayScrollBars )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_DisplayScreenMenu)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayScreenMenu )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_DisplayScreenMenu)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayScreenMenu )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_CursorSize)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CursorSize )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ int Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_CursorSize)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CursorSize )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ int *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_DockedVisibleLines)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DockedVisibleLines )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ int Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_DockedVisibleLines)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DockedVisibleLines )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ int *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_ShowRasterImage)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShowRasterImage )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_ShowRasterImage)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShowRasterImage )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_GraphicsWinModelBackgrndColor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GraphicsWinModelBackgrndColor )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ OLE_COLOR color);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_GraphicsWinModelBackgrndColor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GraphicsWinModelBackgrndColor )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ OLE_COLOR *color);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_ModelCrosshairColor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ModelCrosshairColor )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ OLE_COLOR crossHairColor);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_ModelCrosshairColor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ModelCrosshairColor )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ OLE_COLOR *crossHairColor);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_GraphicsWinLayoutBackgrndColor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GraphicsWinLayoutBackgrndColor )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ OLE_COLOR color);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_GraphicsWinLayoutBackgrndColor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GraphicsWinLayoutBackgrndColor )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ OLE_COLOR *color);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_TextWinBackgrndColor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextWinBackgrndColor )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ OLE_COLOR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_TextWinBackgrndColor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextWinBackgrndColor )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ OLE_COLOR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_TextWinTextColor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextWinTextColor )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ OLE_COLOR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_TextWinTextColor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextWinTextColor )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ OLE_COLOR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_LayoutCrosshairColor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LayoutCrosshairColor )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ OLE_COLOR crossHairColor);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_LayoutCrosshairColor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LayoutCrosshairColor )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ OLE_COLOR *crossHairColor);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_AutoTrackingVecColor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoTrackingVecColor )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ OLE_COLOR AutoTrackingVecColor);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_AutoTrackingVecColor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoTrackingVecColor )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ OLE_COLOR *AutoTrackingVecColor);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_TextFont)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextFont )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_TextFont)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextFont )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_TextFontStyle)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextFontStyle )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ AcTextFontStyle Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_TextFontStyle)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextFontStyle )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ AcTextFontStyle *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_TextFontSize)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextFontSize )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ int Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_TextFontSize)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextFontSize )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ int *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_HistoryLines)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HistoryLines )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ int Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_HistoryLines)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HistoryLines )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ int *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_MaxWindow)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxWindow )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_MaxWindow)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxWindow )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_DisplayLayoutTabs)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayLayoutTabs )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_DisplayLayoutTabs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayLayoutTabs )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_ImageFrameHighlight)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ImageFrameHighlight )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_ImageFrameHighlight)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFrameHighlight )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_TrueColorImages)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TrueColorImages )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_TrueColorImages)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TrueColorImages )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, put_XRefFadeIntensity)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_XRefFadeIntensity )( 
            InanoCADPreferencesDisplay * This,
            /* [in] */ long Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDisplay, get_XRefFadeIntensity)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_XRefFadeIntensity )( 
            InanoCADPreferencesDisplay * This,
            /* [retval][out] */ long *Path);
        
        END_INTERFACE
    } InanoCADPreferencesDisplayVtbl;

    interface InanoCADPreferencesDisplay
    {
        CONST_VTBL struct InanoCADPreferencesDisplayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferencesDisplay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferencesDisplay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferencesDisplay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferencesDisplay_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferencesDisplay_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferencesDisplay_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferencesDisplay_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferencesDisplay_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferencesDisplay_put_LayoutDisplayMargins(This,Path)	\
    ( (This)->lpVtbl -> put_LayoutDisplayMargins(This,Path) ) 

#define InanoCADPreferencesDisplay_get_LayoutDisplayMargins(This,Path)	\
    ( (This)->lpVtbl -> get_LayoutDisplayMargins(This,Path) ) 

#define InanoCADPreferencesDisplay_put_LayoutDisplayPaper(This,Path)	\
    ( (This)->lpVtbl -> put_LayoutDisplayPaper(This,Path) ) 

#define InanoCADPreferencesDisplay_get_LayoutDisplayPaper(This,Path)	\
    ( (This)->lpVtbl -> get_LayoutDisplayPaper(This,Path) ) 

#define InanoCADPreferencesDisplay_put_LayoutDisplayPaperShadow(This,Path)	\
    ( (This)->lpVtbl -> put_LayoutDisplayPaperShadow(This,Path) ) 

#define InanoCADPreferencesDisplay_get_LayoutDisplayPaperShadow(This,Path)	\
    ( (This)->lpVtbl -> get_LayoutDisplayPaperShadow(This,Path) ) 

#define InanoCADPreferencesDisplay_put_LayoutShowPlotSetup(This,Path)	\
    ( (This)->lpVtbl -> put_LayoutShowPlotSetup(This,Path) ) 

#define InanoCADPreferencesDisplay_get_LayoutShowPlotSetup(This,Path)	\
    ( (This)->lpVtbl -> get_LayoutShowPlotSetup(This,Path) ) 

#define InanoCADPreferencesDisplay_put_LayoutCreateViewport(This,Path)	\
    ( (This)->lpVtbl -> put_LayoutCreateViewport(This,Path) ) 

#define InanoCADPreferencesDisplay_get_LayoutCreateViewport(This,Path)	\
    ( (This)->lpVtbl -> get_LayoutCreateViewport(This,Path) ) 

#define InanoCADPreferencesDisplay_put_DisplayScrollBars(This,Path)	\
    ( (This)->lpVtbl -> put_DisplayScrollBars(This,Path) ) 

#define InanoCADPreferencesDisplay_get_DisplayScrollBars(This,Path)	\
    ( (This)->lpVtbl -> get_DisplayScrollBars(This,Path) ) 

#define InanoCADPreferencesDisplay_put_DisplayScreenMenu(This,Path)	\
    ( (This)->lpVtbl -> put_DisplayScreenMenu(This,Path) ) 

#define InanoCADPreferencesDisplay_get_DisplayScreenMenu(This,Path)	\
    ( (This)->lpVtbl -> get_DisplayScreenMenu(This,Path) ) 

#define InanoCADPreferencesDisplay_put_CursorSize(This,Path)	\
    ( (This)->lpVtbl -> put_CursorSize(This,Path) ) 

#define InanoCADPreferencesDisplay_get_CursorSize(This,Path)	\
    ( (This)->lpVtbl -> get_CursorSize(This,Path) ) 

#define InanoCADPreferencesDisplay_put_DockedVisibleLines(This,Path)	\
    ( (This)->lpVtbl -> put_DockedVisibleLines(This,Path) ) 

#define InanoCADPreferencesDisplay_get_DockedVisibleLines(This,Path)	\
    ( (This)->lpVtbl -> get_DockedVisibleLines(This,Path) ) 

#define InanoCADPreferencesDisplay_put_ShowRasterImage(This,Path)	\
    ( (This)->lpVtbl -> put_ShowRasterImage(This,Path) ) 

#define InanoCADPreferencesDisplay_get_ShowRasterImage(This,Path)	\
    ( (This)->lpVtbl -> get_ShowRasterImage(This,Path) ) 

#define InanoCADPreferencesDisplay_put_GraphicsWinModelBackgrndColor(This,color)	\
    ( (This)->lpVtbl -> put_GraphicsWinModelBackgrndColor(This,color) ) 

#define InanoCADPreferencesDisplay_get_GraphicsWinModelBackgrndColor(This,color)	\
    ( (This)->lpVtbl -> get_GraphicsWinModelBackgrndColor(This,color) ) 

#define InanoCADPreferencesDisplay_put_ModelCrosshairColor(This,crossHairColor)	\
    ( (This)->lpVtbl -> put_ModelCrosshairColor(This,crossHairColor) ) 

#define InanoCADPreferencesDisplay_get_ModelCrosshairColor(This,crossHairColor)	\
    ( (This)->lpVtbl -> get_ModelCrosshairColor(This,crossHairColor) ) 

#define InanoCADPreferencesDisplay_put_GraphicsWinLayoutBackgrndColor(This,color)	\
    ( (This)->lpVtbl -> put_GraphicsWinLayoutBackgrndColor(This,color) ) 

#define InanoCADPreferencesDisplay_get_GraphicsWinLayoutBackgrndColor(This,color)	\
    ( (This)->lpVtbl -> get_GraphicsWinLayoutBackgrndColor(This,color) ) 

#define InanoCADPreferencesDisplay_put_TextWinBackgrndColor(This,Path)	\
    ( (This)->lpVtbl -> put_TextWinBackgrndColor(This,Path) ) 

#define InanoCADPreferencesDisplay_get_TextWinBackgrndColor(This,Path)	\
    ( (This)->lpVtbl -> get_TextWinBackgrndColor(This,Path) ) 

#define InanoCADPreferencesDisplay_put_TextWinTextColor(This,Path)	\
    ( (This)->lpVtbl -> put_TextWinTextColor(This,Path) ) 

#define InanoCADPreferencesDisplay_get_TextWinTextColor(This,Path)	\
    ( (This)->lpVtbl -> get_TextWinTextColor(This,Path) ) 

#define InanoCADPreferencesDisplay_put_LayoutCrosshairColor(This,crossHairColor)	\
    ( (This)->lpVtbl -> put_LayoutCrosshairColor(This,crossHairColor) ) 

#define InanoCADPreferencesDisplay_get_LayoutCrosshairColor(This,crossHairColor)	\
    ( (This)->lpVtbl -> get_LayoutCrosshairColor(This,crossHairColor) ) 

#define InanoCADPreferencesDisplay_put_AutoTrackingVecColor(This,AutoTrackingVecColor)	\
    ( (This)->lpVtbl -> put_AutoTrackingVecColor(This,AutoTrackingVecColor) ) 

#define InanoCADPreferencesDisplay_get_AutoTrackingVecColor(This,AutoTrackingVecColor)	\
    ( (This)->lpVtbl -> get_AutoTrackingVecColor(This,AutoTrackingVecColor) ) 

#define InanoCADPreferencesDisplay_put_TextFont(This,Path)	\
    ( (This)->lpVtbl -> put_TextFont(This,Path) ) 

#define InanoCADPreferencesDisplay_get_TextFont(This,Path)	\
    ( (This)->lpVtbl -> get_TextFont(This,Path) ) 

#define InanoCADPreferencesDisplay_put_TextFontStyle(This,Path)	\
    ( (This)->lpVtbl -> put_TextFontStyle(This,Path) ) 

#define InanoCADPreferencesDisplay_get_TextFontStyle(This,Path)	\
    ( (This)->lpVtbl -> get_TextFontStyle(This,Path) ) 

#define InanoCADPreferencesDisplay_put_TextFontSize(This,Path)	\
    ( (This)->lpVtbl -> put_TextFontSize(This,Path) ) 

#define InanoCADPreferencesDisplay_get_TextFontSize(This,Path)	\
    ( (This)->lpVtbl -> get_TextFontSize(This,Path) ) 

#define InanoCADPreferencesDisplay_put_HistoryLines(This,Path)	\
    ( (This)->lpVtbl -> put_HistoryLines(This,Path) ) 

#define InanoCADPreferencesDisplay_get_HistoryLines(This,Path)	\
    ( (This)->lpVtbl -> get_HistoryLines(This,Path) ) 

#define InanoCADPreferencesDisplay_put_MaxWindow(This,Path)	\
    ( (This)->lpVtbl -> put_MaxWindow(This,Path) ) 

#define InanoCADPreferencesDisplay_get_MaxWindow(This,Path)	\
    ( (This)->lpVtbl -> get_MaxWindow(This,Path) ) 

#define InanoCADPreferencesDisplay_put_DisplayLayoutTabs(This,Path)	\
    ( (This)->lpVtbl -> put_DisplayLayoutTabs(This,Path) ) 

#define InanoCADPreferencesDisplay_get_DisplayLayoutTabs(This,Path)	\
    ( (This)->lpVtbl -> get_DisplayLayoutTabs(This,Path) ) 

#define InanoCADPreferencesDisplay_put_ImageFrameHighlight(This,Path)	\
    ( (This)->lpVtbl -> put_ImageFrameHighlight(This,Path) ) 

#define InanoCADPreferencesDisplay_get_ImageFrameHighlight(This,Path)	\
    ( (This)->lpVtbl -> get_ImageFrameHighlight(This,Path) ) 

#define InanoCADPreferencesDisplay_put_TrueColorImages(This,Path)	\
    ( (This)->lpVtbl -> put_TrueColorImages(This,Path) ) 

#define InanoCADPreferencesDisplay_get_TrueColorImages(This,Path)	\
    ( (This)->lpVtbl -> get_TrueColorImages(This,Path) ) 

#define InanoCADPreferencesDisplay_put_XRefFadeIntensity(This,Path)	\
    ( (This)->lpVtbl -> put_XRefFadeIntensity(This,Path) ) 

#define InanoCADPreferencesDisplay_get_XRefFadeIntensity(This,Path)	\
    ( (This)->lpVtbl -> get_XRefFadeIntensity(This,Path) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferencesDisplay_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferencesOpenSave_INTERFACE_DEFINED__
#define __InanoCADPreferencesOpenSave_INTERFACE_DEFINED__

/* interface InanoCADPreferencesOpenSave */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferencesOpenSave;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC76DD28-BBB7-4FEC-8974-9E7AAFDA5425")
    InanoCADPreferencesOpenSave : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SavePreviewThumbnail( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SavePreviewThumbnail( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IncrementalSavePercent( 
            /* [in] */ int Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IncrementalSavePercent( 
            /* [retval][out] */ int *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoSaveInterval( 
            /* [in] */ int Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSaveInterval( 
            /* [retval][out] */ int *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CreateBackup( 
            /* [in] */ VARIANT_BOOL CreateBackup) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CreateBackup( 
            /* [retval][out] */ VARIANT_BOOL *CreateBackup) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FullCRCValidation( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FullCRCValidation( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LogFileOn( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LogFileOn( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TempFileExtension( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TempFileExtension( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_XrefDemandLoad( 
            /* [in] */ AcXRefDemandLoad Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_XrefDemandLoad( 
            /* [retval][out] */ AcXRefDemandLoad *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DemandLoadARXApp( 
            /* [in] */ AcARXDemandLoad Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DemandLoadARXApp( 
            /* [retval][out] */ AcARXDemandLoad *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ProxyImage( 
            /* [in] */ AcProxyImage Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProxyImage( 
            /* [retval][out] */ AcProxyImage *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ShowProxyDialogBox( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ShowProxyDialogBox( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoAudit( 
            /* [in] */ VARIANT_BOOL bAudit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoAudit( 
            /* [retval][out] */ VARIANT_BOOL *bAudit) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SaveAsType( 
            /* [in] */ AcSaveAsType Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SaveAsType( 
            /* [retval][out] */ AcSaveAsType *Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MRUNumber( 
            /* [retval][out] */ long *Path) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesOpenSaveVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferencesOpenSave * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferencesOpenSave * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferencesOpenSave * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferencesOpenSave * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_SavePreviewThumbnail)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SavePreviewThumbnail )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_SavePreviewThumbnail)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SavePreviewThumbnail )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_IncrementalSavePercent)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IncrementalSavePercent )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ int Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_IncrementalSavePercent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IncrementalSavePercent )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ int *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_AutoSaveInterval)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSaveInterval )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ int Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_AutoSaveInterval)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSaveInterval )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ int *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_CreateBackup)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CreateBackup )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ VARIANT_BOOL CreateBackup);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_CreateBackup)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CreateBackup )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ VARIANT_BOOL *CreateBackup);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_FullCRCValidation)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullCRCValidation )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_FullCRCValidation)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullCRCValidation )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_LogFileOn)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LogFileOn )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_LogFileOn)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LogFileOn )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_TempFileExtension)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TempFileExtension )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_TempFileExtension)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TempFileExtension )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_XrefDemandLoad)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_XrefDemandLoad )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ AcXRefDemandLoad Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_XrefDemandLoad)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_XrefDemandLoad )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ AcXRefDemandLoad *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_DemandLoadARXApp)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DemandLoadARXApp )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ AcARXDemandLoad Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_DemandLoadARXApp)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DemandLoadARXApp )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ AcARXDemandLoad *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_ProxyImage)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyImage )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ AcProxyImage Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_ProxyImage)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyImage )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ AcProxyImage *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_ShowProxyDialogBox)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShowProxyDialogBox )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_ShowProxyDialogBox)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShowProxyDialogBox )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_AutoAudit)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoAudit )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ VARIANT_BOOL bAudit);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_AutoAudit)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoAudit )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ VARIANT_BOOL *bAudit);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, put_SaveAsType)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SaveAsType )( 
            InanoCADPreferencesOpenSave * This,
            /* [in] */ AcSaveAsType Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_SaveAsType)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SaveAsType )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ AcSaveAsType *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOpenSave, get_MRUNumber)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MRUNumber )( 
            InanoCADPreferencesOpenSave * This,
            /* [retval][out] */ long *Path);
        
        END_INTERFACE
    } InanoCADPreferencesOpenSaveVtbl;

    interface InanoCADPreferencesOpenSave
    {
        CONST_VTBL struct InanoCADPreferencesOpenSaveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferencesOpenSave_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferencesOpenSave_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferencesOpenSave_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferencesOpenSave_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferencesOpenSave_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferencesOpenSave_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferencesOpenSave_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferencesOpenSave_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferencesOpenSave_put_SavePreviewThumbnail(This,Path)	\
    ( (This)->lpVtbl -> put_SavePreviewThumbnail(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_SavePreviewThumbnail(This,Path)	\
    ( (This)->lpVtbl -> get_SavePreviewThumbnail(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_IncrementalSavePercent(This,Path)	\
    ( (This)->lpVtbl -> put_IncrementalSavePercent(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_IncrementalSavePercent(This,Path)	\
    ( (This)->lpVtbl -> get_IncrementalSavePercent(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_AutoSaveInterval(This,Path)	\
    ( (This)->lpVtbl -> put_AutoSaveInterval(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_AutoSaveInterval(This,Path)	\
    ( (This)->lpVtbl -> get_AutoSaveInterval(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_CreateBackup(This,CreateBackup)	\
    ( (This)->lpVtbl -> put_CreateBackup(This,CreateBackup) ) 

#define InanoCADPreferencesOpenSave_get_CreateBackup(This,CreateBackup)	\
    ( (This)->lpVtbl -> get_CreateBackup(This,CreateBackup) ) 

#define InanoCADPreferencesOpenSave_put_FullCRCValidation(This,Path)	\
    ( (This)->lpVtbl -> put_FullCRCValidation(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_FullCRCValidation(This,Path)	\
    ( (This)->lpVtbl -> get_FullCRCValidation(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_LogFileOn(This,Path)	\
    ( (This)->lpVtbl -> put_LogFileOn(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_LogFileOn(This,Path)	\
    ( (This)->lpVtbl -> get_LogFileOn(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_TempFileExtension(This,Path)	\
    ( (This)->lpVtbl -> put_TempFileExtension(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_TempFileExtension(This,Path)	\
    ( (This)->lpVtbl -> get_TempFileExtension(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_XrefDemandLoad(This,Path)	\
    ( (This)->lpVtbl -> put_XrefDemandLoad(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_XrefDemandLoad(This,Path)	\
    ( (This)->lpVtbl -> get_XrefDemandLoad(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_DemandLoadARXApp(This,Path)	\
    ( (This)->lpVtbl -> put_DemandLoadARXApp(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_DemandLoadARXApp(This,Path)	\
    ( (This)->lpVtbl -> get_DemandLoadARXApp(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_ProxyImage(This,Path)	\
    ( (This)->lpVtbl -> put_ProxyImage(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_ProxyImage(This,Path)	\
    ( (This)->lpVtbl -> get_ProxyImage(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_ShowProxyDialogBox(This,Path)	\
    ( (This)->lpVtbl -> put_ShowProxyDialogBox(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_ShowProxyDialogBox(This,Path)	\
    ( (This)->lpVtbl -> get_ShowProxyDialogBox(This,Path) ) 

#define InanoCADPreferencesOpenSave_put_AutoAudit(This,bAudit)	\
    ( (This)->lpVtbl -> put_AutoAudit(This,bAudit) ) 

#define InanoCADPreferencesOpenSave_get_AutoAudit(This,bAudit)	\
    ( (This)->lpVtbl -> get_AutoAudit(This,bAudit) ) 

#define InanoCADPreferencesOpenSave_put_SaveAsType(This,Path)	\
    ( (This)->lpVtbl -> put_SaveAsType(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_SaveAsType(This,Path)	\
    ( (This)->lpVtbl -> get_SaveAsType(This,Path) ) 

#define InanoCADPreferencesOpenSave_get_MRUNumber(This,Path)	\
    ( (This)->lpVtbl -> get_MRUNumber(This,Path) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferencesOpenSave_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferencesOutput_INTERFACE_DEFINED__
#define __InanoCADPreferencesOutput_INTERFACE_DEFINED__

/* interface InanoCADPreferencesOutput */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferencesOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A6CF6B5D-88CB-418B-A810-331121823163")
    InanoCADPreferencesOutput : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DefaultOutputDevice( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DefaultOutputDevice( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrinterSpoolAlert( 
            /* [in] */ AcPrinterSpoolAlert Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrinterSpoolAlert( 
            /* [retval][out] */ AcPrinterSpoolAlert *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrinterPaperSizeAlert( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrinterPaperSizeAlert( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PlotLegacy( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PlotLegacy( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_OLEQuality( 
            /* [in] */ AcOleQuality Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OLEQuality( 
            /* [retval][out] */ AcOleQuality *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_UseLastPlotSettings( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UseLastPlotSettings( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PlotPolicy( 
            /* [in] */ AcPlotPolicy Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PlotPolicy( 
            /* [retval][out] */ AcPlotPolicy *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DefaultPlotStyleTable( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DefaultPlotStyleTable( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DefaultPlotStyleForObjects( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DefaultPlotStyleForObjects( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DefaultPlotStyleForLayer( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DefaultPlotStyleForLayer( 
            /* [retval][out] */ BSTR *Path) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesOutputVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferencesOutput * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferencesOutput * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferencesOutput * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferencesOutput * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_DefaultOutputDevice)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultOutputDevice )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_DefaultOutputDevice)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultOutputDevice )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_PrinterSpoolAlert)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterSpoolAlert )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ AcPrinterSpoolAlert Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_PrinterSpoolAlert)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterSpoolAlert )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ AcPrinterSpoolAlert *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_PrinterPaperSizeAlert)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterPaperSizeAlert )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_PrinterPaperSizeAlert)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterPaperSizeAlert )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_PlotLegacy)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PlotLegacy )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_PlotLegacy)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlotLegacy )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_OLEQuality)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_OLEQuality )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ AcOleQuality Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_OLEQuality)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OLEQuality )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ AcOleQuality *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_UseLastPlotSettings)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseLastPlotSettings )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_UseLastPlotSettings)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseLastPlotSettings )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_PlotPolicy)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PlotPolicy )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ AcPlotPolicy Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_PlotPolicy)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlotPolicy )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ AcPlotPolicy *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_DefaultPlotStyleTable)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultPlotStyleTable )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_DefaultPlotStyleTable)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultPlotStyleTable )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_DefaultPlotStyleForObjects)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultPlotStyleForObjects )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_DefaultPlotStyleForObjects)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultPlotStyleForObjects )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, put_DefaultPlotStyleForLayer)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultPlotStyleForLayer )( 
            InanoCADPreferencesOutput * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesOutput, get_DefaultPlotStyleForLayer)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultPlotStyleForLayer )( 
            InanoCADPreferencesOutput * This,
            /* [retval][out] */ BSTR *Path);
        
        END_INTERFACE
    } InanoCADPreferencesOutputVtbl;

    interface InanoCADPreferencesOutput
    {
        CONST_VTBL struct InanoCADPreferencesOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferencesOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferencesOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferencesOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferencesOutput_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferencesOutput_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferencesOutput_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferencesOutput_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferencesOutput_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferencesOutput_put_DefaultOutputDevice(This,Path)	\
    ( (This)->lpVtbl -> put_DefaultOutputDevice(This,Path) ) 

#define InanoCADPreferencesOutput_get_DefaultOutputDevice(This,Path)	\
    ( (This)->lpVtbl -> get_DefaultOutputDevice(This,Path) ) 

#define InanoCADPreferencesOutput_put_PrinterSpoolAlert(This,Path)	\
    ( (This)->lpVtbl -> put_PrinterSpoolAlert(This,Path) ) 

#define InanoCADPreferencesOutput_get_PrinterSpoolAlert(This,Path)	\
    ( (This)->lpVtbl -> get_PrinterSpoolAlert(This,Path) ) 

#define InanoCADPreferencesOutput_put_PrinterPaperSizeAlert(This,Path)	\
    ( (This)->lpVtbl -> put_PrinterPaperSizeAlert(This,Path) ) 

#define InanoCADPreferencesOutput_get_PrinterPaperSizeAlert(This,Path)	\
    ( (This)->lpVtbl -> get_PrinterPaperSizeAlert(This,Path) ) 

#define InanoCADPreferencesOutput_put_PlotLegacy(This,Path)	\
    ( (This)->lpVtbl -> put_PlotLegacy(This,Path) ) 

#define InanoCADPreferencesOutput_get_PlotLegacy(This,Path)	\
    ( (This)->lpVtbl -> get_PlotLegacy(This,Path) ) 

#define InanoCADPreferencesOutput_put_OLEQuality(This,Path)	\
    ( (This)->lpVtbl -> put_OLEQuality(This,Path) ) 

#define InanoCADPreferencesOutput_get_OLEQuality(This,Path)	\
    ( (This)->lpVtbl -> get_OLEQuality(This,Path) ) 

#define InanoCADPreferencesOutput_put_UseLastPlotSettings(This,Path)	\
    ( (This)->lpVtbl -> put_UseLastPlotSettings(This,Path) ) 

#define InanoCADPreferencesOutput_get_UseLastPlotSettings(This,Path)	\
    ( (This)->lpVtbl -> get_UseLastPlotSettings(This,Path) ) 

#define InanoCADPreferencesOutput_put_PlotPolicy(This,Path)	\
    ( (This)->lpVtbl -> put_PlotPolicy(This,Path) ) 

#define InanoCADPreferencesOutput_get_PlotPolicy(This,Path)	\
    ( (This)->lpVtbl -> get_PlotPolicy(This,Path) ) 

#define InanoCADPreferencesOutput_put_DefaultPlotStyleTable(This,Path)	\
    ( (This)->lpVtbl -> put_DefaultPlotStyleTable(This,Path) ) 

#define InanoCADPreferencesOutput_get_DefaultPlotStyleTable(This,Path)	\
    ( (This)->lpVtbl -> get_DefaultPlotStyleTable(This,Path) ) 

#define InanoCADPreferencesOutput_put_DefaultPlotStyleForObjects(This,Path)	\
    ( (This)->lpVtbl -> put_DefaultPlotStyleForObjects(This,Path) ) 

#define InanoCADPreferencesOutput_get_DefaultPlotStyleForObjects(This,Path)	\
    ( (This)->lpVtbl -> get_DefaultPlotStyleForObjects(This,Path) ) 

#define InanoCADPreferencesOutput_put_DefaultPlotStyleForLayer(This,Path)	\
    ( (This)->lpVtbl -> put_DefaultPlotStyleForLayer(This,Path) ) 

#define InanoCADPreferencesOutput_get_DefaultPlotStyleForLayer(This,Path)	\
    ( (This)->lpVtbl -> get_DefaultPlotStyleForLayer(This,Path) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferencesOutput_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferencesSystem_INTERFACE_DEFINED__
#define __InanoCADPreferencesSystem_INTERFACE_DEFINED__

/* interface InanoCADPreferencesSystem */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferencesSystem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D5CF27D1-DDE4-4B5C-92F1-FD03FFA21B10")
    InanoCADPreferencesSystem : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SingleDocumentMode( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SingleDocumentMode( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DisplayOLEScale( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayOLEScale( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_StoreSQLIndex( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_StoreSQLIndex( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TablesReadOnly( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TablesReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_EnableStartupDialog( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EnableStartupDialog( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_BeepOnError( 
            /* [in] */ VARIANT_BOOL BeepOnError) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BeepOnError( 
            /* [retval][out] */ VARIANT_BOOL *BeepOnError) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ShowWarningMessages( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ShowWarningMessages( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LoadAcadLspInAllDocuments( 
            /* [in] */ VARIANT_BOOL pALID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LoadAcadLspInAllDocuments( 
            /* [retval][out] */ VARIANT_BOOL *pALID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesSystemVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferencesSystem * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferencesSystem * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferencesSystem * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferencesSystem * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferencesSystem * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, put_SingleDocumentMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SingleDocumentMode )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, get_SingleDocumentMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SingleDocumentMode )( 
            InanoCADPreferencesSystem * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, put_DisplayOLEScale)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayOLEScale )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, get_DisplayOLEScale)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayOLEScale )( 
            InanoCADPreferencesSystem * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, put_StoreSQLIndex)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StoreSQLIndex )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, get_StoreSQLIndex)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StoreSQLIndex )( 
            InanoCADPreferencesSystem * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, put_TablesReadOnly)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TablesReadOnly )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, get_TablesReadOnly)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TablesReadOnly )( 
            InanoCADPreferencesSystem * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, put_EnableStartupDialog)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnableStartupDialog )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, get_EnableStartupDialog)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnableStartupDialog )( 
            InanoCADPreferencesSystem * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, put_BeepOnError)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BeepOnError )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ VARIANT_BOOL BeepOnError);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, get_BeepOnError)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BeepOnError )( 
            InanoCADPreferencesSystem * This,
            /* [retval][out] */ VARIANT_BOOL *BeepOnError);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, put_ShowWarningMessages)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShowWarningMessages )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, get_ShowWarningMessages)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShowWarningMessages )( 
            InanoCADPreferencesSystem * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, put_LoadAcadLspInAllDocuments)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LoadAcadLspInAllDocuments )( 
            InanoCADPreferencesSystem * This,
            /* [in] */ VARIANT_BOOL pALID);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSystem, get_LoadAcadLspInAllDocuments)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadAcadLspInAllDocuments )( 
            InanoCADPreferencesSystem * This,
            /* [retval][out] */ VARIANT_BOOL *pALID);
        
        END_INTERFACE
    } InanoCADPreferencesSystemVtbl;

    interface InanoCADPreferencesSystem
    {
        CONST_VTBL struct InanoCADPreferencesSystemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferencesSystem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferencesSystem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferencesSystem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferencesSystem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferencesSystem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferencesSystem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferencesSystem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferencesSystem_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferencesSystem_put_SingleDocumentMode(This,Path)	\
    ( (This)->lpVtbl -> put_SingleDocumentMode(This,Path) ) 

#define InanoCADPreferencesSystem_get_SingleDocumentMode(This,Path)	\
    ( (This)->lpVtbl -> get_SingleDocumentMode(This,Path) ) 

#define InanoCADPreferencesSystem_put_DisplayOLEScale(This,Path)	\
    ( (This)->lpVtbl -> put_DisplayOLEScale(This,Path) ) 

#define InanoCADPreferencesSystem_get_DisplayOLEScale(This,Path)	\
    ( (This)->lpVtbl -> get_DisplayOLEScale(This,Path) ) 

#define InanoCADPreferencesSystem_put_StoreSQLIndex(This,Path)	\
    ( (This)->lpVtbl -> put_StoreSQLIndex(This,Path) ) 

#define InanoCADPreferencesSystem_get_StoreSQLIndex(This,Path)	\
    ( (This)->lpVtbl -> get_StoreSQLIndex(This,Path) ) 

#define InanoCADPreferencesSystem_put_TablesReadOnly(This,Path)	\
    ( (This)->lpVtbl -> put_TablesReadOnly(This,Path) ) 

#define InanoCADPreferencesSystem_get_TablesReadOnly(This,Path)	\
    ( (This)->lpVtbl -> get_TablesReadOnly(This,Path) ) 

#define InanoCADPreferencesSystem_put_EnableStartupDialog(This,Path)	\
    ( (This)->lpVtbl -> put_EnableStartupDialog(This,Path) ) 

#define InanoCADPreferencesSystem_get_EnableStartupDialog(This,Path)	\
    ( (This)->lpVtbl -> get_EnableStartupDialog(This,Path) ) 

#define InanoCADPreferencesSystem_put_BeepOnError(This,BeepOnError)	\
    ( (This)->lpVtbl -> put_BeepOnError(This,BeepOnError) ) 

#define InanoCADPreferencesSystem_get_BeepOnError(This,BeepOnError)	\
    ( (This)->lpVtbl -> get_BeepOnError(This,BeepOnError) ) 

#define InanoCADPreferencesSystem_put_ShowWarningMessages(This,Path)	\
    ( (This)->lpVtbl -> put_ShowWarningMessages(This,Path) ) 

#define InanoCADPreferencesSystem_get_ShowWarningMessages(This,Path)	\
    ( (This)->lpVtbl -> get_ShowWarningMessages(This,Path) ) 

#define InanoCADPreferencesSystem_put_LoadAcadLspInAllDocuments(This,pALID)	\
    ( (This)->lpVtbl -> put_LoadAcadLspInAllDocuments(This,pALID) ) 

#define InanoCADPreferencesSystem_get_LoadAcadLspInAllDocuments(This,pALID)	\
    ( (This)->lpVtbl -> get_LoadAcadLspInAllDocuments(This,pALID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferencesSystem_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferencesUser_INTERFACE_DEFINED__
#define __InanoCADPreferencesUser_INTERFACE_DEFINED__

/* interface InanoCADPreferencesUser */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferencesUser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("596952FF-2FEE-44E9-946E-B25F6F325DF4")
    InanoCADPreferencesUser : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyboardAccelerator( 
            /* [in] */ AcKeyboardAccelerator Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KeyboardAccelerator( 
            /* [retval][out] */ AcKeyboardAccelerator *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyboardPriority( 
            /* [in] */ AcKeyboardPriority Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KeyboardPriority( 
            /* [retval][out] */ AcKeyboardPriority *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HyperlinkDisplayCursor( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HyperlinkDisplayCursor( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_HyperlinkDisplayTooltip( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HyperlinkDisplayTooltip( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ADCInsertUnitsDefaultSource( 
            /* [in] */ AcInsertUnits pIU) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ADCInsertUnitsDefaultSource( 
            /* [retval][out] */ AcInsertUnits *pIU) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ADCInsertUnitsDefaultTarget( 
            /* [in] */ AcInsertUnits pSUunits) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ADCInsertUnitsDefaultTarget( 
            /* [retval][out] */ AcInsertUnits *pSUunits) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ShortCutMenuDisplay( 
            /* [in] */ VARIANT_BOOL pSCM) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ShortCutMenuDisplay( 
            /* [retval][out] */ VARIANT_BOOL *pSCM) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SCMDefaultMode( 
            /* [in] */ AcDrawingAreaSCMDefault pSCM) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SCMDefaultMode( 
            /* [retval][out] */ AcDrawingAreaSCMDefault *pSCM) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SCMEditMode( 
            /* [in] */ AcDrawingAreaSCMEdit pSCM) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SCMEditMode( 
            /* [retval][out] */ AcDrawingAreaSCMEdit *pSCM) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SCMCommandMode( 
            /* [in] */ AcDrawingAreaSCMCommand pSCM) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SCMCommandMode( 
            /* [retval][out] */ AcDrawingAreaSCMCommand *pSCM) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SCMTimeMode( 
            /* [in] */ VARIANT_BOOL time) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SCMTimeMode( 
            /* [retval][out] */ VARIANT_BOOL *time) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SCMTimeValue( 
            /* [in] */ int time) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SCMTimeValue( 
            /* [retval][out] */ int *time) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesUserVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferencesUser * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferencesUser * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferencesUser * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferencesUser * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferencesUser * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferencesUser * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferencesUser * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_KeyboardAccelerator)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardAccelerator )( 
            InanoCADPreferencesUser * This,
            /* [in] */ AcKeyboardAccelerator Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_KeyboardAccelerator)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardAccelerator )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ AcKeyboardAccelerator *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_KeyboardPriority)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardPriority )( 
            InanoCADPreferencesUser * This,
            /* [in] */ AcKeyboardPriority Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_KeyboardPriority)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardPriority )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ AcKeyboardPriority *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_HyperlinkDisplayCursor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HyperlinkDisplayCursor )( 
            InanoCADPreferencesUser * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_HyperlinkDisplayCursor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HyperlinkDisplayCursor )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_HyperlinkDisplayTooltip)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HyperlinkDisplayTooltip )( 
            InanoCADPreferencesUser * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_HyperlinkDisplayTooltip)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HyperlinkDisplayTooltip )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_ADCInsertUnitsDefaultSource)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ADCInsertUnitsDefaultSource )( 
            InanoCADPreferencesUser * This,
            /* [in] */ AcInsertUnits pIU);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_ADCInsertUnitsDefaultSource)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ADCInsertUnitsDefaultSource )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ AcInsertUnits *pIU);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_ADCInsertUnitsDefaultTarget)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ADCInsertUnitsDefaultTarget )( 
            InanoCADPreferencesUser * This,
            /* [in] */ AcInsertUnits pSUunits);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_ADCInsertUnitsDefaultTarget)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ADCInsertUnitsDefaultTarget )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ AcInsertUnits *pSUunits);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_ShortCutMenuDisplay)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShortCutMenuDisplay )( 
            InanoCADPreferencesUser * This,
            /* [in] */ VARIANT_BOOL pSCM);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_ShortCutMenuDisplay)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShortCutMenuDisplay )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ VARIANT_BOOL *pSCM);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_SCMDefaultMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SCMDefaultMode )( 
            InanoCADPreferencesUser * This,
            /* [in] */ AcDrawingAreaSCMDefault pSCM);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_SCMDefaultMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SCMDefaultMode )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ AcDrawingAreaSCMDefault *pSCM);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_SCMEditMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SCMEditMode )( 
            InanoCADPreferencesUser * This,
            /* [in] */ AcDrawingAreaSCMEdit pSCM);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_SCMEditMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SCMEditMode )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ AcDrawingAreaSCMEdit *pSCM);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_SCMCommandMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SCMCommandMode )( 
            InanoCADPreferencesUser * This,
            /* [in] */ AcDrawingAreaSCMCommand pSCM);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_SCMCommandMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SCMCommandMode )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ AcDrawingAreaSCMCommand *pSCM);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_SCMTimeMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SCMTimeMode )( 
            InanoCADPreferencesUser * This,
            /* [in] */ VARIANT_BOOL time);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_SCMTimeMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SCMTimeMode )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ VARIANT_BOOL *time);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, put_SCMTimeValue)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SCMTimeValue )( 
            InanoCADPreferencesUser * This,
            /* [in] */ int time);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesUser, get_SCMTimeValue)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SCMTimeValue )( 
            InanoCADPreferencesUser * This,
            /* [retval][out] */ int *time);
        
        END_INTERFACE
    } InanoCADPreferencesUserVtbl;

    interface InanoCADPreferencesUser
    {
        CONST_VTBL struct InanoCADPreferencesUserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferencesUser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferencesUser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferencesUser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferencesUser_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferencesUser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferencesUser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferencesUser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferencesUser_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferencesUser_put_KeyboardAccelerator(This,Path)	\
    ( (This)->lpVtbl -> put_KeyboardAccelerator(This,Path) ) 

#define InanoCADPreferencesUser_get_KeyboardAccelerator(This,Path)	\
    ( (This)->lpVtbl -> get_KeyboardAccelerator(This,Path) ) 

#define InanoCADPreferencesUser_put_KeyboardPriority(This,Path)	\
    ( (This)->lpVtbl -> put_KeyboardPriority(This,Path) ) 

#define InanoCADPreferencesUser_get_KeyboardPriority(This,Path)	\
    ( (This)->lpVtbl -> get_KeyboardPriority(This,Path) ) 

#define InanoCADPreferencesUser_put_HyperlinkDisplayCursor(This,Path)	\
    ( (This)->lpVtbl -> put_HyperlinkDisplayCursor(This,Path) ) 

#define InanoCADPreferencesUser_get_HyperlinkDisplayCursor(This,Path)	\
    ( (This)->lpVtbl -> get_HyperlinkDisplayCursor(This,Path) ) 

#define InanoCADPreferencesUser_put_HyperlinkDisplayTooltip(This,Path)	\
    ( (This)->lpVtbl -> put_HyperlinkDisplayTooltip(This,Path) ) 

#define InanoCADPreferencesUser_get_HyperlinkDisplayTooltip(This,Path)	\
    ( (This)->lpVtbl -> get_HyperlinkDisplayTooltip(This,Path) ) 

#define InanoCADPreferencesUser_put_ADCInsertUnitsDefaultSource(This,pIU)	\
    ( (This)->lpVtbl -> put_ADCInsertUnitsDefaultSource(This,pIU) ) 

#define InanoCADPreferencesUser_get_ADCInsertUnitsDefaultSource(This,pIU)	\
    ( (This)->lpVtbl -> get_ADCInsertUnitsDefaultSource(This,pIU) ) 

#define InanoCADPreferencesUser_put_ADCInsertUnitsDefaultTarget(This,pSUunits)	\
    ( (This)->lpVtbl -> put_ADCInsertUnitsDefaultTarget(This,pSUunits) ) 

#define InanoCADPreferencesUser_get_ADCInsertUnitsDefaultTarget(This,pSUunits)	\
    ( (This)->lpVtbl -> get_ADCInsertUnitsDefaultTarget(This,pSUunits) ) 

#define InanoCADPreferencesUser_put_ShortCutMenuDisplay(This,pSCM)	\
    ( (This)->lpVtbl -> put_ShortCutMenuDisplay(This,pSCM) ) 

#define InanoCADPreferencesUser_get_ShortCutMenuDisplay(This,pSCM)	\
    ( (This)->lpVtbl -> get_ShortCutMenuDisplay(This,pSCM) ) 

#define InanoCADPreferencesUser_put_SCMDefaultMode(This,pSCM)	\
    ( (This)->lpVtbl -> put_SCMDefaultMode(This,pSCM) ) 

#define InanoCADPreferencesUser_get_SCMDefaultMode(This,pSCM)	\
    ( (This)->lpVtbl -> get_SCMDefaultMode(This,pSCM) ) 

#define InanoCADPreferencesUser_put_SCMEditMode(This,pSCM)	\
    ( (This)->lpVtbl -> put_SCMEditMode(This,pSCM) ) 

#define InanoCADPreferencesUser_get_SCMEditMode(This,pSCM)	\
    ( (This)->lpVtbl -> get_SCMEditMode(This,pSCM) ) 

#define InanoCADPreferencesUser_put_SCMCommandMode(This,pSCM)	\
    ( (This)->lpVtbl -> put_SCMCommandMode(This,pSCM) ) 

#define InanoCADPreferencesUser_get_SCMCommandMode(This,pSCM)	\
    ( (This)->lpVtbl -> get_SCMCommandMode(This,pSCM) ) 

#define InanoCADPreferencesUser_put_SCMTimeMode(This,time)	\
    ( (This)->lpVtbl -> put_SCMTimeMode(This,time) ) 

#define InanoCADPreferencesUser_get_SCMTimeMode(This,time)	\
    ( (This)->lpVtbl -> get_SCMTimeMode(This,time) ) 

#define InanoCADPreferencesUser_put_SCMTimeValue(This,time)	\
    ( (This)->lpVtbl -> put_SCMTimeValue(This,time) ) 

#define InanoCADPreferencesUser_get_SCMTimeValue(This,time)	\
    ( (This)->lpVtbl -> get_SCMTimeValue(This,time) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferencesUser_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferencesDrafting_INTERFACE_DEFINED__
#define __InanoCADPreferencesDrafting_INTERFACE_DEFINED__

/* interface InanoCADPreferencesDrafting */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferencesDrafting;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D8DC6B6A-F03F-490B-BE96-CC6506999D0E")
    InanoCADPreferencesDrafting : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoSnapMarker( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSnapMarker( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoSnapMagnet( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSnapMagnet( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoSnapTooltip( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSnapTooltip( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoSnapAperture( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSnapAperture( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoSnapApertureSize( 
            /* [in] */ long Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSnapApertureSize( 
            /* [retval][out] */ long *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoSnapMarkerColor( 
            /* [in] */ AcColor Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSnapMarkerColor( 
            /* [retval][out] */ AcColor *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoSnapMarkerSize( 
            /* [in] */ long Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoSnapMarkerSize( 
            /* [retval][out] */ long *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PolarTrackingVector( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PolarTrackingVector( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FullScreenTrackingVector( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FullScreenTrackingVector( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoTrackTooltip( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoTrackTooltip( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AlignmentPointAcquisition( 
            /* [in] */ AcAlignmentPointAcquisition Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AlignmentPointAcquisition( 
            /* [retval][out] */ AcAlignmentPointAcquisition *Path) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesDraftingVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferencesDrafting * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferencesDrafting * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferencesDrafting * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferencesDrafting * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_AutoSnapMarker)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSnapMarker )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_AutoSnapMarker)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSnapMarker )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_AutoSnapMagnet)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSnapMagnet )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_AutoSnapMagnet)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSnapMagnet )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_AutoSnapTooltip)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSnapTooltip )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_AutoSnapTooltip)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSnapTooltip )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_AutoSnapAperture)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSnapAperture )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_AutoSnapAperture)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSnapAperture )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_AutoSnapApertureSize)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSnapApertureSize )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ long Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_AutoSnapApertureSize)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSnapApertureSize )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ long *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_AutoSnapMarkerColor)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSnapMarkerColor )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ AcColor Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_AutoSnapMarkerColor)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSnapMarkerColor )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ AcColor *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_AutoSnapMarkerSize)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoSnapMarkerSize )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ long Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_AutoSnapMarkerSize)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoSnapMarkerSize )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ long *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_PolarTrackingVector)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PolarTrackingVector )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_PolarTrackingVector)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PolarTrackingVector )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_FullScreenTrackingVector)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTrackingVector )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_FullScreenTrackingVector)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreenTrackingVector )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_AutoTrackTooltip)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoTrackTooltip )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_AutoTrackTooltip)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoTrackTooltip )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, put_AlignmentPointAcquisition)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AlignmentPointAcquisition )( 
            InanoCADPreferencesDrafting * This,
            /* [in] */ AcAlignmentPointAcquisition Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesDrafting, get_AlignmentPointAcquisition)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AlignmentPointAcquisition )( 
            InanoCADPreferencesDrafting * This,
            /* [retval][out] */ AcAlignmentPointAcquisition *Path);
        
        END_INTERFACE
    } InanoCADPreferencesDraftingVtbl;

    interface InanoCADPreferencesDrafting
    {
        CONST_VTBL struct InanoCADPreferencesDraftingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferencesDrafting_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferencesDrafting_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferencesDrafting_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferencesDrafting_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferencesDrafting_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferencesDrafting_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferencesDrafting_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferencesDrafting_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferencesDrafting_put_AutoSnapMarker(This,Path)	\
    ( (This)->lpVtbl -> put_AutoSnapMarker(This,Path) ) 

#define InanoCADPreferencesDrafting_get_AutoSnapMarker(This,Path)	\
    ( (This)->lpVtbl -> get_AutoSnapMarker(This,Path) ) 

#define InanoCADPreferencesDrafting_put_AutoSnapMagnet(This,Path)	\
    ( (This)->lpVtbl -> put_AutoSnapMagnet(This,Path) ) 

#define InanoCADPreferencesDrafting_get_AutoSnapMagnet(This,Path)	\
    ( (This)->lpVtbl -> get_AutoSnapMagnet(This,Path) ) 

#define InanoCADPreferencesDrafting_put_AutoSnapTooltip(This,Path)	\
    ( (This)->lpVtbl -> put_AutoSnapTooltip(This,Path) ) 

#define InanoCADPreferencesDrafting_get_AutoSnapTooltip(This,Path)	\
    ( (This)->lpVtbl -> get_AutoSnapTooltip(This,Path) ) 

#define InanoCADPreferencesDrafting_put_AutoSnapAperture(This,Path)	\
    ( (This)->lpVtbl -> put_AutoSnapAperture(This,Path) ) 

#define InanoCADPreferencesDrafting_get_AutoSnapAperture(This,Path)	\
    ( (This)->lpVtbl -> get_AutoSnapAperture(This,Path) ) 

#define InanoCADPreferencesDrafting_put_AutoSnapApertureSize(This,Path)	\
    ( (This)->lpVtbl -> put_AutoSnapApertureSize(This,Path) ) 

#define InanoCADPreferencesDrafting_get_AutoSnapApertureSize(This,Path)	\
    ( (This)->lpVtbl -> get_AutoSnapApertureSize(This,Path) ) 

#define InanoCADPreferencesDrafting_put_AutoSnapMarkerColor(This,Path)	\
    ( (This)->lpVtbl -> put_AutoSnapMarkerColor(This,Path) ) 

#define InanoCADPreferencesDrafting_get_AutoSnapMarkerColor(This,Path)	\
    ( (This)->lpVtbl -> get_AutoSnapMarkerColor(This,Path) ) 

#define InanoCADPreferencesDrafting_put_AutoSnapMarkerSize(This,Path)	\
    ( (This)->lpVtbl -> put_AutoSnapMarkerSize(This,Path) ) 

#define InanoCADPreferencesDrafting_get_AutoSnapMarkerSize(This,Path)	\
    ( (This)->lpVtbl -> get_AutoSnapMarkerSize(This,Path) ) 

#define InanoCADPreferencesDrafting_put_PolarTrackingVector(This,Path)	\
    ( (This)->lpVtbl -> put_PolarTrackingVector(This,Path) ) 

#define InanoCADPreferencesDrafting_get_PolarTrackingVector(This,Path)	\
    ( (This)->lpVtbl -> get_PolarTrackingVector(This,Path) ) 

#define InanoCADPreferencesDrafting_put_FullScreenTrackingVector(This,Path)	\
    ( (This)->lpVtbl -> put_FullScreenTrackingVector(This,Path) ) 

#define InanoCADPreferencesDrafting_get_FullScreenTrackingVector(This,Path)	\
    ( (This)->lpVtbl -> get_FullScreenTrackingVector(This,Path) ) 

#define InanoCADPreferencesDrafting_put_AutoTrackTooltip(This,Path)	\
    ( (This)->lpVtbl -> put_AutoTrackTooltip(This,Path) ) 

#define InanoCADPreferencesDrafting_get_AutoTrackTooltip(This,Path)	\
    ( (This)->lpVtbl -> get_AutoTrackTooltip(This,Path) ) 

#define InanoCADPreferencesDrafting_put_AlignmentPointAcquisition(This,Path)	\
    ( (This)->lpVtbl -> put_AlignmentPointAcquisition(This,Path) ) 

#define InanoCADPreferencesDrafting_get_AlignmentPointAcquisition(This,Path)	\
    ( (This)->lpVtbl -> get_AlignmentPointAcquisition(This,Path) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferencesDrafting_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferencesSelection_INTERFACE_DEFINED__
#define __InanoCADPreferencesSelection_INTERFACE_DEFINED__

/* interface InanoCADPreferencesSelection */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferencesSelection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99B76B84-0F4C-4B0F-A041-FC7DD48DF86F")
    InanoCADPreferencesSelection : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PickFirst( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PickFirst( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PickAdd( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PickAdd( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PickDrag( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PickDrag( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PickAuto( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PickAuto( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PickBoxSize( 
            /* [in] */ long Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PickBoxSize( 
            /* [retval][out] */ long *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DisplayGrips( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayGrips( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DisplayGripsWithinBlocks( 
            /* [in] */ VARIANT_BOOL Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayGripsWithinBlocks( 
            /* [retval][out] */ VARIANT_BOOL *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_GripColorSelected( 
            /* [in] */ AcColor Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_GripColorSelected( 
            /* [retval][out] */ AcColor *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_GripColorUnselected( 
            /* [in] */ AcColor Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_GripColorUnselected( 
            /* [retval][out] */ AcColor *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_GripSize( 
            /* [in] */ long Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_GripSize( 
            /* [retval][out] */ long *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PickGroup( 
            /* [in] */ VARIANT_BOOL pick) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PickGroup( 
            /* [retval][out] */ VARIANT_BOOL *pick) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesSelectionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferencesSelection * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferencesSelection * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferencesSelection * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferencesSelection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_PickFirst)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PickFirst )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_PickFirst)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PickFirst )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_PickAdd)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PickAdd )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_PickAdd)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PickAdd )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_PickDrag)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PickDrag )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_PickDrag)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PickDrag )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_PickAuto)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PickAuto )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_PickAuto)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PickAuto )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_PickBoxSize)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PickBoxSize )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ long Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_PickBoxSize)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PickBoxSize )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ long *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_DisplayGrips)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayGrips )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_DisplayGrips)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayGrips )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_DisplayGripsWithinBlocks)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayGripsWithinBlocks )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ VARIANT_BOOL Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_DisplayGripsWithinBlocks)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayGripsWithinBlocks )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ VARIANT_BOOL *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_GripColorSelected)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GripColorSelected )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ AcColor Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_GripColorSelected)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GripColorSelected )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ AcColor *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_GripColorUnselected)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GripColorUnselected )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ AcColor Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_GripColorUnselected)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GripColorUnselected )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ AcColor *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_GripSize)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_GripSize )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ long Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_GripSize)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_GripSize )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ long *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, put_PickGroup)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PickGroup )( 
            InanoCADPreferencesSelection * This,
            /* [in] */ VARIANT_BOOL pick);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesSelection, get_PickGroup)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PickGroup )( 
            InanoCADPreferencesSelection * This,
            /* [retval][out] */ VARIANT_BOOL *pick);
        
        END_INTERFACE
    } InanoCADPreferencesSelectionVtbl;

    interface InanoCADPreferencesSelection
    {
        CONST_VTBL struct InanoCADPreferencesSelectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferencesSelection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferencesSelection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferencesSelection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferencesSelection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferencesSelection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferencesSelection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferencesSelection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferencesSelection_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferencesSelection_put_PickFirst(This,Path)	\
    ( (This)->lpVtbl -> put_PickFirst(This,Path) ) 

#define InanoCADPreferencesSelection_get_PickFirst(This,Path)	\
    ( (This)->lpVtbl -> get_PickFirst(This,Path) ) 

#define InanoCADPreferencesSelection_put_PickAdd(This,Path)	\
    ( (This)->lpVtbl -> put_PickAdd(This,Path) ) 

#define InanoCADPreferencesSelection_get_PickAdd(This,Path)	\
    ( (This)->lpVtbl -> get_PickAdd(This,Path) ) 

#define InanoCADPreferencesSelection_put_PickDrag(This,Path)	\
    ( (This)->lpVtbl -> put_PickDrag(This,Path) ) 

#define InanoCADPreferencesSelection_get_PickDrag(This,Path)	\
    ( (This)->lpVtbl -> get_PickDrag(This,Path) ) 

#define InanoCADPreferencesSelection_put_PickAuto(This,Path)	\
    ( (This)->lpVtbl -> put_PickAuto(This,Path) ) 

#define InanoCADPreferencesSelection_get_PickAuto(This,Path)	\
    ( (This)->lpVtbl -> get_PickAuto(This,Path) ) 

#define InanoCADPreferencesSelection_put_PickBoxSize(This,Path)	\
    ( (This)->lpVtbl -> put_PickBoxSize(This,Path) ) 

#define InanoCADPreferencesSelection_get_PickBoxSize(This,Path)	\
    ( (This)->lpVtbl -> get_PickBoxSize(This,Path) ) 

#define InanoCADPreferencesSelection_put_DisplayGrips(This,Path)	\
    ( (This)->lpVtbl -> put_DisplayGrips(This,Path) ) 

#define InanoCADPreferencesSelection_get_DisplayGrips(This,Path)	\
    ( (This)->lpVtbl -> get_DisplayGrips(This,Path) ) 

#define InanoCADPreferencesSelection_put_DisplayGripsWithinBlocks(This,Path)	\
    ( (This)->lpVtbl -> put_DisplayGripsWithinBlocks(This,Path) ) 

#define InanoCADPreferencesSelection_get_DisplayGripsWithinBlocks(This,Path)	\
    ( (This)->lpVtbl -> get_DisplayGripsWithinBlocks(This,Path) ) 

#define InanoCADPreferencesSelection_put_GripColorSelected(This,Path)	\
    ( (This)->lpVtbl -> put_GripColorSelected(This,Path) ) 

#define InanoCADPreferencesSelection_get_GripColorSelected(This,Path)	\
    ( (This)->lpVtbl -> get_GripColorSelected(This,Path) ) 

#define InanoCADPreferencesSelection_put_GripColorUnselected(This,Path)	\
    ( (This)->lpVtbl -> put_GripColorUnselected(This,Path) ) 

#define InanoCADPreferencesSelection_get_GripColorUnselected(This,Path)	\
    ( (This)->lpVtbl -> get_GripColorUnselected(This,Path) ) 

#define InanoCADPreferencesSelection_put_GripSize(This,Path)	\
    ( (This)->lpVtbl -> put_GripSize(This,Path) ) 

#define InanoCADPreferencesSelection_get_GripSize(This,Path)	\
    ( (This)->lpVtbl -> get_GripSize(This,Path) ) 

#define InanoCADPreferencesSelection_put_PickGroup(This,pick)	\
    ( (This)->lpVtbl -> put_PickGroup(This,pick) ) 

#define InanoCADPreferencesSelection_get_PickGroup(This,pick)	\
    ( (This)->lpVtbl -> get_PickGroup(This,pick) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferencesSelection_INTERFACE_DEFINED__ */


#ifndef __InanoCADPreferencesProfiles_INTERFACE_DEFINED__
#define __InanoCADPreferencesProfiles_INTERFACE_DEFINED__

/* interface InanoCADPreferencesProfiles */
/* [object][oleautomation][dual][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPreferencesProfiles;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C43642BE-4D1E-4C46-AEA1-80504DCF16BC")
    InanoCADPreferencesProfiles : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveProfile( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveProfile( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportProfile( 
            /* [in] */ BSTR ProfileName,
            /* [in] */ BSTR RegFile,
            /* [in] */ VARIANT_BOOL IncludePathInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportProfile( 
            /* [in] */ BSTR ProfileName,
            /* [in] */ BSTR RegFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteProfile( 
            /* [in] */ BSTR ProfileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetProfile( 
            /* [in] */ BSTR Profile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RenameProfile( 
            /* [in] */ BSTR origProfileName,
            /* [in] */ BSTR newProfileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyProfile( 
            /* [in] */ BSTR oldProfileName,
            /* [in] */ BSTR newProfileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAllProfileNames( 
            /* [out] */ VARIANT *pNames) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPreferencesProfilesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPreferencesProfiles * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPreferencesProfiles * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPreferencesProfiles * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPreferencesProfiles * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPreferencesProfiles * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, put_ActiveProfile)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveProfile )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ BSTR Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, get_ActiveProfile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveProfile )( 
            InanoCADPreferencesProfiles * This,
            /* [retval][out] */ BSTR *Path);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, ImportProfile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportProfile )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ BSTR ProfileName,
            /* [in] */ BSTR RegFile,
            /* [in] */ VARIANT_BOOL IncludePathInfo);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, ExportProfile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportProfile )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ BSTR ProfileName,
            /* [in] */ BSTR RegFile);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, DeleteProfile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteProfile )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ BSTR ProfileName);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, ResetProfile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ResetProfile )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ BSTR Profile);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, RenameProfile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RenameProfile )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ BSTR origProfileName,
            /* [in] */ BSTR newProfileName);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, CopyProfile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyProfile )( 
            InanoCADPreferencesProfiles * This,
            /* [in] */ BSTR oldProfileName,
            /* [in] */ BSTR newProfileName);
        
        DECLSPEC_XFGVIRT(InanoCADPreferencesProfiles, GetAllProfileNames)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllProfileNames )( 
            InanoCADPreferencesProfiles * This,
            /* [out] */ VARIANT *pNames);
        
        END_INTERFACE
    } InanoCADPreferencesProfilesVtbl;

    interface InanoCADPreferencesProfiles
    {
        CONST_VTBL struct InanoCADPreferencesProfilesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPreferencesProfiles_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPreferencesProfiles_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPreferencesProfiles_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPreferencesProfiles_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPreferencesProfiles_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPreferencesProfiles_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPreferencesProfiles_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPreferencesProfiles_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPreferencesProfiles_put_ActiveProfile(This,Path)	\
    ( (This)->lpVtbl -> put_ActiveProfile(This,Path) ) 

#define InanoCADPreferencesProfiles_get_ActiveProfile(This,Path)	\
    ( (This)->lpVtbl -> get_ActiveProfile(This,Path) ) 

#define InanoCADPreferencesProfiles_ImportProfile(This,ProfileName,RegFile,IncludePathInfo)	\
    ( (This)->lpVtbl -> ImportProfile(This,ProfileName,RegFile,IncludePathInfo) ) 

#define InanoCADPreferencesProfiles_ExportProfile(This,ProfileName,RegFile)	\
    ( (This)->lpVtbl -> ExportProfile(This,ProfileName,RegFile) ) 

#define InanoCADPreferencesProfiles_DeleteProfile(This,ProfileName)	\
    ( (This)->lpVtbl -> DeleteProfile(This,ProfileName) ) 

#define InanoCADPreferencesProfiles_ResetProfile(This,Profile)	\
    ( (This)->lpVtbl -> ResetProfile(This,Profile) ) 

#define InanoCADPreferencesProfiles_RenameProfile(This,origProfileName,newProfileName)	\
    ( (This)->lpVtbl -> RenameProfile(This,origProfileName,newProfileName) ) 

#define InanoCADPreferencesProfiles_CopyProfile(This,oldProfileName,newProfileName)	\
    ( (This)->lpVtbl -> CopyProfile(This,oldProfileName,newProfileName) ) 

#define InanoCADPreferencesProfiles_GetAllProfileNames(This,pNames)	\
    ( (This)->lpVtbl -> GetAllProfileNames(This,pNames) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPreferencesProfiles_INTERFACE_DEFINED__ */


#ifndef __InanoCADState_INTERFACE_DEFINED__
#define __InanoCADState_INTERFACE_DEFINED__

/* interface InanoCADState */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5FC1C8A-5FC6-4901-9C52-5793CC4FDA1D")
    InanoCADState : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsQuiescent( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADStateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADState * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADState * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADState * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADState * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADState * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADState * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADState * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADState, get_IsQuiescent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsQuiescent )( 
            InanoCADState * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(InanoCADState, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADState * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        END_INTERFACE
    } InanoCADStateVtbl;

    interface InanoCADState
    {
        CONST_VTBL struct InanoCADStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADState_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADState_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADState_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADState_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADState_get_IsQuiescent(This,pVal)	\
    ( (This)->lpVtbl -> get_IsQuiescent(This,pVal) ) 

#define InanoCADState_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADState_INTERFACE_DEFINED__ */


#ifndef __InanoCADPlot_INTERFACE_DEFINED__
#define __InanoCADPlot_INTERFACE_DEFINED__

/* interface InanoCADPlot */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EAEA6290-3772-49E4-A08C-3A36AB965F39")
    InanoCADPlot : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_QuietErrorMode( 
            /* [retval][out] */ VARIANT_BOOL *bErrorMode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_QuietErrorMode( 
            /* [in] */ VARIANT_BOOL bErrorMode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_NumberOfCopies( 
            /* [retval][out] */ long *numCopies) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_NumberOfCopies( 
            /* [in] */ long numCopies) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BatchPlotProgress( 
            /* [retval][out] */ VARIANT_BOOL *bProgressStatus) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_BatchPlotProgress( 
            /* [in] */ VARIANT_BOOL bProgressStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisplayPlotPreview( 
            /* [in] */ AcPreviewMode Preview) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PlotToFile( 
            /* [in] */ BSTR plotFile,
            /* [optional][in] */ VARIANT plotConfig,
            /* [retval][out] */ VARIANT_BOOL *success) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PlotToDevice( 
            /* [optional][in] */ VARIANT plotConfig,
            /* [retval][out] */ VARIANT_BOOL *success) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLayoutsToPlot( 
            /* [in] */ VARIANT layoutList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartBatchMode( 
            /* [in] */ long entryCount) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CustomPlotSettings( 
            /* [in] */ VARIANT config,
            /* [retval][out] */ InanoCADPlotCustomParams **param) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CustomPlotSettings( 
            /* [in] */ VARIANT config,
            /* [in] */ InanoCADPlotCustomParams *param) = 0;
        
        virtual /* [helpstring][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_CustomPlotSettings( 
            /* [in] */ VARIANT config,
            /* [in] */ InanoCADPlotCustomParams *param) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPlotVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPlot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPlot * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPlot * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPlot * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPlot * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            InanoCADPlot * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, get_QuietErrorMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_QuietErrorMode )( 
            InanoCADPlot * This,
            /* [retval][out] */ VARIANT_BOOL *bErrorMode);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, put_QuietErrorMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_QuietErrorMode )( 
            InanoCADPlot * This,
            /* [in] */ VARIANT_BOOL bErrorMode);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, get_NumberOfCopies)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfCopies )( 
            InanoCADPlot * This,
            /* [retval][out] */ long *numCopies);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, put_NumberOfCopies)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfCopies )( 
            InanoCADPlot * This,
            /* [in] */ long numCopies);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, get_BatchPlotProgress)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BatchPlotProgress )( 
            InanoCADPlot * This,
            /* [retval][out] */ VARIANT_BOOL *bProgressStatus);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, put_BatchPlotProgress)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BatchPlotProgress )( 
            InanoCADPlot * This,
            /* [in] */ VARIANT_BOOL bProgressStatus);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, DisplayPlotPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisplayPlotPreview )( 
            InanoCADPlot * This,
            /* [in] */ AcPreviewMode Preview);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, PlotToFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PlotToFile )( 
            InanoCADPlot * This,
            /* [in] */ BSTR plotFile,
            /* [optional][in] */ VARIANT plotConfig,
            /* [retval][out] */ VARIANT_BOOL *success);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, PlotToDevice)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PlotToDevice )( 
            InanoCADPlot * This,
            /* [optional][in] */ VARIANT plotConfig,
            /* [retval][out] */ VARIANT_BOOL *success);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, SetLayoutsToPlot)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLayoutsToPlot )( 
            InanoCADPlot * This,
            /* [in] */ VARIANT layoutList);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, StartBatchMode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartBatchMode )( 
            InanoCADPlot * This,
            /* [in] */ long entryCount);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, get_CustomPlotSettings)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CustomPlotSettings )( 
            InanoCADPlot * This,
            /* [in] */ VARIANT config,
            /* [retval][out] */ InanoCADPlotCustomParams **param);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, put_CustomPlotSettings)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CustomPlotSettings )( 
            InanoCADPlot * This,
            /* [in] */ VARIANT config,
            /* [in] */ InanoCADPlotCustomParams *param);
        
        DECLSPEC_XFGVIRT(InanoCADPlot, putref_CustomPlotSettings)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_CustomPlotSettings )( 
            InanoCADPlot * This,
            /* [in] */ VARIANT config,
            /* [in] */ InanoCADPlotCustomParams *param);
        
        END_INTERFACE
    } InanoCADPlotVtbl;

    interface InanoCADPlot
    {
        CONST_VTBL struct InanoCADPlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPlot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPlot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPlot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPlot_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPlot_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define InanoCADPlot_get_QuietErrorMode(This,bErrorMode)	\
    ( (This)->lpVtbl -> get_QuietErrorMode(This,bErrorMode) ) 

#define InanoCADPlot_put_QuietErrorMode(This,bErrorMode)	\
    ( (This)->lpVtbl -> put_QuietErrorMode(This,bErrorMode) ) 

#define InanoCADPlot_get_NumberOfCopies(This,numCopies)	\
    ( (This)->lpVtbl -> get_NumberOfCopies(This,numCopies) ) 

#define InanoCADPlot_put_NumberOfCopies(This,numCopies)	\
    ( (This)->lpVtbl -> put_NumberOfCopies(This,numCopies) ) 

#define InanoCADPlot_get_BatchPlotProgress(This,bProgressStatus)	\
    ( (This)->lpVtbl -> get_BatchPlotProgress(This,bProgressStatus) ) 

#define InanoCADPlot_put_BatchPlotProgress(This,bProgressStatus)	\
    ( (This)->lpVtbl -> put_BatchPlotProgress(This,bProgressStatus) ) 

#define InanoCADPlot_DisplayPlotPreview(This,Preview)	\
    ( (This)->lpVtbl -> DisplayPlotPreview(This,Preview) ) 

#define InanoCADPlot_PlotToFile(This,plotFile,plotConfig,success)	\
    ( (This)->lpVtbl -> PlotToFile(This,plotFile,plotConfig,success) ) 

#define InanoCADPlot_PlotToDevice(This,plotConfig,success)	\
    ( (This)->lpVtbl -> PlotToDevice(This,plotConfig,success) ) 

#define InanoCADPlot_SetLayoutsToPlot(This,layoutList)	\
    ( (This)->lpVtbl -> SetLayoutsToPlot(This,layoutList) ) 

#define InanoCADPlot_StartBatchMode(This,entryCount)	\
    ( (This)->lpVtbl -> StartBatchMode(This,entryCount) ) 

#define InanoCADPlot_get_CustomPlotSettings(This,config,param)	\
    ( (This)->lpVtbl -> get_CustomPlotSettings(This,config,param) ) 

#define InanoCADPlot_put_CustomPlotSettings(This,config,param)	\
    ( (This)->lpVtbl -> put_CustomPlotSettings(This,config,param) ) 

#define InanoCADPlot_putref_CustomPlotSettings(This,config,param)	\
    ( (This)->lpVtbl -> putref_CustomPlotSettings(This,config,param) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPlot_INTERFACE_DEFINED__ */


#ifndef ___DnanoCADPlotEvents_DISPINTERFACE_DEFINED__
#define ___DnanoCADPlotEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DnanoCADPlotEvents */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DnanoCADPlotEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("D8C943CB-423C-4E03-8FD6-E84465BE3D9C")
    _DnanoCADPlotEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DnanoCADPlotEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DnanoCADPlotEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DnanoCADPlotEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DnanoCADPlotEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DnanoCADPlotEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DnanoCADPlotEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DnanoCADPlotEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DnanoCADPlotEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DnanoCADPlotEventsVtbl;

    interface _DnanoCADPlotEvents
    {
        CONST_VTBL struct _DnanoCADPlotEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DnanoCADPlotEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DnanoCADPlotEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DnanoCADPlotEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DnanoCADPlotEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DnanoCADPlotEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DnanoCADPlotEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DnanoCADPlotEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DnanoCADPlotEvents_DISPINTERFACE_DEFINED__ */


#ifndef __InanoCADPlotCustomParamsEx_INTERFACE_DEFINED__
#define __InanoCADPlotCustomParamsEx_INTERFACE_DEFINED__

/* interface InanoCADPlotCustomParamsEx */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_InanoCADPlotCustomParamsEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("996AFFC0-E71D-479A-9826-41F4DA8DA1C6")
    InanoCADPlotCustomParamsEx : public InanoCADPlotCustomParams
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RunPDFAppEx( 
            /* [retval][out] */ long *val) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RunPDFAppEx( 
            /* [in] */ long val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct InanoCADPlotCustomParamsExVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            InanoCADPlotCustomParamsEx * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            InanoCADPlotCustomParamsEx * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            InanoCADPlotCustomParamsEx * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            InanoCADPlotCustomParamsEx * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_Params)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Params )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ IParams **param);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_Params)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Params )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ IParams *param);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, putref_Params)
        /* [helpstring][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_Params )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ IParams *param);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_ColorMode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ColorMode )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_ColorMode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ColorMode )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_PrinterDPI)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterDPI )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ long *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_PrinterDPI)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterDPI )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ long val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_UsePrefinedNames)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UsePrefinedNames )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_UsePrefinedNames)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UsePrefinedNames )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_IfFileExist)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IfFileExist )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ FileExistAction *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_IfFileExist)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IfFileExist )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ FileExistAction val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_RunPDFApp)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunPDFApp )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_RunPDFApp)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunPDFApp )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_UseDWGPath)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseDWGPath )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_UseDWGPath)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseDWGPath )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_FileFolder)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileFolder )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ BSTR *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_FileFolder)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileFolder )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ BSTR val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_FileMask)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileMask )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ BSTR *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_FileMask)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileMask )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ BSTR val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_PlotToFile)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlotToFile )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_PlotToFile)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PlotToFile )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_Multipage)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Multipage )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_Multipage)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Multipage )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ VARIANT_BOOL val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_InflateWidth)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InflateWidth )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ double *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_InflateWidth)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InflateWidth )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ double val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_Alignment)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Alignment )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ long *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_Alignment)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Alignment )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ long val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_PaperOutMargins)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PaperOutMargins )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ long *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, put_PaperOutMargins)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PaperOutMargins )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ long val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParams, get_PlotAreas)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlotAreas )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ InanoCADPlotAreas **val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParamsEx, get_RunPDFAppEx)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunPDFAppEx )( 
            InanoCADPlotCustomParamsEx * This,
            /* [retval][out] */ long *val);
        
        DECLSPEC_XFGVIRT(InanoCADPlotCustomParamsEx, put_RunPDFAppEx)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunPDFAppEx )( 
            InanoCADPlotCustomParamsEx * This,
            /* [in] */ long val);
        
        END_INTERFACE
    } InanoCADPlotCustomParamsExVtbl;

    interface InanoCADPlotCustomParamsEx
    {
        CONST_VTBL struct InanoCADPlotCustomParamsExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define InanoCADPlotCustomParamsEx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define InanoCADPlotCustomParamsEx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define InanoCADPlotCustomParamsEx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define InanoCADPlotCustomParamsEx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define InanoCADPlotCustomParamsEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define InanoCADPlotCustomParamsEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define InanoCADPlotCustomParamsEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define InanoCADPlotCustomParamsEx_get_Params(This,param)	\
    ( (This)->lpVtbl -> get_Params(This,param) ) 

#define InanoCADPlotCustomParamsEx_put_Params(This,param)	\
    ( (This)->lpVtbl -> put_Params(This,param) ) 

#define InanoCADPlotCustomParamsEx_putref_Params(This,param)	\
    ( (This)->lpVtbl -> putref_Params(This,param) ) 

#define InanoCADPlotCustomParamsEx_get_ColorMode(This,val)	\
    ( (This)->lpVtbl -> get_ColorMode(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_ColorMode(This,val)	\
    ( (This)->lpVtbl -> put_ColorMode(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_PrinterDPI(This,val)	\
    ( (This)->lpVtbl -> get_PrinterDPI(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_PrinterDPI(This,val)	\
    ( (This)->lpVtbl -> put_PrinterDPI(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_UsePrefinedNames(This,val)	\
    ( (This)->lpVtbl -> get_UsePrefinedNames(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_UsePrefinedNames(This,val)	\
    ( (This)->lpVtbl -> put_UsePrefinedNames(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_IfFileExist(This,val)	\
    ( (This)->lpVtbl -> get_IfFileExist(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_IfFileExist(This,val)	\
    ( (This)->lpVtbl -> put_IfFileExist(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_RunPDFApp(This,val)	\
    ( (This)->lpVtbl -> get_RunPDFApp(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_RunPDFApp(This,val)	\
    ( (This)->lpVtbl -> put_RunPDFApp(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_UseDWGPath(This,val)	\
    ( (This)->lpVtbl -> get_UseDWGPath(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_UseDWGPath(This,val)	\
    ( (This)->lpVtbl -> put_UseDWGPath(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_FileFolder(This,val)	\
    ( (This)->lpVtbl -> get_FileFolder(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_FileFolder(This,val)	\
    ( (This)->lpVtbl -> put_FileFolder(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_FileMask(This,val)	\
    ( (This)->lpVtbl -> get_FileMask(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_FileMask(This,val)	\
    ( (This)->lpVtbl -> put_FileMask(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_PlotToFile(This,val)	\
    ( (This)->lpVtbl -> get_PlotToFile(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_PlotToFile(This,val)	\
    ( (This)->lpVtbl -> put_PlotToFile(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_Multipage(This,val)	\
    ( (This)->lpVtbl -> get_Multipage(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_Multipage(This,val)	\
    ( (This)->lpVtbl -> put_Multipage(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_InflateWidth(This,val)	\
    ( (This)->lpVtbl -> get_InflateWidth(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_InflateWidth(This,val)	\
    ( (This)->lpVtbl -> put_InflateWidth(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_Alignment(This,val)	\
    ( (This)->lpVtbl -> get_Alignment(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_Alignment(This,val)	\
    ( (This)->lpVtbl -> put_Alignment(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_PaperOutMargins(This,val)	\
    ( (This)->lpVtbl -> get_PaperOutMargins(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_PaperOutMargins(This,val)	\
    ( (This)->lpVtbl -> put_PaperOutMargins(This,val) ) 

#define InanoCADPlotCustomParamsEx_get_PlotAreas(This,val)	\
    ( (This)->lpVtbl -> get_PlotAreas(This,val) ) 


#define InanoCADPlotCustomParamsEx_get_RunPDFAppEx(This,val)	\
    ( (This)->lpVtbl -> get_RunPDFAppEx(This,val) ) 

#define InanoCADPlotCustomParamsEx_put_RunPDFAppEx(This,val)	\
    ( (This)->lpVtbl -> put_RunPDFAppEx(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __InanoCADPlotCustomParamsEx_INTERFACE_DEFINED__ */


#ifndef ___DnanoCADDocumentEvents_DISPINTERFACE_DEFINED__
#define ___DnanoCADDocumentEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DnanoCADDocumentEvents */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DnanoCADDocumentEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("821D4E07-102B-4F78-8B26-E5BC0A18A96B")
    _DnanoCADDocumentEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DnanoCADDocumentEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DnanoCADDocumentEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DnanoCADDocumentEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DnanoCADDocumentEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DnanoCADDocumentEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DnanoCADDocumentEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DnanoCADDocumentEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DnanoCADDocumentEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DnanoCADDocumentEventsVtbl;

    interface _DnanoCADDocumentEvents
    {
        CONST_VTBL struct _DnanoCADDocumentEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DnanoCADDocumentEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DnanoCADDocumentEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DnanoCADDocumentEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DnanoCADDocumentEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DnanoCADDocumentEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DnanoCADDocumentEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DnanoCADDocumentEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DnanoCADDocumentEvents_DISPINTERFACE_DEFINED__ */


#ifndef ___DnanoCADApplicationEvents_DISPINTERFACE_DEFINED__
#define ___DnanoCADApplicationEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DnanoCADApplicationEvents */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DnanoCADApplicationEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1FC13137-AFB2-4995-9CAE-D5A51F58CD5C")
    _DnanoCADApplicationEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DnanoCADApplicationEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DnanoCADApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DnanoCADApplicationEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DnanoCADApplicationEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DnanoCADApplicationEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DnanoCADApplicationEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DnanoCADApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DnanoCADApplicationEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DnanoCADApplicationEventsVtbl;

    interface _DnanoCADApplicationEvents
    {
        CONST_VTBL struct _DnanoCADApplicationEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DnanoCADApplicationEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DnanoCADApplicationEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DnanoCADApplicationEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DnanoCADApplicationEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DnanoCADApplicationEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DnanoCADApplicationEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DnanoCADApplicationEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DnanoCADApplicationEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IACommand_INTERFACE_DEFINED__
#define __IACommand_INTERFACE_DEFINED__

/* interface IACommand */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IACommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4BC8C0E6-7530-441D-81AC-35022A806DF0")
    IACommand : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ LONG *type) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ LONG *id) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ LONG id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InternalName( 
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DispName( 
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Weight( 
            /* [retval][out] */ LONG *weight) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LaunchWeight( 
            /* [retval][out] */ LONG *weight) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_StatusString( 
            /* [retval][out] */ BSTR *str) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ToolTip( 
            /* [retval][out] */ BSTR *str) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Caps( 
            /* [retval][out] */ LONG *caps) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MenuText( 
            /* [retval][out] */ BSTR *str) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MenuGroup( 
            /* [retval][out] */ BSTR *str) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ IAHelper *helper) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IACommandVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IACommand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IACommand * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IACommand * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IACommand * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IACommand * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IACommand * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IACommand * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IACommand, get_Type)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IACommand * This,
            /* [retval][out] */ LONG *type);
        
        DECLSPEC_XFGVIRT(IACommand, get_ID)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IACommand * This,
            /* [retval][out] */ LONG *id);
        
        DECLSPEC_XFGVIRT(IACommand, put_ID)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IACommand * This,
            /* [in] */ LONG id);
        
        DECLSPEC_XFGVIRT(IACommand, get_InternalName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InternalName )( 
            IACommand * This,
            /* [retval][out] */ BSTR *name);
        
        DECLSPEC_XFGVIRT(IACommand, get_DispName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DispName )( 
            IACommand * This,
            /* [retval][out] */ BSTR *name);
        
        DECLSPEC_XFGVIRT(IACommand, get_Weight)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Weight )( 
            IACommand * This,
            /* [retval][out] */ LONG *weight);
        
        DECLSPEC_XFGVIRT(IACommand, get_LaunchWeight)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LaunchWeight )( 
            IACommand * This,
            /* [retval][out] */ LONG *weight);
        
        DECLSPEC_XFGVIRT(IACommand, get_StatusString)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StatusString )( 
            IACommand * This,
            /* [retval][out] */ BSTR *str);
        
        DECLSPEC_XFGVIRT(IACommand, get_ToolTip)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ToolTip )( 
            IACommand * This,
            /* [retval][out] */ BSTR *str);
        
        DECLSPEC_XFGVIRT(IACommand, get_Caps)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Caps )( 
            IACommand * This,
            /* [retval][out] */ LONG *caps);
        
        DECLSPEC_XFGVIRT(IACommand, get_MenuText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MenuText )( 
            IACommand * This,
            /* [retval][out] */ BSTR *str);
        
        DECLSPEC_XFGVIRT(IACommand, get_MenuGroup)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MenuGroup )( 
            IACommand * This,
            /* [retval][out] */ BSTR *str);
        
        DECLSPEC_XFGVIRT(IACommand, Run)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IACommand * This,
            /* [in] */ IAHelper *helper);
        
        END_INTERFACE
    } IACommandVtbl;

    interface IACommand
    {
        CONST_VTBL struct IACommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IACommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IACommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IACommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IACommand_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IACommand_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IACommand_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IACommand_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IACommand_get_Type(This,type)	\
    ( (This)->lpVtbl -> get_Type(This,type) ) 

#define IACommand_get_ID(This,id)	\
    ( (This)->lpVtbl -> get_ID(This,id) ) 

#define IACommand_put_ID(This,id)	\
    ( (This)->lpVtbl -> put_ID(This,id) ) 

#define IACommand_get_InternalName(This,name)	\
    ( (This)->lpVtbl -> get_InternalName(This,name) ) 

#define IACommand_get_DispName(This,name)	\
    ( (This)->lpVtbl -> get_DispName(This,name) ) 

#define IACommand_get_Weight(This,weight)	\
    ( (This)->lpVtbl -> get_Weight(This,weight) ) 

#define IACommand_get_LaunchWeight(This,weight)	\
    ( (This)->lpVtbl -> get_LaunchWeight(This,weight) ) 

#define IACommand_get_StatusString(This,str)	\
    ( (This)->lpVtbl -> get_StatusString(This,str) ) 

#define IACommand_get_ToolTip(This,str)	\
    ( (This)->lpVtbl -> get_ToolTip(This,str) ) 

#define IACommand_get_Caps(This,caps)	\
    ( (This)->lpVtbl -> get_Caps(This,caps) ) 

#define IACommand_get_MenuText(This,str)	\
    ( (This)->lpVtbl -> get_MenuText(This,str) ) 

#define IACommand_get_MenuGroup(This,str)	\
    ( (This)->lpVtbl -> get_MenuGroup(This,str) ) 

#define IACommand_Run(This,helper)	\
    ( (This)->lpVtbl -> Run(This,helper) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IACommand_INTERFACE_DEFINED__ */


#ifndef __IALoader_INTERFACE_DEFINED__
#define __IALoader_INTERFACE_DEFINED__

/* interface IALoader */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IALoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("542E621F-57B6-4E80-A0EC-5C7DA6840A5D")
    IALoader : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IACommand **cmd) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Unload( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IALoaderVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IALoader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IALoader * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IALoader * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IALoader * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IALoader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IALoader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IALoader * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IALoader, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IALoader * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IACommand **cmd);
        
        DECLSPEC_XFGVIRT(IALoader, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IALoader * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IALoader, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IALoader * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(IALoader, Load)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IALoader * This,
            /* [in] */ BSTR path);
        
        DECLSPEC_XFGVIRT(IALoader, Unload)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Unload )( 
            IALoader * This);
        
        END_INTERFACE
    } IALoaderVtbl;

    interface IALoader
    {
        CONST_VTBL struct IALoaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IALoader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IALoader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IALoader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IALoader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IALoader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IALoader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IALoader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IALoader_get_Item(This,name,cmd)	\
    ( (This)->lpVtbl -> get_Item(This,name,cmd) ) 

#define IALoader_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IALoader_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IALoader_Load(This,path)	\
    ( (This)->lpVtbl -> Load(This,path) ) 

#define IALoader_Unload(This)	\
    ( (This)->lpVtbl -> Unload(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IALoader_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ALoader;

#ifdef __cplusplus

class DECLSPEC_UUID("710C6CA7-242F-4CB6-9B17-ADAA2A2F8971")
ALoader;
#endif

#ifndef __IAHelper_INTERFACE_DEFINED__
#define __IAHelper_INTERFACE_DEFINED__

/* interface IAHelper */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("39EAB340-CB64-43E0-8F99-9A222DDA7B93")
    IAHelper : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IDispatch **cmd) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAHelperVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAHelper * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAHelper * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAHelper * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAHelper * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAHelper, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAHelper * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IDispatch **cmd);
        
        DECLSPEC_XFGVIRT(IAHelper, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAHelper * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IAHelper, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAHelper * This,
            /* [retval][out] */ IUnknown **pVal);
        
        END_INTERFACE
    } IAHelperVtbl;

    interface IAHelper
    {
        CONST_VTBL struct IAHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAHelper_get_Item(This,name,cmd)	\
    ( (This)->lpVtbl -> get_Item(This,name,cmd) ) 

#define IAHelper_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IAHelper_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAHelper_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("AF42A40D-9E57-4b39-89A7-704C7BCE605D")
AHelper;
#endif

#ifndef __IArguments_INTERFACE_DEFINED__
#define __IArguments_INTERFACE_DEFINED__

/* interface IArguments */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IArguments;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("87CA1C73-4228-4B46-9173-CB34AD939716")
    IArguments : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long idx,
            /* [retval][out] */ BSTR *str) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Item( 
            /* [in] */ long idx,
            /* [in] */ BSTR str) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Append( 
            BSTR str) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IArgumentsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IArguments * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IArguments * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IArguments * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IArguments * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IArguments * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IArguments * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IArguments * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IArguments, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IArguments * This,
            /* [in] */ long idx,
            /* [retval][out] */ BSTR *str);
        
        DECLSPEC_XFGVIRT(IArguments, put_Item)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Item )( 
            IArguments * This,
            /* [in] */ long idx,
            /* [in] */ BSTR str);
        
        DECLSPEC_XFGVIRT(IArguments, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IArguments * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IArguments, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IArguments * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(IArguments, Append)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IArguments * This,
            BSTR str);
        
        END_INTERFACE
    } IArgumentsVtbl;

    interface IArguments
    {
        CONST_VTBL struct IArgumentsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IArguments_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IArguments_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IArguments_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IArguments_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IArguments_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IArguments_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IArguments_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IArguments_get_Item(This,idx,str)	\
    ( (This)->lpVtbl -> get_Item(This,idx,str) ) 

#define IArguments_put_Item(This,idx,str)	\
    ( (This)->lpVtbl -> put_Item(This,idx,str) ) 

#define IArguments_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IArguments_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IArguments_Append(This,str)	\
    ( (This)->lpVtbl -> Append(This,str) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IArguments_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Arguments;

#ifdef __cplusplus

class DECLSPEC_UUID("DA67E44B-BDAA-423b-98FA-BFCE4F029F1E")
Arguments;
#endif

EXTERN_C const CLSID CLSID_Params;

#ifdef __cplusplus

class DECLSPEC_UUID("9C728935-C8AC-4721-B8EF-ED0B48F85735")
Params;
#endif

#ifndef __IAxDbDocument_INTERFACE_DEFINED__
#define __IAxDbDocument_INTERFACE_DEFINED__

/* interface IAxDbDocument */
/* [oleautomation][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAxDbDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C653FDF6-3593-4717-9AA2-DF38531B4365")
    IAxDbDocument : public IAcadDatabase
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR FileName,
            /* [optional][in] */ VARIANT Password) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ BSTR FileName,
            /* [optional][in] */ VARIANT vSecurityParams) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DxfIn( 
            /* [in] */ BSTR FileName,
            /* [optional][in] */ VARIANT LogFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DxfOut( 
            /* [in] */ BSTR FileName,
            /* [optional][in] */ VARIANT Precision,
            /* [optional][in] */ VARIANT SaveThumbnailImage) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ InanoCADApplication **pAppObj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Database( 
            /* [retval][out] */ IAcadDatabase **database) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxDbDocumentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxDbDocument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxDbDocument * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxDbDocument * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAxDbDocument * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAxDbDocument * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAxDbDocument * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAxDbDocument * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_ModelSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ModelSpace )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadModelSpace **pMSpace);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_PaperSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PaperSpace )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadPaperSpace **pPSpace);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Blocks)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Blocks )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadBlocks **pBlocks);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, CopyObjects)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyObjects )( 
            IAxDbDocument * This,
            /* [in] */ VARIANT Objects,
            /* [optional][in] */ VARIANT Owner,
            /* [optional][out][in] */ VARIANT *IdPairs,
            /* [retval][out] */ VARIANT *pNewObjects);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Groups)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Groups )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadGroups **pGroups);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_DimStyles)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DimStyles )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadDimStyles **pDimStyles);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Layers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Layers )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadLayers **pLayers);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Linetypes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Linetypes )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadLineTypes **pLinetypes);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Dictionaries)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Dictionaries )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadDictionaries **pDictionaries);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_RegisteredApplications)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredApplications )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadRegisteredApplications **pRegApps);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_TextStyles)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextStyles )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadTextStyles **pTextStyles);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_UserCoordinateSystems)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UserCoordinateSystems )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadUCSs **pUCSs);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Views)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Views )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadViews **pViews);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Viewports)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Viewports )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadViewports **pViewports);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_ElevationModelSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ElevationModelSpace )( 
            IAxDbDocument * This,
            /* [retval][out] */ double *Elevation);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, put_ElevationModelSpace)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ElevationModelSpace )( 
            IAxDbDocument * This,
            /* [in] */ double Elevation);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_ElevationPaperSpace)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ElevationPaperSpace )( 
            IAxDbDocument * This,
            /* [retval][out] */ double *Elevation);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, put_ElevationPaperSpace)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ElevationPaperSpace )( 
            IAxDbDocument * This,
            /* [in] */ double Elevation);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Limits)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Limits )( 
            IAxDbDocument * This,
            /* [retval][out] */ VARIANT *Limits);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, put_Limits)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Limits )( 
            IAxDbDocument * This,
            /* [in] */ VARIANT Limits);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, HandleToObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HandleToObject )( 
            IAxDbDocument * This,
            /* [in] */ BSTR Handle,
            /* [retval][out] */ IDispatch **pObj);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, ObjectIdToObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ObjectIdToObject )( 
            IAxDbDocument * This,
            /* [in] */ LONG_PTR ObjectID,
            /* [retval][out] */ IDispatch **pObj);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Layouts)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Layouts )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadLayouts **pLayouts);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_PlotConfigurations)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlotConfigurations )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadPlotConfigurations **pPlotConfigs);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Preferences)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Preferences )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadDatabasePreferences **pPref);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_FileDependencies)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileDependencies )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadFileDependencies **pFDM);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_SummaryInfo)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SummaryInfo )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadSummaryInfo **pSummaryInfo);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_SectionManager)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SectionManager )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadSectionManager **pSecMgr);
        
        DECLSPEC_XFGVIRT(IAcadDatabase, get_Materials)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Materials )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadMaterials **pMaterials);
        
        DECLSPEC_XFGVIRT(IAxDbDocument, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAxDbDocument * This,
            /* [retval][out] */ BSTR *name);
        
        DECLSPEC_XFGVIRT(IAxDbDocument, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAxDbDocument * This,
            /* [in] */ BSTR name);
        
        DECLSPEC_XFGVIRT(IAxDbDocument, Open)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IAxDbDocument * This,
            /* [in] */ BSTR FileName,
            /* [optional][in] */ VARIANT Password);
        
        DECLSPEC_XFGVIRT(IAxDbDocument, Save)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAxDbDocument * This);
        
        DECLSPEC_XFGVIRT(IAxDbDocument, SaveAs)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            IAxDbDocument * This,
            /* [in] */ BSTR FileName,
            /* [optional][in] */ VARIANT vSecurityParams);
        
        DECLSPEC_XFGVIRT(IAxDbDocument, DxfIn)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DxfIn )( 
            IAxDbDocument * This,
            /* [in] */ BSTR FileName,
            /* [optional][in] */ VARIANT LogFileName);
        
        DECLSPEC_XFGVIRT(IAxDbDocument, DxfOut)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DxfOut )( 
            IAxDbDocument * This,
            /* [in] */ BSTR FileName,
            /* [optional][in] */ VARIANT Precision,
            /* [optional][in] */ VARIANT SaveThumbnailImage);
        
        DECLSPEC_XFGVIRT(IAxDbDocument, get_Application)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IAxDbDocument * This,
            /* [retval][out] */ InanoCADApplication **pAppObj);
        
        DECLSPEC_XFGVIRT(IAxDbDocument, get_Database)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Database )( 
            IAxDbDocument * This,
            /* [retval][out] */ IAcadDatabase **database);
        
        END_INTERFACE
    } IAxDbDocumentVtbl;

    interface IAxDbDocument
    {
        CONST_VTBL struct IAxDbDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxDbDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxDbDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxDbDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxDbDocument_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAxDbDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAxDbDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAxDbDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAxDbDocument_get_ModelSpace(This,pMSpace)	\
    ( (This)->lpVtbl -> get_ModelSpace(This,pMSpace) ) 

#define IAxDbDocument_get_PaperSpace(This,pPSpace)	\
    ( (This)->lpVtbl -> get_PaperSpace(This,pPSpace) ) 

#define IAxDbDocument_get_Blocks(This,pBlocks)	\
    ( (This)->lpVtbl -> get_Blocks(This,pBlocks) ) 

#define IAxDbDocument_CopyObjects(This,Objects,Owner,IdPairs,pNewObjects)	\
    ( (This)->lpVtbl -> CopyObjects(This,Objects,Owner,IdPairs,pNewObjects) ) 

#define IAxDbDocument_get_Groups(This,pGroups)	\
    ( (This)->lpVtbl -> get_Groups(This,pGroups) ) 

#define IAxDbDocument_get_DimStyles(This,pDimStyles)	\
    ( (This)->lpVtbl -> get_DimStyles(This,pDimStyles) ) 

#define IAxDbDocument_get_Layers(This,pLayers)	\
    ( (This)->lpVtbl -> get_Layers(This,pLayers) ) 

#define IAxDbDocument_get_Linetypes(This,pLinetypes)	\
    ( (This)->lpVtbl -> get_Linetypes(This,pLinetypes) ) 

#define IAxDbDocument_get_Dictionaries(This,pDictionaries)	\
    ( (This)->lpVtbl -> get_Dictionaries(This,pDictionaries) ) 

#define IAxDbDocument_get_RegisteredApplications(This,pRegApps)	\
    ( (This)->lpVtbl -> get_RegisteredApplications(This,pRegApps) ) 

#define IAxDbDocument_get_TextStyles(This,pTextStyles)	\
    ( (This)->lpVtbl -> get_TextStyles(This,pTextStyles) ) 

#define IAxDbDocument_get_UserCoordinateSystems(This,pUCSs)	\
    ( (This)->lpVtbl -> get_UserCoordinateSystems(This,pUCSs) ) 

#define IAxDbDocument_get_Views(This,pViews)	\
    ( (This)->lpVtbl -> get_Views(This,pViews) ) 

#define IAxDbDocument_get_Viewports(This,pViewports)	\
    ( (This)->lpVtbl -> get_Viewports(This,pViewports) ) 

#define IAxDbDocument_get_ElevationModelSpace(This,Elevation)	\
    ( (This)->lpVtbl -> get_ElevationModelSpace(This,Elevation) ) 

#define IAxDbDocument_put_ElevationModelSpace(This,Elevation)	\
    ( (This)->lpVtbl -> put_ElevationModelSpace(This,Elevation) ) 

#define IAxDbDocument_get_ElevationPaperSpace(This,Elevation)	\
    ( (This)->lpVtbl -> get_ElevationPaperSpace(This,Elevation) ) 

#define IAxDbDocument_put_ElevationPaperSpace(This,Elevation)	\
    ( (This)->lpVtbl -> put_ElevationPaperSpace(This,Elevation) ) 

#define IAxDbDocument_get_Limits(This,Limits)	\
    ( (This)->lpVtbl -> get_Limits(This,Limits) ) 

#define IAxDbDocument_put_Limits(This,Limits)	\
    ( (This)->lpVtbl -> put_Limits(This,Limits) ) 

#define IAxDbDocument_HandleToObject(This,Handle,pObj)	\
    ( (This)->lpVtbl -> HandleToObject(This,Handle,pObj) ) 

#define IAxDbDocument_ObjectIdToObject(This,ObjectID,pObj)	\
    ( (This)->lpVtbl -> ObjectIdToObject(This,ObjectID,pObj) ) 

#define IAxDbDocument_get_Layouts(This,pLayouts)	\
    ( (This)->lpVtbl -> get_Layouts(This,pLayouts) ) 

#define IAxDbDocument_get_PlotConfigurations(This,pPlotConfigs)	\
    ( (This)->lpVtbl -> get_PlotConfigurations(This,pPlotConfigs) ) 

#define IAxDbDocument_get_Preferences(This,pPref)	\
    ( (This)->lpVtbl -> get_Preferences(This,pPref) ) 

#define IAxDbDocument_get_FileDependencies(This,pFDM)	\
    ( (This)->lpVtbl -> get_FileDependencies(This,pFDM) ) 

#define IAxDbDocument_get_SummaryInfo(This,pSummaryInfo)	\
    ( (This)->lpVtbl -> get_SummaryInfo(This,pSummaryInfo) ) 

#define IAxDbDocument_get_SectionManager(This,pSecMgr)	\
    ( (This)->lpVtbl -> get_SectionManager(This,pSecMgr) ) 

#define IAxDbDocument_get_Materials(This,pMaterials)	\
    ( (This)->lpVtbl -> get_Materials(This,pMaterials) ) 


#define IAxDbDocument_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define IAxDbDocument_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IAxDbDocument_Open(This,FileName,Password)	\
    ( (This)->lpVtbl -> Open(This,FileName,Password) ) 

#define IAxDbDocument_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IAxDbDocument_SaveAs(This,FileName,vSecurityParams)	\
    ( (This)->lpVtbl -> SaveAs(This,FileName,vSecurityParams) ) 

#define IAxDbDocument_DxfIn(This,FileName,LogFileName)	\
    ( (This)->lpVtbl -> DxfIn(This,FileName,LogFileName) ) 

#define IAxDbDocument_DxfOut(This,FileName,Precision,SaveThumbnailImage)	\
    ( (This)->lpVtbl -> DxfOut(This,FileName,Precision,SaveThumbnailImage) ) 

#define IAxDbDocument_get_Application(This,pAppObj)	\
    ( (This)->lpVtbl -> get_Application(This,pAppObj) ) 

#define IAxDbDocument_get_Database(This,database)	\
    ( (This)->lpVtbl -> get_Database(This,database) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxDbDocument_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Application;

#ifdef __cplusplus

class DECLSPEC_UUID("50D8D5D2-7261-4EC2-958E-80144A334316")
Application;
#endif

EXTERN_C const CLSID CLSID_Services;

#ifdef __cplusplus

class DECLSPEC_UUID("7D894B5B-D182-4ab4-B73A-0516D450BAB2")
Services;
#endif

EXTERN_C const CLSID CLSID_Utility;

#ifdef __cplusplus

class DECLSPEC_UUID("59A5150D-50C5-4c7e-B380-439C23B4751F")
Utility;
#endif

EXTERN_C const CLSID CLSID_Documents;

#ifdef __cplusplus

class DECLSPEC_UUID("8D7F238A-C964-423c-B159-C15CA031AD60")
Documents;
#endif

EXTERN_C const CLSID CLSID_Document;

#ifdef __cplusplus

class DECLSPEC_UUID("7B99FE27-7A12-44a7-A76B-C9772DE52713")
Document;
#endif

EXTERN_C const CLSID CLSID_AxDbDocument;

#ifdef __cplusplus

class DECLSPEC_UUID("3A5AADB5-EE77-46F5-9C18-DDC86DA781D2")
AxDbDocument;
#endif

EXTERN_C const CLSID CLSID_Plot;

#ifdef __cplusplus

class DECLSPEC_UUID("A05BCD04-3F16-453a-8532-D640BEA766D2")
Plot;
#endif

EXTERN_C const CLSID CLSID_PlotArea;

#ifdef __cplusplus

class DECLSPEC_UUID("97CF9B83-F6CF-4112-A0C3-922A8F6A93DD")
PlotArea;
#endif

EXTERN_C const CLSID CLSID_PlotAreas;

#ifdef __cplusplus

class DECLSPEC_UUID("1DB4C0E2-AE2D-402c-982E-6353DEF790DC")
PlotAreas;
#endif

EXTERN_C const CLSID CLSID_PlotCustomParams;

#ifdef __cplusplus

class DECLSPEC_UUID("B7EA05FA-5D1A-4e9b-9D7C-C2EFFD5B0652")
PlotCustomParams;
#endif

EXTERN_C const CLSID CLSID_SelectionSets;

#ifdef __cplusplus

class DECLSPEC_UUID("D7B2BAC2-C552-4624-97AA-26380630D6F8")
SelectionSets;
#endif

EXTERN_C const CLSID CLSID_SelectionSet;

#ifdef __cplusplus

class DECLSPEC_UUID("F4BE43A3-BCC4-458f-AB83-60E62B0A435E")
SelectionSet;
#endif

EXTERN_C const CLSID CLSID_State;

#ifdef __cplusplus

class DECLSPEC_UUID("8AAFA3A8-1404-46a5-8371-60DA4093067B")
State;
#endif

#ifndef __IEnuVal_INTERFACE_DEFINED__
#define __IEnuVal_INTERFACE_DEFINED__

/* interface IEnuVal */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnuVal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ACE692E1-A2DA-4613-B7D8-993465BA4FAD")
    IEnuVal : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [retval][out] */ VARIANT *val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnuValVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnuVal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnuVal * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnuVal * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEnuVal * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEnuVal * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEnuVal * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnuVal * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IEnuVal, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IEnuVal * This,
            /* [retval][out] */ VARIANT *val);
        
        END_INTERFACE
    } IEnuValVtbl;

    interface IEnuVal
    {
        CONST_VTBL struct IEnuValVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnuVal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnuVal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnuVal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnuVal_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEnuVal_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEnuVal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEnuVal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEnuVal_get_Item(This,val)	\
    ( (This)->lpVtbl -> get_Item(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnuVal_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_EnuVal;

#ifdef __cplusplus

class DECLSPEC_UUID("95DFCA00-FD29-429a-9B20-E5C512096936")
EnuVal;
#endif

EXTERN_C const CLSID CLSID_MenuGroups;

#ifdef __cplusplus

class DECLSPEC_UUID("19E55113-F52B-44A6-BC66-718D79C34EB6")
MenuGroups;
#endif

EXTERN_C const CLSID CLSID_MenuGroup;

#ifdef __cplusplus

class DECLSPEC_UUID("DC0AD3BE-002D-4C7C-947D-B2A10505B0F6")
MenuGroup;
#endif

EXTERN_C const CLSID CLSID_Toolbars;

#ifdef __cplusplus

class DECLSPEC_UUID("F2E2809A-D687-4BAE-8B05-196F51246043")
Toolbars;
#endif

EXTERN_C const CLSID CLSID_Toolbar;

#ifdef __cplusplus

class DECLSPEC_UUID("80A949E6-B292-4C8A-95CB-D1ABF828B178")
Toolbar;
#endif

EXTERN_C const CLSID CLSID_ToolbarItem;

#ifdef __cplusplus

class DECLSPEC_UUID("A049FE20-E780-45fa-B4C1-E94D8CA66A85")
ToolbarItem;
#endif

EXTERN_C const CLSID CLSID_MenuBar;

#ifdef __cplusplus

class DECLSPEC_UUID("7B76C8DB-98BC-4055-A20F-08B1580742FA")
MenuBar;
#endif

EXTERN_C const CLSID CLSID_PopupMenu;

#ifdef __cplusplus

class DECLSPEC_UUID("B5D31740-154C-4484-95FD-96C1F234D31A")
PopupMenu;
#endif

EXTERN_C const CLSID CLSID_PopupMenus;

#ifdef __cplusplus

class DECLSPEC_UUID("E11CC80A-997D-48c6-A61B-BD14BACE6CC4")
PopupMenus;
#endif

EXTERN_C const CLSID CLSID_PopupMenuItem;

#ifdef __cplusplus

class DECLSPEC_UUID("567D9E1B-334E-4207-96B2-564D0BE87758")
PopupMenuItem;
#endif

EXTERN_C const CLSID CLSID_Preferences;

#ifdef __cplusplus

class DECLSPEC_UUID("8E3AAA05-6A68-4572-89BE-159FD869D8FF")
Preferences;
#endif

EXTERN_C const CLSID CLSID_PreferencesFiles;

#ifdef __cplusplus

class DECLSPEC_UUID("2C9C432E-43ED-468B-B544-E2C31709281C")
PreferencesFiles;
#endif

EXTERN_C const CLSID CLSID_PreferencesDisplay;

#ifdef __cplusplus

class DECLSPEC_UUID("94AFED4B-B503-4106-A633-F37930D645B9")
PreferencesDisplay;
#endif

EXTERN_C const CLSID CLSID_PreferencesProfiles;

#ifdef __cplusplus

class DECLSPEC_UUID("9853E0DB-9B3E-4E11-A38B-35DEC52CBF66")
PreferencesProfiles;
#endif

EXTERN_C const CLSID CLSID_PreferencesSelection;

#ifdef __cplusplus

class DECLSPEC_UUID("5A5D546C-293C-45CA-A01D-774D0E5CB014")
PreferencesSelection;
#endif
#endif /* __nanoCAD_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


