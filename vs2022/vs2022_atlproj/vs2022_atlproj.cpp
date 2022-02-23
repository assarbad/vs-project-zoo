// vs2022_atlproj.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "vs2022atlproj_i.h"


using namespace ATL;


class Cvs2022atlprojModule : public ATL::CAtlExeModuleT< Cvs2022atlprojModule >
{
public :
	DECLARE_LIBID(LIBID_vs2022atlprojLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VS2022ATLPROJ, "{3e60daf3-efe0-4e97-8c1f-00f191934533}")
};

Cvs2022atlprojModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

