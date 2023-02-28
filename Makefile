NAME=matrix
SOURCE=main.c

build:
	cc $(SOURCE) -o $(NAME) -O4 -s

install:
	rm -f "/usr/local/bin/$(NAME)"
	ln -s "`pwd`/$(NAME)" "/usr/local/bin/$(NAME)"
