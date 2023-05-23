CC=gcc
NAME=calc
SRC=$(NAME).h $(NAME).c user_input.c
EXE=$(NAME)

all: $(SRC)
	$(CC) -o $(EXE) $(SRC)
	./$(EXE)

debug: $(SRC)
	$(CC) -g -o $(EXE) $(SRC)
	gdb ./$(EXE)

clean:
	rm $(EXE)