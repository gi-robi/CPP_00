#include <iostream>
#include "handle_input.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "ContactPrinter.hpp"

Contact PhoneBook::get_contact_at_index(int index)
{
    
    if (index < 0 || index >= max_contacts || index >= this->number_of_contacts)
    {
        Contact unknown;
        unknown.get_first_name() = "unknown";
        return (unknown);
    }
    return (this->contacts[index]);
}

Contact* PhoneBook::get_contacts()
{
    return (this->contacts);
}

void search_contact(PhoneBook phone_book)
{
    int index;
    Contact contact_to_print;
    ContactPrinter contact_printer;

    if (phone_book.get_number_of_contacts() == 0)
    {
        print_message("Phonebook is empty");
        return ;
    }
    const Contact* contacts = phone_book.get_contacts();
    contact_printer.print_all(contacts, phone_book.get_number_of_contacts()); 
    index = std::stoi(get_input("Enter the index of the contact you want to display > "));
    contact_to_print = phone_book.get_contact_at_index(index);
    if (contact_to_print.get_first_name() == "unknown")
    {
        print_message("Invalid index");
        return ; 
    }
    contact_printer.print_one(contact_to_print);
}

int PhoneBook::get_number_of_contacts()
{
    return (this->number_of_contacts);
}