// Oragy_Duilib.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "LoginWnd.h"
#include "Oragy_Duilib.h"

#define MAX_LOADSTRING 100


int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPTSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	CPaintManagerUI::SetInstance(hInstance);

	CLoginWnd loginWnd;
	loginWnd.Create(NULL, _T("CLoginWnd"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
	loginWnd.CenterWindow();
	loginWnd.ShowModal();
}


