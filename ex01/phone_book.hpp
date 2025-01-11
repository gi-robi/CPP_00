#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>

//classes
class Contact
{
    public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

class PhoneBook
{
    public:
    
    Contact contacts[8];
    int number_of_contacts;
    int last_contact_index;
    static const int max_contacts = 8;

    PhoneBook(int number_of_contacts, int last_contact_index);
    
    //add contact
    void add_contact(Contact contact);

    //search contact
    Contact* get_contacts();
    Contact get_contact_at_index(int index); // returns contact at index

    private: 
    //search contact
    void replace_contact(Contact contact);
};

class ContactPrinter
{
    public:

    void print_one(Contact contact);
    void print_all(const Contact* contacts, int number_of_contacts);
};

//handle input
const std::string add = "ADD";
const std::string search = "SEARCH";
const std::string exit_program = "EXIT"; 

std::string get_input(std::string prompt);
int is_valid_input(std::string input);
void print_message(std::string message);
void process_input(std::string input, PhoneBook& phone_book);

//add contact
Contact create_contact();

//search contact
void search_contact(PhoneBook phone_book);

#endif