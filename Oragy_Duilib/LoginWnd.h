#pragma once
#include "Core\UIDefine.h"

class CLoginWnd : public WindowImplBase 
{
public:
	CLoginWnd();
	~CLoginWnd();
	DUI_DECLARE_MESSAGE_MAP()

	void OnBtnClick(TNotifyUI &msg);

	virtual LPCTSTR		GetWindowClassName() const{ return _T("CLoginWnd"); }
	virtual CDuiString GetSkinFile(){ return _T("LoginWnd.xml"); }
	virtual CDuiString GetSkinFolder() { return _T("Skins"); }
};

