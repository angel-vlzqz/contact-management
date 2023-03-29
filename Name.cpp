// Angel Velazquez
// CST-210
#include "Name.hpp"
#include <iostream>

// setters
void Name::setLast(std::string str)
{
    last_name = str;
}

void Name::setFirst(std::string str)
{
    first_name = str;
}

void Name::setMiddle(std::string str)
{
    middle_name = str;
}

// getters
std::string Name::getLast()
{
    return last_name;
}

std::string Name::getFirst()
{
    return first_name;
}

std::string Name::getMiddle()
{
    return middle_name;
}

void Name::showName()
{
    std::cout << middle_name << ", " << first_name << " " << last_name[0] << "." << std::endl;
}

// constructors
Name::Name()
{
    last_name = "";
    first_name = "";
    middle_name = "";
}

Name::Name(std::string first, std::string last, std::string middle)
    : first_name(first), last_name(last), middle_name(middle)
{
}

Name::Name(const Name &obj)
    : first_name(obj.first_name), last_name(obj.last_name), middle_name(obj.middle_name)
{
}

std::istream &operator>>(std::istream &in, Name &rhs)
{
    // gives parameters to input stream
    in >> rhs.first_name >> rhs.last_name >> rhs.middle_name;

    return in;
}

std::ostream &operator<<(std::ostream &out, Name &rhs)
{
    // gives parameters to output stream
    out << rhs.last_name << rhs.first_name << rhs.middle_name;

    return out;
}