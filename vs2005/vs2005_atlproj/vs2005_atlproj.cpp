// vs2005_atlproj.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "vs2005_atlproj.h"


class Cvs2005_atlprojModule : public CAtlExeModuleT< Cvs2005_atlprojModule >
{
public :
	DECLARE_LIBID(LIBID_vs2005_atlprojLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VS2005_ATLPROJ, "{0BE8C3A2-536A-4A3F-88CD-D15CDAFBDDA6}")
};

Cvs2005_atlprojModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
                                LPTSTR /*lpCmdLine*/, int nShowCmd)
{
    return _AtlModule.WinMain(nShowCmd);
}

