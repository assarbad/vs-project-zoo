// vs2017_atlproj.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "vs2017atlproj_i.h"


using namespace ATL;


class Cvs2017atlprojModule : public ATL::CAtlExeModuleT< Cvs2017atlprojModule >
{
public :
	DECLARE_LIBID(LIBID_vs2017atlprojLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VS2017ATLPROJ, "{3f29c351-ab83-4d51-b2cf-492a98c03abb}")
};

Cvs2017atlprojModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

