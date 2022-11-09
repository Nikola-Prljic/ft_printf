NAME = nikistester
TESTER = maintester.a
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all: $(NAME)

$(NAME):
		@make -C ..
		@cp ../libftprintf.a .
		@mv libftprintf.a $(TESTER)
		@cc -w -Wall -Werror -Wextra main.c $(TESTER)
		@echo "$(GREEN)###### Tester created! ######$(DEF_COLOR)"
		@./a.out
		@echo "$(RED)####### make val for valgrind #######$(DEF_COLOR)"

val:
	@valgrind ./a.out
	@echo "$(GREEN)###### VALGRID created! ######$(DEF_COLOR)"

clean:	
		@rm -f a.out $(TESTER)
		@make fclean -C ..
		@echo "$(YELLOW)###### All cleaned! ######$(DEF_COLOR)"

re: clean $(NAME)
	@echo "$(BLUE)## Cleaned and rebuilt everything! ##$(DEF_COLOR)"

.PHONY: clean re all val