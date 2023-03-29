// Angel Velazquez
// CST-210
#include "Address.hpp"
#include <iostream>

void Address::setAddress(std::string address)
{
    streetAddress = address;
}

void Address::setState(std::string state)
{
    State = state;
}

void Address::setZip(std::string zip)
{
    Zip = zip;
}

std::string Address::getAddress()
{
    return streetAddress;
}

std::string Address::getState()
{
    return State;
}

std::string Address::getZip()
{
    return Zip;
}

void Address::showAddress()
{
    std::cout << streetAddress << "\n"
              << State << ", " << Zip << std::endl;
}

Address::Address()
{
    streetAddress = "";
    State = "";
    Zip = "";
}

Address::Address(std::string address, std::string state, std::string zip)
    : streetAddress(address), State(state), Zip(zip)
{
}

Address::Address(const Address &obj)
    : streetAddress(obj.streetAddress), State(obj.State), Zip(obj.Zip)
{
}

std::istream &operator>>(std::istream &in, Address &home)
{
    // inputs parameters from home object to input stream
    in >> home.streetAddress >> home.State >> home.Zip;

    return in;
}

std::ostream &operator<<(std::ostream &out, Address &home)
{
    // parameters are assigned to output stream
    out << home.streetAddress << home.State << home.Zip;

    return out;
}