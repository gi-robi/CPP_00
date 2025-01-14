#include <iostream>
#include "handle_input.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::add_contact(Contact contact)
{
    if (this->number_of_contacts < 8) //put the 8 in a const??
    {
        this->last_contact_index++;
        this->contacts[this->last_contact_index] = contact;
        this->number_of_contacts++;
    }
    else
        this->replace_contact(contact);
}

void PhoneBook::replace_contact(Contact contact)
{
    int replace_index;
    
    replace_index = (this->last_contact_index + 1) % max_contacts;
    this->contacts[replace_index] = contact;
    this->last_contact_index = replace_index;
}

Contact create_contact()
{
    Contact contact;

    contact.set_first_name(get_input("Enter first name: "));
    contact.set_last_name(get_input("Enter last name: "));
    contact.set_nickname(get_input("Enter nickname: "));
    contact.set_phone_number(get_input("Enter phone number: "));
    contact.set_darkest_secret(get_input("Enter darkest secret: "));

    return contact;
}
