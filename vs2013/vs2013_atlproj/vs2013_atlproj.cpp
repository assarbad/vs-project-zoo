// vs2013_atlproj.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "vs2013_atlproj_i.h"


using namespace ATL;


class Cvs2013_atlprojModule : public ATL::CAtlExeModuleT< Cvs2013_atlprojModule >
{
public :
	DECLARE_LIBID(LIBID_vs2013_atlprojLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VS2013_ATLPROJ, "{DF06F96B-59FB-4BB4-AD13-E629EC4F257A}")
	};

Cvs2013_atlprojModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

