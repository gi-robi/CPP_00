#include <iostream>
#include "phone_book.hpp"

void search_contact(PhoneBook phone_book)
{
    std::string input;
    int index;

    display_contacts(phone_book);
    input = get_input("Enter the index of the contact you want to display > ");
    index = std::stoi(input);
    if (index < 0 || index >= max_contacts)
        return;
    else
        display_one_contact(phone_book.contacts[index]);
}

void display_contacts(PhoneBook phone_book)
{
    (void)phone_book;
}

void display_one_contact(Contacts contact)
{
    std::cout << "First name: " << contact.first_name << std::endl;
    std::cout << "Last name: " << contact.last_name << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Phone number: " << contact.phone_number << std::endl;
    std::cout << "Darkest secret: " << contact.darkest_secret << std::endl; //do I diplay it or not?
}