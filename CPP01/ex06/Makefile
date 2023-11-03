NAME = Harl_filter

F =	main \
	Harl

S = $(foreach f, $(F), $(f).cpp)

OBJ = $(S:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@c++ -o $(NAME) $(OBJ) $(CFLAGS)

.cpp.o:
	@c++ -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all