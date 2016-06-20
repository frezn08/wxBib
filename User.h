#include <iostream>
#include <wx/string.h>
#include <vector>
#include "Book.h"
#ifndef USER_H
#define USER_H


class User {

    wxString Name;
    wxString Surname;
    std::vector<Book> tempBook;
    int BookCounter;


public:
    User();
    void setName(wxString wxName);
    void setSurname(wxString wxSurname);
    void addBookObj(Book bookObj);
    virtual wxString getName();
    wxString getSurname();
    wxString getBookCounter();
    std::vector<Book> getBookVector();

};

#endif
