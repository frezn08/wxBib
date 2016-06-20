#include <iostream>
#include "wx_pch.h"
#include "ShowList.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(ShowList)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(ShowList)
//*)

//(*IdInit(ShowList)
const long ShowList::ID_TextLista = wxNewId();
const long ShowList::ID_BUTTON1 = wxNewId();
const long ShowList::ID_BUTTON2 = wxNewId();
const long ShowList::ID_BUTTON3 = wxNewId();
const long ShowList::ID_STATICTEXT1 = wxNewId();
const long ShowList::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ShowList,wxDialog)
	//(*EventTable(ShowList)
	//*)
END_EVENT_TABLE()

ShowList::ShowList(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ShowList)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(455,384));
	Move(wxDefaultPosition);
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(0,0), wxSize(456,384), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	TextLista = new wxTextCtrl(Panel1, ID_TextLista, wxEmptyString, wxPoint(32,40), wxSize(256,256), wxTE_MULTILINE|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_TextLista"));
	TextLista->Disable();
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Cancel"), wxPoint(176,328), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Text file"), wxPoint(336,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("PDF file"), wxPoint(336,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Export to..."), wxPoint(328,88), wxDefaultSize, 0, _T("ID_STATICTEXT1"));

	Connect(ID_TextLista,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&ShowList::OnTextListaText);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ShowList::OnButton1Click);
	//*)
}

ShowList::ShowList(){

}

ShowList::~ShowList()
{
	//(*Destroy(ShowList)
	//*)
}



void ShowList::addUserObj(User userObj) {

    tempUser.push_back(userObj);

}

void ShowList::OnButton1Click(wxCommandEvent& event)
{
    Close();
}

void ShowList::OnTextListaText(wxCommandEvent& event)
{


}
