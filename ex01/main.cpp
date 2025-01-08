#include <iostream>
#include "phone_book.hpp"

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