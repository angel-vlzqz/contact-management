// Angel Velazquez
// CST-210
#include "Contact.hpp"

int Contact::totalCt = 0;

void Contact::setIdentifier()
{
    totalCt++;
    identifier = totalCt;
}

void Contact::setName(Name inName)
{
    name.Name::setFirst(inName.Name::getFirst());
    name.Name::setMiddle(inName.Name::getMiddle());
    name.Name::setLast(inName.Name::getLast());
}

void Contact::setAddress(Address inAddress)
{
    address.Address::setAddress(inAddress.Address::getAddress());
}

void Contact::setPhone(std::string inPhone)
{
    phone = inPhone;
}

Name Contact::getName()
{
    return name;
}

Address Contact::getAddress()
{
    return address;
}

std::string Contact::getPhone()
{
    return phone;
}

Contact::Contact()
{
    // name = NULL;
    // address = NULL;
    // phone = "";
}

Contact::Contact(Name inName, Address inAddress, std::string inPhone)
    : name(inName), address(inAddress), phone(inPhone)
{
}

Contact::Contact(const Contact &obj)
    : name(obj.name), address(obj.address), phone(obj.phone)
{
}

void Contact::showContact()
{
    std::cout << name.getLast() << ", " << name.getFirst() << "." << std::endl
              << address.getAddress() << std::endl
              << address.getState() << "\t" << address.getZip() << std::endl
              << phone << std::endl;
}

std::istream &operator>>(std::istream &in, Contact &info)
{
    // assigns parameters to input stream
    in >> info.name >> info.address >> info.phone;

    return in;
}

std::ostream &operator<<(std::ostream &out, Contact &info)
{
    // assigns parameters to output stream
    out << info.name << info.address << info.phone;

    return out;
}
