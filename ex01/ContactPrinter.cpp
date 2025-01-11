#include <iostream>
#include "phone_book.hpp"

std::string formatColumn(const std::string& text, int width)
{
    if (text.length() > static_cast<size_t>(width))
        return text.substr(0, width - 1) + ".";
    return std::string(width - text.length(), ' ') + text;
}

void ContactPrinter::print_all(const Contact* contacts, int number_of_contacts)
{
    const int columnWidth = 10;

    std::cout << std::string(4 * (columnWidth + 1), '-') << std::endl;

    std::cout << "|" << formatColumn("Index", columnWidth) << "|"
         << formatColumn("First Name", columnWidth) << "|"
         << formatColumn("Last Name", columnWidth) << "|"
         << formatColumn("Nickname", columnWidth) << "|" << std::endl;

    std::cout << std::string(4 * (columnWidth + 1), '-') << std::endl;

    for (int i = 0; i < number_of_contacts; ++i) {
        std::cout << "|" << formatColumn(std::to_string(i), columnWidth) << "|"
             << formatColumn(contacts[i].first_name, columnWidth) << "|"
             << formatColumn(contacts[i].last_name, columnWidth) << "|"
             << formatColumn(contacts[i].nickname, columnWidth) << "|" << std::endl;
    }

    std::cout << std::string(4 * (columnWidth + 1), '-') << std::endl;
}

void ContactPrinter::print_one(Contact contact)
{
    std::cout << "First name: " << contact.first_name << std::endl;
    std::cout << "Last name: " << contact.last_name << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Phone number: " << contact.phone_number << std::endl;
    std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
}