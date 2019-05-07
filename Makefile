CC=g++ -Wall -Werror
PP=src/
SE=build/
SS=bin/
TT=test/

$(SS)all: folder1 folder2 $(SS)start

$(SS)start: $(SE)figures.o $(SE)geo.o $(SE)intersect.o $(SE)Str.o
	$(CC) $(SE)figures.o $(SE)geo.o $(SE)intersect.o $(SE)Str.o -o $(SS)start
$(SE)figures.o: $(PP)figures.c
	$(CC) -c -o $(SE)figures.o $(PP)figures.c
$(SE)geo.o: $(PP)geo.c
	$(CC) -c -o $(SE)geo.o $(PP)geo.c
$(SE)intersect.o: $(PP)intersect.c
	$(CC) -c -o $(SE)intersect.o $(PP)intersect.c
$(SE)Str.o: $(PP)Str.c
	$(CC) -c -o $(SE)Str.o $(PP)Str.c
folder1:
	mkdir -p build
folder2:
	mkdir -p bin

neall: folder1 folder2 $(SS)test

$(SS)test: $(SE)first_test.o $(SE)test.o
	gcc -Wall -std=c99 $(SE)first_test.o $(SE)test.o -o $(SS)test -Ithirdparty -lm
$(SE)first_test.o: $(TT)first_test.c
	gcc -Wall -std=c99 -c $(TT)first_test.c -o $(SE)first_test.o -Ithirdparty -lm
$(SE)test.o: $(TT)test.c
	gcc -Wall -std=c99 -c $(TT)test.c -o $(SE)test.o -Ithirdparty -lm

clean:
	rm -rf $(SS)start $(SE)*.o
	rm -R build
	rm -R bin

.PHONY: all clean neall
