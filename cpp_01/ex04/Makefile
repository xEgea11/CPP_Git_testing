NAME = replace

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = src/
SRC_FILES = main.cpp

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ_DIR = obj/
OBJ_FILES = $(SRC_FILES:.cpp=.o)
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

HEADERS_DIR = headers/
HEADERS_FILES = main.hpp

HEADERS = $(addprefix $(HEADERS_DIR), $(HEADERS_FILES))

HEADERS_DIR = headers/
INCLUDE = -I $(HEADERS_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run:
	@chmod +x run_tests.sh
	@./run_tests.sh

.PHONY: all clean fclean re run



 
