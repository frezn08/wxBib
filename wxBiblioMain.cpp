#include "wx_pch.h"
#include "wxBiblioMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(wxBiblioFrame)
#include <wx/string.h>
#include <wx/intl.h>
//*)


//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(wxBiblioFrame)
const long wxBiblioFrame::ID_AddUser = wxNewId();
const long wxBiblioFrame::ID_RmUser = wxNewId();
const long wxBiblioFrame::ID_ShowList = wxNewId();
const long wxBiblioFrame::ID_Close = wxNewId();
const long wxBiblioFrame::idMenuQuit = wxNewId();
const long wxBiblioFrame::idMenuAbout = wxNewId();
const long wxBiblioFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(wxBiblioFrame,wxFrame)
    //(*EventTable(wxBiblioFrame)
    //*)
END_EVENT_TABLE()

wxBiblioFrame::wxBiblioFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(wxBiblioFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxGridSizer* GridSizer1;
    wxMenu* Menu1;
    wxButton* ButClose;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(800,600));
    GridSizer1 = new wxGridSizer(0, 1, -200, -150);
    ButAddUser = new wxButton(this, ID_AddUser, _("Add user"), wxPoint(0,-300), wxDefaultSize, 0, wxDefaultValidator, _T("ID_AddUser"));
    GridSizer1->Add(ButAddUser, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButRmUser = new wxButton(this, ID_RmUser, _("Remove user"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RmUser"));
    GridSizer1->Add(ButRmUser, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButShowList = new wxButton(this, ID_ShowList, _("Show users list"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_ShowList"));
    GridSizer1->Add(ButShowList, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButClose = new wxButton(this, ID_Close, _("Close"), wxPoint(1505,1000), wxDefaultSize, 0, wxDefaultValidator, _T("ID_Close"));
    GridSizer1->Add(ButClose, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(GridSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    SetSizer(GridSizer1);
    Layout();

    Connect(ID_AddUser,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxBiblioFrame::OnButAddUserClick);
    Connect(ID_RmUser,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxBiblioFrame::OnButRmUserClick);
    Connect(ID_ShowList,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxBiblioFrame::OnButShowListClick);
    Connect(ID_Close,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxBiblioFrame::OnButCloseClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxBiblioFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxBiblioFrame::OnAbout);
    //*)
}

wxBiblioFrame::~wxBiblioFrame()
{
    //(*Destroy(wxBiblioFrame)
    //*)
}

void wxBiblioFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void wxBiblioFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}



void wxBiblioFrame::OnButAddUserClick(wxCommandEvent& event)
{
    AddUser dialog(this);
    dialog.ShowModal();
}

void wxBiblioFrame::OnButRmUserClick(wxCommandEvent& event)
{
}

void wxBiblioFrame::OnButShowListClick(wxCommandEvent& event)
{

    ShowList dialog(this);
    dialog.ShowModal();

}

void wxBiblioFrame::OnButExportClick(wxCommandEvent& event)
{
}

void wxBiblioFrame::OnButCloseClick(wxCommandEvent& event)
{
    Close();
}
