/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:24:01 by rgiambon          #+#    #+#             */
/*   Updated: 2025/01/27 12:13:50 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "handle_input.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "ContactPrinter.hpp"

std::string get_input(std::string prompt)
{
    std::string input;

    std::cout << prompt;
    getline(std::cin, input);
	if (std::cin.eof())
		exit(1);
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
		if (contact.get_first_name() == "unknown")
		{
			print_message("Contact field can't be empty.");
			return ;
		}
        phone_book.add_contact(contact);
    }
    else if (input == search)
        search_contact(phone_book);
}
