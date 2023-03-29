// Angel Velazquez
// CST-210
#pragma once
#include <string>
#include <iostream>

class Address
{
private:
    std::string streetAddress;
    std::string State;
    std::string Zip;

public:
    void setAddress(std::string address);
    void setState(std::string state);
    void setZip(std::string zip);
    std::string getAddress();
    std::string getState();
    std::string getZip();
    void showAddress();

    // overloaded operators
    friend std::istream &operator>>(std::istream &in, Address &home);
    friend std::ostream &operator<<(std::ostream &out, Address &home);

    // constructors
    Address();
    Address(std::string address, std::string state, std::string zip);
    Address(const Address &obj);
};