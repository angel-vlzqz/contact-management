// Angel Velazquez
// CST-210
#pragma once
#include <string>
#include <iostream>

class Name
{
private:
    std::string first_name;
    std::string last_name;
    std::string middle_name;

public:
    void setLast(std::string str);
    void setFirst(std::string str);
    void setMiddle(std::string str);
    std::string getLast();
    std::string getFirst();
    std::string getMiddle();
    void showName();

    // overloaded operators
    friend std::istream &operator>>(std::istream& in, Name &rhs);
    friend std::ostream &operator<<(std::ostream& out, Name &rhs);

    // constructors
    Name();
    Name(std::string first, std::string last, std::string middle);
    Name(const Name &obj);
};