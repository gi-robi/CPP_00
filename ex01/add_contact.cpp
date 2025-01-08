#include <iostream>
#include "phone_book.hpp"

void add_contact(PhoneBook& phone_book)
{
    Contacts contact;
    
    fill_contact(contact);
    if (phone_book.number_of_contacts < 8) //put the 8 in a const??
    {
        phone_book.last_contact_index++;
        phone_book.contacts[phone_book.last_contact_index] = contact;
        phone_book.number_of_contacts++;
    }
    else
        replace_contact(phone_book, contact);
}

void replace_contact(PhoneBook& phone_book, Contacts contact)
{
    int replace_index;
    
    replace_index = (phone_book.last_contact_index + 1) % 8; //put the 8 in a const??
    phone_book.contacts[replace_index] = contact;
    phone_book.last_contact_index = replace_index;
}

void fill_contact(Contacts& contact)
{
    contact.first_name = get_input("Enter first name: ");
    contact.last_name = get_input("Enter last name: ");
    contact.nickname = get_input("Enter last name: ");
    contact.phone_number = get_input("Enter phone number: ");
    contact.darkest_secret = get_input("Enter darkest secret: ");
}