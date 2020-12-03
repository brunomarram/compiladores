all:
	flex lex.l
	yacc -d translate.y
	gcc -o translate y.tab.c
	# clear
	# ./translate < programas/${file}
run:
	clear
	./translate < programas/${file}
clean:
	rm florestroll.native y.tab.c y.tab.h lex.yy.c
llvm:
	flex lex.l
	yacc -d translate.y
	gcc -o translate y.tab.c
	/usr/lib/llvm/11/bin/clang y.tab.c -emit-llvm -S -c -o florestroll.ll
	/usr/lib/llvm/11/bin/llvm-as florestroll.ll -o florestroll.bc
	/usr/lib/llvm/11/bin/llc florestroll.bc -o florestroll.s
	/usr/lib/llvm/11/bin/clang florestroll.s -o florestroll.native
llvmRun:
	./florestroll.native < programas/${file}
instalarLex:
	sudo apt-get install flex
instalarYacc:
	sudo apt-get install bison
installLLVM:
	sudo apt-get install llvm
installClang:
	sudo apt-get install clang
