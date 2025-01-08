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

void invalid_input_message()
{
    std::cout << "Invalid command." << std::endl;
}

void process_input(std::string input, PhoneBook& phone_book)
{
    if (input == exit_program)
        exit (0); //maybe put it in a function that also print exit message
    if (input == add)
        add_contact(phone_book);
    else if (input == search)
        search_contact(phone_book);
}