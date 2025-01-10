#include <iostream>
#include "phone_book.hpp"

void ContactPrinter::print_all(const Contact* contacts)
{
    (void)contacts;
}

void ContactPrinter::print_one(Contact contact)
{
    std::cout << "First name: " << contact.first_name << std::endl;
    std::cout << "Last name: " << contact.last_name << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Phone number: " << contact.phone_number << std::endl;
    std::cout << "Darkest secret: " << contact.darkest_secret << std::endl; //do I diplay it or not?
}