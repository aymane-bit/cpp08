CXX = c++

CXXFLAGS = -Wall -Wextra -Werror  -std=c++98

TARGET = MutantStack

Header = MutantStack.hpp MutantStack.tpp

SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC) $(Header)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re