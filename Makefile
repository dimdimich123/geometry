CC=g++ -Wall -Werror
PP=src/
SE=bin/

reps:
	mkdir -p build
	mkdir -p bin

all: start

start: $(SE)figures.o $(SE)geo.o $(SE)intersect.o $(SE)Str.o
	$(CC) $(SE)figures.o $(SE)geo.o $(SE)intersect.o $(SE)Str.o -o start
$(SE)figures.o: $(PP)figures.c
	$(CC) -c -o $(SE)figures.o $(PP)figures.c
$(SE)geo.o: $(PP)geo.c
	$(CC) -c -o $(SE)geo.o $(PP)geo.c
$(SE)intersect.o: $(PP)intersect.c
	$(CC) -c -o $(SE)intersect.o $(PP)intersect.c
$(SE)Str.o: $(PP)Str.c
	$(CC) -c -o $(SE)Str.o $(PP)Str.c
clean:
	rm -rf start $(SE)*.o
	rm -R build
	rm -R bin

.PHONY: all clean reps
