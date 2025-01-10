#include <iostream>
#include "phone_book.hpp"

Contact PhoneBook::get_contact_at_index(int index)
{
    
    if (index < 0 || index >= max_contacts)
    {
        Contact unknown;
        unknown.first_name = "unknown";
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

    const Contact* contacts = phone_book.get_contacts();
    contact_printer.print_all(contacts); 
    index = std::stoi(get_input("Enter the index of the contact you want to display > "));
    contact_to_print = phone_book.get_contact_at_index(index);
    if (contact_to_print.first_name == "unknown")
    {
        print_message("Invalid index");
        return ; 
    }
    contact_printer.print_one(contact_to_print);
}