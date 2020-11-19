all:
	flex lex.l
	yacc -d translate.y
	gcc -o translate y.tab.c
	clear
	./translate < programas/programa2.txt
run:
	clear
	./translate < programas/programa2.txt
instalarLex:
	sudo apt-get install flex
instalarYacc:
	sudo apt-get install bison