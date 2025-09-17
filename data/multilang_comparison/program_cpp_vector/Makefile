CXX = clang++
LLVMFLAGS = -DDEBUG -S -emit-llvm
TARGET = program_cpp_vector
SRC_DIR = src
OBJ_DIR = obj
LL_DIR = ll

SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))
LL = $(patsubst $(SRC_DIR)/%.cpp, $(LL_DIR)/%.ll, $(SRC))

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) ${CXXFLAGS} -c $< -o $@

$(LL_DIR)/%.ll: $(SRC_DIR)/%.cpp | $(LL_DIR)
	$(CXX) ${LLVMFLAGS} $< -o $@

$(OBJ_DIR) $(LL_DIR):
	mkdir -p $@

llvm: $(LL)
	$(CXX) ./ll/*.ll -o llvm_${TARGET}

clean:
	rm -f $(OBJ) $(LL) $(TARGET) llvm_${TARGET}
	rm -rf $(OBJ_DIR) $(LL_DIR)

