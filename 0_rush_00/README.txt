# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.txt                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/06 21:48:12 by juolivei          #+#    #+#              #
#    Updated: 2019/10/06 21:51:34 by juolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Para testar, estando no diretório 0_rush_00:

	norminette -R CheckForbiddenSourceHeader
	cc -Wall -Wextra -Werror main.c rush00.c ft_putchar.c && ./a.out

(Modificando o rush00.c por outros, para outros testes. Ex.: rush01.c)
