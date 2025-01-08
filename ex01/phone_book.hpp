#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>

//classes
class Contacts
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
    Contacts contacts[8];
    int number_of_contacts;
    int last_contact_index;
    //function to add contact
    //function to search
    //function to exit
};

//constants
const int max_contacts = 8;
const std::string add = "ADD";
const std::string search = "SEARCH";
const std::string exit_program = "EXIT"; 

//handle input
std::string get_input(std::string prompt);
int is_valid_input(std::string input);
void invalid_input_message();
void process_input(std::string input, PhoneBook& phone_book);

//add contact
void add_contact(PhoneBook& phone_book);
void replace_contact(PhoneBook& phone_book, Contacts contact);
void fill_contact(Contacts& contact);

//search contact
void search_contact(PhoneBook phone_book);
void display_contacts(PhoneBook phone_book);
void display_one_contact(Contacts contact);

#endif