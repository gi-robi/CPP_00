#include <iostream>
#include "phone_book.hpp"

// 1 if the input is an "add" command -> run function to collect user input
// 2 create a new instance of Contact containing the input information
// 3 call PhoneBook->add_contact(contact) by passing contact

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
    
    replace_index = (this->last_contact_index + 1) % max_contacts; //put the 8 in a const??
    this->contacts[replace_index] = contact;
    this->last_contact_index = replace_index;
}

Contact create_contact()
{
    Contact contact;

    contact.first_name = get_input("Enter first name: ");
    contact.last_name = get_input("Enter last name: ");
    contact.nickname = get_input("Enter nickname: ");
    contact.phone_number = get_input("Enter phone number: ");
    contact.darkest_secret = get_input("Enter darkest secret: ");

    return contact;
}
