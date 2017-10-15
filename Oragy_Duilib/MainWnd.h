#pragma once

class CMainWnd
{
public:
	CMainWnd();
	virtual ~CMainWnd();

public:
	static HRESULT			RegisterWnd(HINSTANCE hInstance);
	HWND					CreateWnd();
	void					LoopMessage();

protected:
	static LPCTSTR			GetWindowClass();
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT					ThisWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	void					ReceiveCopydata(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
	static HINSTANCE		m_hInstance;
	HWND					m_hWnd;
};

