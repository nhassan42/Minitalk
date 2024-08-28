# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
LINK_LIBFT = -I ./libft -L ./libft -lft
LIBFT_DIR = ./libft
SERVER = server
CLIENT = client

# Rules
all: 
	@make -s -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) $(LINK_LIBFT) server.c -o $(SERVER)
	@$(CC) $(CFLAGS) $(LINK_LIBFT) client.c -o $(CLIENT)
	@echo "Server & Client are ready!"

clean:
	@make clean -s -C $(LIBFT_DIR)
	@rm -f $(SERVER) $(CLIENT)

fclean: clean
	@rm -f $(SERVER) $(CLIENT)
	@make fclean -s -C $(LIBFT_DIR)
	@echo "Server and Client have been cleaned!"

re: fclean all

