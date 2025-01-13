NAME = phonebook
CXX = c++                  
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp handle_input.cpp add_contact.cpp search_contact.cpp ContactPrinter.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = phone_book.hpp

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp Makefile $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
