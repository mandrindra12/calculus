CFLAGS=-Wall -lm

all: main

main: main.c function.c resolution.c calculus.c
	gcc -o $@ $^ $(CFLAGS)
clean:
	rm main
