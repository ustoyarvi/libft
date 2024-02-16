list_of_functions = \
	strlen \
	isascii \
	isalpha \
	isdigit \
	strlcpy \
	tolower \
	toupper \
#

list_of_objects = $(addsuffix .o, $(addprefix objects/ft_, $(list_of_functions)))

libft.a : $(list_of_objects)
	ar -r libft.a $(list_of_objects) # "-r" means "replace or create".

objects/%.o : %.c objects
	cc -c $< -o $@ # "-c" means "compile without linking".

objects :
	mkdir objects

.DEFAULT_GOAL = libft.a

# 42's peculiarities.

NAME = libft.a

.PHONY : clean
clean :
	rm -rf objects

.PHONY : fclean
fclean : clean
	rm -f libft.a

.PHONY : all
all : libft.a

.PHONY : re
re :
	make fclean
	make
