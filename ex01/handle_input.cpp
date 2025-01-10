#include <iostream>
#include "phone_book.hpp"

std::string get_input(std::string prompt)
{
    std::string input;

    std::cout << prompt;
    std::cin >> input;

    return (input);
}

int is_valid_input(std::string input)
{
    if (input == add || input == search || input == exit_program)
        return (1);
    return (0);
}

void print_message(std::string message)
{
    std::cout << message << std::endl;
}

void process_input(std::string input, PhoneBook& phone_book)
{
    if (input == exit_program)
    {
        exit (0); //maybe put it in a function that also print exit message
        print_message("Exit Phonebook");
    }
    if (input == add)
    {
        const Contact contact = create_contact();
        phone_book.add_contact(contact);
    }
    else if (input == search)
        search_contact(phone_book);
}