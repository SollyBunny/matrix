NAME=matrix
SOURCE=main.c
CFLAGS=-O4 -s
PREFIX=/usr/local

build:
	cc $(SOURCE) -o $(NAME) $(CFLAGS)

install:
	cp "$(NAME)" "$(PREFIX)/bin/$(NAME)"

uninstall:
	rm -f "$(PREFIX)/bin/$(NAME)"
