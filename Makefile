CFLAGS=-Wall -lm

all: main

main: main.c main_utils.c
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm main
