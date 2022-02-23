// vs2010_atlproj.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "vs2010_atlproj_i.h"



class Cvs2010_atlprojModule : public ATL::CAtlExeModuleT< Cvs2010_atlprojModule >
	{
public :
	DECLARE_LIBID(LIBID_vs2010_atlprojLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VS2010_ATLPROJ, "{E62BE390-E0E9-4762-A4E8-057AD9914FFF}")
	};

Cvs2010_atlprojModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

