NAME = Form

F = main \
	Bureaucrat \
	AForm \
	ShrubberyCreationForm \
	RobotomyRequestForm \
	PresidentialPardonForm

S = $(foreach f, $(F), $(f).cpp)
OBJ = $(S:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@c++ $(OBJ) $(CFLAGS) -o $(NAME) -g -fsanitize=address

.cpp.o:
	@c++ -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all