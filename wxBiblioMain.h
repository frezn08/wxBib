#ifndef WXBIBLIOMAIN_H
#define WXBIBLIOMAIN_H

//(*Headers(wxBiblioFrame)
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

#include "AddUser.h"
#include "User.h"
#include "Bookshelf.h"
#include "ShowList.h"
#include "Book.h"

class wxBiblioFrame: public wxFrame
{
    public:

        wxBiblioFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxBiblioFrame();

    private:

        //(*Handlers(wxBiblioFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnButAddUserClick(wxCommandEvent& event);
        void OnButRmUserClick(wxCommandEvent& event);
        void OnButShowListClick(wxCommandEvent& event);
        void OnButExportClick(wxCommandEvent& event);
        void OnButCloseClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(wxBiblioFrame)
        static const long ID_AddUser;
        static const long ID_RmUser;
        static const long ID_ShowList;
        static const long ID_Close;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wxBiblioFrame)
        wxStatusBar* StatusBar1;
        wxButton* ButShowList;
        wxButton* ButRmUser;
        wxButton* ButAddUser;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXBIBLIOMAIN_H
