run:
	clear
	./translate < programas/${file}
clean:
	rm -rf build
all:
	flex lex.l
	yacc -d translate.y
	gcc -o translate y.tab.c
	/usr/lib/llvm/11/bin/clang y.tab.c -emit-llvm -S -c -o build/florestroll.ll
	/usr/lib/llvm/11/bin/llvm-as florestroll.ll -o build/florestroll.bc
	/usr/lib/llvm/11/bin/llc florestroll.bc -o build/florestroll.s
	/usr/lib/llvm/11/bin/clang florestroll.s -o build/florestroll.native
run:
	./build/florestroll.native < programas/${file}
instalarLex:
	sudo apt-get install flex
instalarYacc:
	sudo apt-get install bison
installLLVM:
	sudo apt-get install llvm
installClang:
	sudo apt-get install clang
