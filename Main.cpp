// Angel Velazquez
// CST-210
#include <iostream>
#include "Contact.hpp"

int main()
{
    Name mine("Angel", "Velazquez", "Joann");

    Address myPlace("635 W. Evan Hewes Hwy.", "CA", "92243");

    Contact myContact(mine, myPlace, "442-456-4161");
    myContact.showContact();
}