NAME 	=	linear_reg

LIB		=	libft/libft.a

FLAG	=	-Wall -Wextra -Werror

#------------------------------------------------------------------------------#
#-----------------------------------C_FILE-------------------------------------#
#------------------------------------------------------------------------------#

C_PATH	=	src

C_FILE	=	get_data.c\
			linear_reg.c\
			free_data.c\
			init_data.c\
			scale_data.c\
			mat_fill_matrix.c\
			mat_print_data.c\

C_SRC	=	$(addprefix $(C_PATH)/, $(C_FILE))

#------------------------------------------------------------------------------#
#-----------------------------------O_FILE-------------------------------------#
#------------------------------------------------------------------------------#

O_PATH	=	obj_linear

O_FILE	=	$(C_FILE:.c=.o)

O_SRC	=	$(addprefix $(O_PATH)/, $(O_FILE))

#------------------------------------------------------------------------------#
#-----------------------------------INCLUDE------------------------------------#
#------------------------------------------------------------------------------#

I_PATH	=	include

I_FILE	=	linear_reg.h\

I_SRC	=	$(addprefix $(I_PATH)/, $(I_FILE))

#------------------------------------------------------------------------------#
#-----------------------------------REGLE--------------------------------------#
#------------------------------------------------------------------------------#

all: $(LIB) $(NAME)

$(LIB):
	@make -C libft

$(NAME): $(O_PATH) $(O_SRC)
	@gcc $(FLAG) -o $(NAME) $(O_SRC) $(LIB)

$(O_PATH):
	@mkdir -p $(O_PATH)

$(addprefix $(O_PATH)/, %.o): $(addprefix $(C_PATH)/, %.c) $(I_PATH)
	gcc $(FLAG) -Iinclude -o $@ -c $<

clean:
	@rm -Rf $(O_SRC)
	@make clean -C libft
	@rm -Rf $(O_PATH) 2>/dev/null || true

fclean: clean
	@make fclean -C libft
	@rm -Rf $(NAME)

re: fclean all

.PHONY: clean fclean re all $(LIB)
