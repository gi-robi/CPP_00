#include <iostream>
#include <string>
#include <cctype>

std::string trim_spaces(std::string str)
{
        size_t start = str.find_first_not_of(" \t\n\r"); 
        size_t end = str.find_last_not_of(" \t\n\r");

        if (start == std::string::npos)
            return ("");
        return (str.substr(start, end - start + 1));
}

void to_upper(std::string str)
{
    int i = 0;

    while (str[i])
    {
        std::cout << static_cast<char>(std::toupper(static_cast<char>(str[i])));
        i++;
    }
}

void print_strings(int argc, char **argv)
{
    int i = 1;

    while (i < argc)
    {
        to_upper(trim_spaces(std::string(argv[i])));
        if (i < argc)
            std::cout << ' ';
        i++;
    }
    std::cout << std::endl;

}

int main(int argc, char **argv)
{
    if (argc == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
        print_strings(argc, argv);
    return (0);
}