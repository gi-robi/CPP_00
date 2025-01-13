#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:
    
    Contact contacts[8];
    int number_of_contacts;
    int last_contact_index;
    static const int max_contacts = 8;

    PhoneBook(int number_of_contacts, int last_contact_index);
    
    void add_contact(Contact contact);

    Contact* get_contacts();
    Contact get_contact_at_index(int index);

    private: 

    void replace_contact(Contact contact);
};

Contact create_contact();
void search_contact(PhoneBook phone_book);

#endif