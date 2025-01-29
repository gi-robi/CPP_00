/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:02:56 by rgiambon          #+#    #+#             */
/*   Updated: 2025/01/29 11:02:57 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "handle_input.hpp"
#include "PhoneBook.hpp"
#include "ContactPrinter.hpp"

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
