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

char toupper(char c)
{
    if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

void print_strings(int argc, char **argv)
{
    int i = 1;
    int j;
    std::string string;

    while (i < argc)
    {
        j = 0;
        string = trim_spaces(argv[i]);
        while (string[j])
        {   
            std::cout << toupper(string[j]);
            j++;
        }
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