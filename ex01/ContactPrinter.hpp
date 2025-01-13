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