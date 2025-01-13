#include <iostream>
#include "handle_input.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "ContactPrinter.hpp"

std::string get_input(std::string prompt)
{
    std::string input;

    std::cout << prompt;
    getline(std::cin, input);

    return (input);
}

int is_valid_input(std::string input)
{
    if (input == add || input == search || input == exit_program)
        return (1);
    return (0);
}


void process_input(std::string input, PhoneBook& phone_book)
{
    if (input == exit_program)
    { 
        print_message("Exit Phonebook");
        exit (0);
    }
    if (input == add)
    {
        const Contact contact = create_contact();
        phone_book.add_contact(contact);
    }
    else if (input == search)
        search_contact(phone_book);
}