// vs2015_atlproj.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "vs2015_atlproj_i.h"


using namespace ATL;


class Cvs2015_atlprojModule : public ATL::CAtlExeModuleT< Cvs2015_atlprojModule >
{
public :
	DECLARE_LIBID(LIBID_vs2015_atlprojLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VS2015_ATLPROJ, "{D58DF8C1-ABD1-4D67-98FA-F50201B9E86C}")
	};

Cvs2015_atlprojModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

