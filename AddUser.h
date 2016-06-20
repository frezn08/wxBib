#ifndef ADDUSER_H
#define ADDUSER_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(AddUser)
	#include <wx/dialog.h>
	#include <wx/sizer.h>
	#include <wx/button.h>
	#include <wx/stattext.h>
	#include <wx/textctrl.h>
	//*)
#endif
#include "User.h"
#include "Bookshelf.h"
#include "Book.h"
#include "ShowList.h"
//(*Headers(AddUser)
//*)

class AddUser: public wxDialog
{
	public:
        ShowList getUser();
		AddUser(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AddUser();

		//(*Declarations(AddUser)
		wxButton* ButCancel;
		wxStaticText* StaticISBN;
		wxStaticText* StaticTitle;
		wxTextCtrl* TextISBN;
		wxTextCtrl* TextYear;
		wxButton* ButOK;
		wxTextCtrl* TextTitle;
		wxTextCtrl* TextSurname;
		wxTextCtrl* TextName;
		wxStaticText* StaticSurname;
		wxStaticText* StaticName;
		wxStaticText* StaticYear;
		//*)

	protected:

		//(*Identifiers(AddUser)
		static const long ID_StaticName;
		static const long ID_Name;
		static const long ID_StaticSurname;
		static const long ID_Surname;
		static const long ID_StaticTitle;
		static const long ID_Title;
		static const long ID_StaticISBN;
		static const long ID_ISBN;
		static const long ID_StaticYear;
		static const long ID_Year;
		static const long ID_Cancel;
		static const long ID_OK;
		//*)

	private:

		//(*Handlers(AddUser)
		void OnButton1Click(wxCommandEvent& event);
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnTextNameText(wxCommandEvent& event);
		void OnButOKClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
