#include "User.h"
#include <wx/string.h>


User::User() {

}

void User::setName(wxString wxName) {

    Name = wxName;

}

void User::setSurname(wxString wxSurname) {

    Surname = wxSurname;

}

void User::addBookObj(Book bookObj) {

    tempBook.push_back(bookObj);

}

wxString User::getName() {

    return Name;

}

wxString User::getSurname() {

    return Surname;

}

std::vector<Book> User::getBookVector() {

    return tempBook;

}
