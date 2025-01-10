#include <iostream>
#include "phone_book.hpp"

PhoneBook::PhoneBook(int number_of_contacts, int last_contact_index)
{
    this->number_of_contacts = number_of_contacts;
    this->last_contact_index = last_contact_index;
}

int main(void)
{
    PhoneBook phone_book(0, -1);
    std::string input;
    
    while (1)
    {
        input = get_input("Enter a command > ");
        if (is_valid_input(input))
            process_input(input, phone_book);
        else
            print_message("Invalid input");
        
    }
}