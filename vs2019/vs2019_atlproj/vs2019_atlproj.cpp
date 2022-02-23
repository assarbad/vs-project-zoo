// vs2019_atlproj.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "vs2019atlproj_i.h"


using namespace ATL;


class Cvs2019atlprojModule : public ATL::CAtlExeModuleT< Cvs2019atlprojModule >
{
public :
	DECLARE_LIBID(LIBID_vs2019atlprojLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VS2019ATLPROJ, "{5d7bcd25-04aa-4346-acee-3a4089c3c497}")
};

Cvs2019atlprojModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

