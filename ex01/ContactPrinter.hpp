/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactPrinter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:02:10 by rgiambon          #+#    #+#             */
/*   Updated: 2025/01/29 11:02:14 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACTPRINTER_HPP
#define CONTACTPRINTER_HPP

#include "Contact.hpp"

class ContactPrinter
{
    public:

    void print_one(Contact contact);
    void print_all(const Contact* contacts, int number_of_contacts);
};

void print_message(std::string message);

#endif
