NAME = phonebook
CXX = c++                  
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp constructor.cpp handle_input.cpp Contact.cpp add_contact.cpp search_contact.cpp ContactPrinter.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = handle_input.hpp PhoneBook.hpp Contact.hpp ContactPrinter.hpp

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^
	chmod +x $(NAME)

%.o: %.cpp Makefile $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
