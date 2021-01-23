##
## EPITECH PROJECT, 2020
## makefileds
## File description:
## dcd
##

LIB     =   /lib/

all :
		make -C lib/ all

clean   :
			rm -f $(OBJ)
			make -C lib/ clean

fclean  :   clean
			make -C lib/ fclean


re  :   fclean all
		make -C lib/ re
