CC=gcc
EXE=fonction2
OBJ=main.o fonction.o fonction2.o
$(EXE) : $(OBJ) 
	$(CC) $^ -o $(EXE)

%.o : %.c 
	$(CC) -o $@ -c $<	

clean: 
	rm *.o $(EXE)
