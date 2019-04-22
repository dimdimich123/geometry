CC=g++ -Wall -Werror
PP=src/
SE=build/
SS=bin/

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

clean:
	rm -rf $(SS)start $(SE)*.o
	rm -R build
	rm -R bin

.PHONY: all clean install
