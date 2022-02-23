// vs2008_atlproj.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "vs2008_atlproj_i.h"


class Cvs2008_atlprojModule : public CAtlExeModuleT< Cvs2008_atlprojModule >
{
public :
	DECLARE_LIBID(LIBID_vs2008_atlprojLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VS2008_ATLPROJ, "{9CAE31C1-277F-4E6D-8DD0-8F58A6806C72}")
};

Cvs2008_atlprojModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
                                LPTSTR /*lpCmdLine*/, int nShowCmd)
{
    return _AtlModule.WinMain(nShowCmd);
}

