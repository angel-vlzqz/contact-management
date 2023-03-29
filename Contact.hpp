//Angel Velazquez
//CST-210
#pragma once
#include "Address.hpp"
#include "Name.hpp"
#include <iostream>
#include <string>

class Contact
{
private:
    Name name;
    Address address;
    std::string phone;
    int identifier;

    //update identifier if object doesn't have one
    void setIdentifier();

public:
    static int totalCt;
    
    void setName(Name inName);
    void setAddress(Address inAddress);
    void setPhone(std::string inPhone);
    Name getName();
    Address getAddress();
    std::string getPhone();
    void showContact();

    // overloaded operators
    friend std::istream &operator>>(std::istream &in, Contact &info);
    friend std::ostream &operator<<(std::ostream &out, Contact &info);
    
    //constructors
    Contact();
    Contact(Name inName, Address inAddress, std::string inPhone);
    Contact(const Contact &obj);
};