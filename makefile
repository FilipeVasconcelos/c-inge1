EXE=$$1
CC=gcc
CFLAGS=-Wall --std=c99
$(EXE): $(EXE).c
	$(CC) $(CFLAGS) -o $@ $+
