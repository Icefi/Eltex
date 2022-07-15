SRC = src/
BIN = bin/

.PHONY: clean re

all: $(BIN)matrix $(BIN)reverse $(BIN)triangle $(BIN)nautilus

re: clean all

$(BIN)matrix: $(SRC)matrix.c
	gcc $^ -o $@

$(BIN)reverse: $(SRC)reverse.c
	gcc $^ -o $@

$(BIN)triangle: $(SRC)triangle.c
	gcc $^ -o $@

$(BIN)nautilus: $(SRC)nautilus.c
	gcc $^ -o $@

clean:
	rm -f $(BIN)*
