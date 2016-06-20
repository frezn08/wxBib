#include <vector>
#include "wx_pch.h"
#include "AddUser.h"


#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(AddUser)
	#include <wx/string.h>
	#include <wx/intl.h>
	//*)
#endif
//(*InternalHeaders(AddUser)
//*)

//(*IdInit(AddUser)
const long AddUser::ID_StaticName = wxNewId();
const long AddUser::ID_Name = wxNewId();
const long AddUser::ID_StaticSurname = wxNewId();
const long AddUser::ID_Surname = wxNewId();
const long AddUser::ID_StaticTitle = wxNewId();
const long AddUser::ID_Title = wxNewId();
const long AddUser::ID_StaticISBN = wxNewId();
const long AddUser::ID_ISBN = wxNewId();
const long AddUser::ID_StaticYear = wxNewId();
const long AddUser::ID_Year = wxNewId();
const long AddUser::ID_Cancel = wxNewId();
const long AddUser::ID_OK = wxNewId();
//*)

BEGIN_EVENT_TABLE(AddUser,wxDialog)
	//(*EventTable(AddUser)
	//*)
END_EVENT_TABLE()

AddUser::AddUser(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(AddUser)
	wxGridSizer* GridSizer1;

	Create(parent, id, _("Add user"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	GridSizer1 = new wxGridSizer(4, 2, 0, 0);
	StaticName = new wxStaticText(this, ID_StaticName, _("Name : "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_StaticName"));
	GridSizer1->Add(StaticName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextName = new wxTextCtrl(this, ID_Name, wxEmptyString, wxDefaultPosition, wxSize(100,28), 0, wxDefaultValidator, _T("ID_Name"));
	GridSizer1->Add(TextName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticSurname = new wxStaticText(this, ID_StaticSurname, _("Surname : "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_StaticSurname"));
	GridSizer1->Add(StaticSurname, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextSurname = new wxTextCtrl(this, ID_Surname, wxEmptyString, wxDefaultPosition, wxSize(100,28), 0, wxDefaultValidator, _T("ID_Surname"));
	GridSizer1->Add(TextSurname, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticTitle = new wxStaticText(this, ID_StaticTitle, _("Book title :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_StaticTitle"));
	GridSizer1->Add(StaticTitle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextTitle = new wxTextCtrl(this, ID_Title, wxEmptyString, wxDefaultPosition, wxSize(100,28), 0, wxDefaultValidator, _T("ID_Title"));
	GridSizer1->Add(TextTitle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticISBN = new wxStaticText(this, ID_StaticISBN, _("ISBN : "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_StaticISBN"));
	GridSizer1->Add(StaticISBN, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextISBN = new wxTextCtrl(this, ID_ISBN, wxEmptyString, wxDefaultPosition, wxSize(100,28), 0, wxDefaultValidator, _T("ID_ISBN"));
	GridSizer1->Add(TextISBN, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticYear = new wxStaticText(this, ID_StaticYear, _("Release year :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_StaticYear"));
	GridSizer1->Add(StaticYear, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextYear = new wxTextCtrl(this, ID_Year, wxEmptyString, wxDefaultPosition, wxSize(100,28), 0, wxDefaultValidator, _T("ID_Year"));
	GridSizer1->Add(TextYear, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ButCancel = new wxButton(this, ID_Cancel, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_Cancel"));
	GridSizer1->Add(ButCancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ButOK = new wxButton(this, ID_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_OK"));
	GridSizer1->Add(ButOK, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(GridSizer1);
	GridSizer1->Fit(this);
	GridSizer1->SetSizeHints(this);

	Connect(ID_Cancel,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AddUser::OnButton1Click);
	Connect(ID_OK,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AddUser::OnButOKClick);
	//*)
}

AddUser::~AddUser()
{
	//(*Destroy(AddUser)
	//*)
}


void AddUser::OnButton1Click(wxCommandEvent& event)
{
    Close();
}



void AddUser::OnButOKClick(wxCommandEvent& event)
{
    ShowList newList;
    User newUser;
    Book newBook;

    newUser.setName(TextName->GetValue());
    newUser.setSurname(TextSurname->GetValue());
    newBook.setTitle(TextTitle->GetValue());
    newBook.setISBN(TextISBN->GetValue());
    newBook.setYear(TextYear->GetValue());

    newUser.addBookObj(newBook);
    newList.addUserObj(newUser);


    Close();

}
