#pragma once  //______________________________________ Series.h  
#include "Resource.h"
class Series : public Win::Dialog
{
public:
	Series()
	{
	}
	~Series()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxEntrada;
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxX;
	Win::Label lb3;
	Win::Textbox tbxY;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(200);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(124);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Series";
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 72, 10, 120, 25, hWnd, 1000);
		lb1.Create(NULL, L"n=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 11, 10, 61, 25, hWnd, 1001);
		lb2.Create(NULL, L"X=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10, 47, 62, 25, hWnd, 1002);
		tbxX.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 72, 50, 121, 25, hWnd, 1003);
		lb3.Create(NULL, L"Y=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10, 90, 61, 25, hWnd, 1004);
		tbxY.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 70, 92, 122, 25, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxEntrada.Font = fontArial014A;
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxX.Font = fontArial014A;
		lb3.Font = fontArial014A;
		tbxY.Font = fontArial014A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
