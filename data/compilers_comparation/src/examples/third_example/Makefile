CC = clang
DALLOCFLAGS = -Wl,--wrap=malloc -Wl,--wrap=free -I ../../Dalloc/src
LLVMFLAGS = -DDEBUG -S -emit-llvm -I../../Dalloc/src
TARGET = third_example
SRC_DIR = src
OBJ_DIR = obj
LL_DIR = ll

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))
LL = $(patsubst $(SRC_DIR)/%.c, $(LL_DIR)/%.ll, $(SRC))

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) ${DALLOCFLAGS} $(OBJ) ../../Dalloc/src/Dalloc.c -o $(TARGET) 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) ${CFLAGS} -I ../../Dalloc/src -c $< -o $@

$(LL_DIR)/%.ll: $(SRC_DIR)/%.c | $(LL_DIR)
	$(CC) ${LLVMFLAGS} $< -o $@

$(OBJ_DIR) $(LL_DIR):
	mkdir -p $@

llvm: $(LL)
	$(CC) ./ll/*.ll -o llvm_${TARGET}

clean:
	rm -f $(OBJ) $(LL) $(TARGET) llvm_${TARGET}
	rm -rf $(OBJ_DIR) $(LL_DIR)

