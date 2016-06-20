#include <iostream>
#include <wx/string.h>
#ifndef BOOK_H
#define BOOK_H

class Book {

    wxString Title;
    wxString releaseYear;
    wxString ISBN;


    public:
        Book();
        void setTitle(wxString wxTitle);
        void setYear(wxString wxYear);
        void setISBN(wxString wxISBN);
        wxString getTitle();
        wxString getYear();
        wxString getISBN();

};


#endif
