# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.txt                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 22:48:33 by juolivei          #+#    #+#              #
#    Updated: 2019/10/14 22:58:04 by juolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Para testar, estando no diretório ex00:

	cc -Wall -Werror -Wextra *.c && ./a.out "2 1 2 3 2 3 2 1 2 3 1 3 3 2 3 1" && rm a.out

(Os números em sequencia dizem respeito aos números de visibilidade das laterais do jogo)
O programa gera, sequencialmente:
	- uma matriz vazia
	- preenche com os valores de visibilidade
	- preenche os números certos, de acordo com as visibilidades
	- completa a matriz com valores através da técnica de BackTracking, confirmando de acordo com a visibilidade
