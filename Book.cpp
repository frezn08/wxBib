#include "Book.h"
#include <wx/string.h>

 Book::Book(){

 }


void Book::setTitle(wxString wxTitle){

    Title = wxTitle;

}
void Book::setYear(wxString wxYear){

    releaseYear = wxYear;

}
void Book::setISBN(wxString wxISBN){

    ISBN = wxISBN;

}

wxString Book::getTitle(){

    return Title;

}
wxString Book::getYear(){

    return releaseYear;

}

wxString Book::getISBN(){

    return ISBN;

}
