#pragma once
#include "Contact.hpp"
#include <iostream>
#include <vector>

class ContactManager: public Contact
{
private:
    std::vector<Contact> contacts;

public:
    ContactManager();
    Contact getContact(int id);
    std::vector<Contact> getContacts(std::string l_name);
    void addContact();
    void showContacts() const;
    void saveContacts(const std::ostream &out);
    void loadContacts(std::istream &in);
};