NAME = humans

F = main\
	Weapon\
	HumanA\
	HumanB

S = $(foreach f, $(F), $(f).cpp)
OBJ = $(S:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -std=c++98

GREEN	= \x1b[32m
RED		= \x1b[31m
WHITE	= \x1b[0m

all: $(NAME)
r: re
	./$(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) $(CFLAGS) -o $(NAME)
	@printf "$(WHITE)"

.cpp.o:
	@printf "$(GREEN)"
	c++ -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJ)
	@printf "$(RED)all .o deletete$(WHITE)\n"

fclean: clean
	@rm -rf $(NAME)
	@printf "$(RED)$(NAME) deletete$(WHITE)\n"

re: fclean all