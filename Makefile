.PHONY: all clean install uninstall

CC=g++ -Wall -Werror
PP=~/geometry/src/
SE=~/geometry/bin/

all: $(SE)start

$(SE)start: $(SE)polygon.o $(SE)triangle.o $(SE)circle.o $(SE)Str.o $(SE)geo.o
	$(CC) -o $(SE)start $(SE)polygon.o $(SE)triangle.o $(SE)circle.o $(SE)Str.o $(SE)geo.o
$(SE)polygon.o: $(PP)polygon.c
	$(CC) -c -o $(SE)polygon.o $(PP)polygon.c
$(SE)triangle.o: $(PP)triangle.c
	$(CC) -c -o $(SE)triangle.o $(PP)triangle.c
$(SE)circle.o: $(PP)circle.c
	$(CC) -c -o $(SE)circle.o $(PP)circle.c
$(SE)Str.o: $(PP)Str.c
	$(CC) -c -o $(SE)Str.o $(PP)Str.c
$(SE)geo.o: $(PP)geo.c
	$(CC) -c -o $(SE)geo.o $(PP)geo.c
clean:
	rm -rf $(SE)start $(SE)*.o
