/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:03:10 by rgiambon          #+#    #+#             */
/*   Updated: 2025/01/29 11:03:11 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
    
    Contact contacts[8];
    int last_contact_index;
    int number_of_contacts;
    
    void replace_contact(Contact contact);

    public:

    PhoneBook(int number_of_contacts, int last_contact_index);
    
    static const int max_contacts = 8;
    

    void add_contact(Contact contact);
    int get_number_of_contacts();
    Contact* get_contacts();
    Contact get_contact_at_index(int index);

};

Contact create_contact();
void search_contact(PhoneBook phone_book);

#endif
