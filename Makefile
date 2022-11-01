#______________________________________//_______________________________________
INCD_DIR=	-I ./include \
			-I ./include/conta \
			-I ./include/item \
			-I ./include/lista
INCD	=	include.hpp \
			Lista.hpp No.hpp \
			Item.hpp Livro.hpp Roupa.hpp Eletronico.hpp \
			Conta.hpp Cliente.hpp Loja.hpp ECommerce.hpp

SRC_DIR	=	./src \
			./src/conta \
			./src/item \
			./src/lista
SRC		=	main.cpp \
			Item.cpp Livro.cpp Roupa.cpp Eletronico.cpp \
			Conta.cpp Cliente.cpp Loja.cpp ECommerce.cpp

OBJ_DIR	=	./builds
OBJ		=	$(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC))

#______________________________________//_______________________________________
vpath %.hpp $(INCD_DIR)
vpath %.cpp $(SRC_DIR)

NAME	=	e-commerce

CFLAGS	=	-Wall -Wextra -Werror -g3 -fsanitize=address

RM		=	rm -rf

CC		=	c++
#______________________________________//_______________________________________
all:			$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INCD_DIR) -o $(NAME)
	@echo "\033[1;32m"
	@echo "/ ************************************ \\"
	@echo "|          e-commerce Criado           |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"

$(OBJ_DIR)/%.o:	%.cpp $(INCD)
	mkdir -p $(OBJ_DIR)
	$(CC) -c -o $@ $(CFLAGS) $(INCD_DIR) $<
#______________________________________//_______________________________________
clean:
	$(RM) $(OBJ_DIR)
	@echo "\033[1;31m"
	@echo "/ ************************************ \\"
	@echo "|        Arquivos .o Deletados         |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"

fclean:		clean
	$(RM) $(NAME)
	@echo "\033[1;31m"
	@echo "/ ************************************ \\"
	@echo "|         e-commerce Deletado          |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"
#______________________________________//_______________________________________

re:			fclean all

git:
	@git add .
	@git status
	@git commit -m "$m"

.PHONY:		all clean fclean re git