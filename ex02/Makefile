NAME = account
CXX = c++                  
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = tests.cpp Account.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = Account.hpp

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
