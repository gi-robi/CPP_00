#include <iostream>
#include "phone_book.hpp"

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


int main(void)
{
    PhoneBook phone_book;
    std::string input;

    phone_book.number_of_contacts = 0;
    phone_book.last_contact_index = -1;
    
    while (1)
    {
        input = get_input("Enter a command > ");
        if (is_valid_input(input))
            process_input(input, phone_book);
        else
            invalid_input_message();
        
    }
}