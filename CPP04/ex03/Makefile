NAME = Materia

F = main \
	AMateria \
	MateriaSource \
	Character \
	Ice \
	Cure 
S = $(foreach f, $(F), $(f).cpp)
OBJ = $(S:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g

all: $(NAME)

$(NAME): $(OBJ)
	@c++ $(OBJ) $(CFLAGS) -o $(NAME)

.cpp.o:
	c++ -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all