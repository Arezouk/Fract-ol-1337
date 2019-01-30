# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arezouk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/24 06:31:07 by arezouk           #+#    #+#              #
#    Updated: 2019/01/26 10:17:35 by arezouk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRC = Sources/*.c Functions/*.c
INC = Includes/
OBJ = Includes/*.o

FLAGS = -Wall -Werror -Wextra
MLX = -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME):
		@gcc $(FLAGS) -o $(NAME) $(MLX)  $(SRC) -I $(INC)

clean:
			@rm -f $(OBJ)

fclean:
			@rm -f $(NAME)

re: fclean all
