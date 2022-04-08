#pragma once
#include "wx\wx.h"
class Main : public wxFrame
{
private:
	wxButton* btnPress = nullptr;
	wxButton* btnMe = nullptr;
	wxTextCtrl* text = nullptr;
public:
	Main();
	~Main();
	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton** btn;
	int* nField = nullptr;
	bool bFirstClick = true;

	void OnButtonClick(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

