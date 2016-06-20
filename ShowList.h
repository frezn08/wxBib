#ifndef SHOWLIST_H
#define SHOWLIST_H
#include "Bookshelf.h"

#ifndef WX_PRECOMP
	//(*HeadersPCH(ShowList)
	#include <wx/dialog.h>
	#include <wx/button.h>
	#include <wx/panel.h>
	#include <wx/stattext.h>
	#include <wx/textctrl.h>
	//*)
#endif
//(*Headers(ShowList)
//*)

class ShowList: public wxDialog, public User
{
    std::vector<User>tempUser;
	public:
	    ShowList();
        void addUserObj(User userObj);
		ShowList(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ShowList();

		//(*Declarations(ShowList)
		wxPanel* Panel1;
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxStaticText* StaticText1;
		wxTextCtrl* TextLista;
		//*)

	protected:

		//(*Identifiers(ShowList)
		static const long ID_TextLista;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT1;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(ShowList)
		void OnButton1Click(wxCommandEvent& event);
		void OnTextListaText(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
