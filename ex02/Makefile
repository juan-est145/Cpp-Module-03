NAME = fragTrap.out

SRCS = ClapTrap.cpp\
ScavTrap.cpp\
FragTrap.cpp\
main.cpp\

OBJS = $(SRCS:.cpp=.o)

HEADER = ClapTrap.hpp\
ScavTrap.hpp\
FragTrap.hpp\

CXX = $(shell which c++ clang++ g++ | head -n 1)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)


re: fclean
	$(MAKE) all

debug: CXXFLAGS += -g
debug: $(NAME)
