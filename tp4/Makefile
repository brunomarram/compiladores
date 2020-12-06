all:
	mkdir build
	flex lex.l
	yacc -d translate.y
	gcc -o translate y.tab.c
	clang y.tab.c -emit-llvm -S -c -o build/florestroll.ll
	llvm-as florestroll.ll -o build/florestroll.bc
	llc florestroll.bc -o build/florestroll.s
	clang florestroll.s -o build/florestroll.native
clean:
	rm -rf build

run:
	clear
	./build/florestroll.native < programas/${file}
instalarLex:
	sudo apt-get install flex
instalarYacc:
	sudo apt-get install bison
installLLVM:
	sudo apt-get install llvm
installClang:
	sudo apt-get install clang
