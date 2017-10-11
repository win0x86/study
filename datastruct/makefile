.PHONY: debug, clang, dis

debug:
	@gcc-7 -Wall -g -O0 -o test selection.c
	@./test

clang:
	@clang -Wall -g -O0 -o test selection.c
	@./test

dis:
	@gobjdump -S test -M intel | less


