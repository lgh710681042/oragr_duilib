#include "stdafx.h"
#include "LoginWnd.h"

DUI_BEGIN_MESSAGE_MAP(CLoginWnd, WindowImplBase)
	DUI_ON_MSGTYPE(DUI_MSGTYPE_CLICK, OnBtnClick)
DUI_END_MESSAGE_MAP()

CLoginWnd::CLoginWnd()
{
}


CLoginWnd::~CLoginWnd()
{
}

void CLoginWnd::OnBtnClick(TNotifyUI &msg)
{
	if (msg.sType == _T("click"))
	{
		if (msg.pSender->GetName() == _T("BtnLogin"))
		{
			
		}
	}
}
