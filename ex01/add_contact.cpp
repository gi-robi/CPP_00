#include <iostream>
#include "handle_input.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "ContactPrinter.hpp"

void PhoneBook::add_contact(Contact contact)
{
    if (this->number_of_contacts < 8)
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

bool invalid_input_contact(std::string input)
{
    if (input.empty())
    {
        print_message("Contact field can't be empty.");
        return (true);
    }
    for (size_t i = 0; i < input.length(); i++)
    {
        if (!std::isspace(input[i]))
            return (false);
    }
    print_message("Contact field can't be empty.");
    return (true);
}

Contact create_contact()
{
    Contact contact;

    contact.set_first_name(get_input("Enter first name: "));
    if (invalid_input_contact(contact.get_first_name()))
        return ;
    contact.set_last_name(get_input("Enter last name: "));
    if (invalid_input_contact(contact.get_last_name()))
        return ;
    contact.set_nickname(get_input("Enter nickname: "));
    if (invalid_input_contact(contact.get_nickname()))
        return ;
    contact.set_phone_number(get_input("Enter phone number: "));
    if (invalid_input_contact(contact.get_phone_number()))
        return ;
    contact.set_darkest_secret(get_input("Enter darkest secret: "));
    if (invalid_input_contact(contact.get_darkest_secret()))
        return ;

    return contact;
}
