NAME	= TheBook
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRCS	= main.cpp Contact.cpp PhoneBook.cpp

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all