DC = dmd
DFLAGS = -g -w -I$(SRC_DIR)
TARGET = program_d
SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.d)

all: $(TARGET)

$(TARGET): $(SRC)
	$(DC) $(DFLAGS) -of=$(TARGET) $(SRC)

debug: $(SRC)
	$(DC) $(DFLAGS) -debug -of=$(TARGET) $(SRC)

llvm: $(SRC)
	ldc2 -I$(SRC_DIR) -output-ll -of=$(TARGET) $(SRC)

clean:
	rm -f $(TARGET) *.o *.ll
