RUSTC=rustc
LLVMFLAGS = -DDEBUG -S -emit-llvm
TARGET = program_julia
SRC_DIR = src
OBJ_DIR = obj
LL_DIR = ll

SRC = $(wildcard $(SRC_DIR)/*.rs)
OBJ = $(patsubst $(SRC_DIR)/%.rs, $(OBJ_DIR)/%.o, $(SRC))
LL = $(patsubst $(SRC_DIR)/%.rs, $(LL_DIR)/%.ll, $(SRC))

all: $(TARGET)

$(TARGET): $(OBJ)
	$(RUSTC) $(OBJ) -o $(TARGET) 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.rs | $(OBJ_DIR)
	$(RUSTC) ${CFLAGS} -c $< -o $@

$(LL_DIR)/%.ll: $(SRC_DIR)/%.rs | $(LL_DIR)
	$(RUSTC) ${LLVMFLAGS} $< -o $@

$(OBJ_DIR) $(LL_DIR):
	mkdir -p $@

llvm: $(LL)
	$(RUSTC) ./ll/*.ll -o llvm_${TARGET}

clean:
	rm -f $(OBJ) $(LL) $(TARGET) llvm_${TARGET}
	rm -rf $(OBJ_DIR) $(LL_DIR)

