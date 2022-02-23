// vs2012_atlproj.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "vs2012_atlproj_i.h"


using namespace ATL;


class Cvs2012_atlprojModule : public ATL::CAtlExeModuleT< Cvs2012_atlprojModule >
{
public :
	DECLARE_LIBID(LIBID_vs2012_atlprojLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VS2012_ATLPROJ, "{4516E434-7339-465C-9810-FACA97544D56}")
	};

Cvs2012_atlprojModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

