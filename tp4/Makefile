all:
	flex lex.l
	yacc -d translate.y
	gcc -o translate y.tab.c
	#clear
	./translate < programas/${file}
run:
	clear
	./translate < programas/${file}
llvm:
	clang y.tab.c -emit-llvm -S -c -o florestroll.ll
	llvm-as florestroll.ll -o florestroll.bc
	llc florestroll.bc -o florestroll.s
	clang florestroll.s -o florestroll.native
llvmRun:
	./florestroll.native < programas/${file}
instalarLex:
	sudo apt-get install flex
instalarYacc:
	sudo apt-get install bison
installLLVM:
	sudo apt-get install llvm -y
	sudo apt-get install clang -y
