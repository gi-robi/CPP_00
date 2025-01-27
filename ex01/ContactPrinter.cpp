/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactPrinter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:54:35 by rgiambon          #+#    #+#             */
/*   Updated: 2025/01/27 11:55:22 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "handle_input.hpp"
#include "ContactPrinter.hpp"
#include "Contact.hpp"

std::string to_string(int value)
{
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

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
        std::cout << "|" << formatColumn(to_string(i), columnWidth) << "|"
             << formatColumn(contacts[i].get_first_name(), columnWidth) << "|"
             << formatColumn(contacts[i].get_last_name(), columnWidth) << "|"
             << formatColumn(contacts[i].get_nickname(), columnWidth) << "|" << std::endl;
    }
    
    std::cout << std::string(4 * (columnWidth + 1), '-') << std::endl;
}

void ContactPrinter::print_one(Contact contact)
{
    std::cout << "First name: " << contact.get_first_name() << std::endl;
    std::cout << "Last name: " << contact.get_last_name() << std::endl;
    std::cout << "Nickname: " << contact.get_nickname() << std::endl;
    std::cout << "Phone number: " << contact.get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << contact.get_darkest_secret() << std::endl;
}

void print_message(std::string message)
{
    std::cout << message << std::endl;
}
