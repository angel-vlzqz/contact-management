#include "ContactManager.hpp"

ContactManager::ContactManager()
{ // needs an empty body
}

Contact ContactManager::getContact(int id)
{
    return contacts[id];
}

std::vector<Contact> ContactManager::getContacts(std::string l_name)
{
    std::vector<Contact> matches;
    int sizeOfContacts = contacts.size();

    // checks contacts in vector to find last name matches
    for (auto cnt = 0; cnt < sizeOfContacts; cnt++)
    {
        auto tempContact = contacts[cnt].getName();
        auto tempLastName = tempContact.getLast();
        if (l_name == tempLastName)
        {
            matches.push_back(contacts[cnt]);
        }
    }

    return matches;
}

void ContactManager::addContact()
{
    Name contactName;
    Address contactAddress;

    std::string strInput;

    std::cout << "Please enter first name: ";
    std::cin >> strInput;
    std::cout << std::endl;
    contactName.setFirst(strInput);

    std::cout << "Please enter last name: ";
    std::cin >> strInput;
    std::cout << std::endl;
    contactName.setLast(strInput);

    std::cout << "Please enter middle name: ";
    std::cin >> strInput;
    std::cout << std::endl;
    contactName.setMiddle(strInput);

    std::cout << "Please enter street address: ";
    std::cin >> strInput;
    std::cout << std::endl;
    contactAddress.setAddress(strInput);

    std::cout << "Please enter abbreviated state: ";
    std::cin >> strInput;
    std::cout << std::endl;
    contactAddress.setState(strInput);

    std::cout << "Please enter ZIP code of your home city: ";
    std::cin >> strInput;
    std::cout << std::endl;
    contactAddress.setZip(strInput);

    std::cout << "Please enter your phone number: ";
    std::cin >> strInput;
    std::cout << std::endl;
    Contact contactInput(contactName, contactAddress, strInput);

    contacts.push_back(contactInput);
}

void const showContacts()
{
    // use a for loop
    
}

void ContactManager::saveContacts(const std::ostream &out)
{
    // WIP
    // out << contacts;
}

void ContactManager::loadContacts(std::istream &in)
{
    // WIP
    //  in >> contacts;
}