##
## Makefile for  in /home/frasse_l/Projets/203hotline
## 
## Made by loic frasse-mathon
## Login   <frasse_l@epitech.net>
## 
## Started on  Mon Mar 14 11:47:21 2016 loic frasse-mathon
## Last update Mon Mar 14 12:34:38 2016 loic frasse-mathon
##

CPP		= g++

CPPFLAGS	= -W -Wall -Werror -Wextra -I./include -g

SRC		= src/main.cpp \
		src/hotline.cpp

OBJ		= $(SRC:.cpp=.o)

NAME		= 203hotline

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CPP) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
