#ifndef program_vector_cpp
#define program_vector_cpp
#include <stdio.h>
#include <cstdlib>
#include <string>
#include "path.hpp"
#include <algorithm>
#include <vector>


#ifdef DEBUG
    #define DEBUG_NEW(id) std::cout << "[NEW]		Id" << id << " created" << std::endl
    #define DEBUG_COPY(id) std::cout << "[COPY]		Id " << id << " copied" << std::endl
    #define DEBUG_RETURN(id) std::cout << "[RETURN]	Id " << id << " returned" << std::endl
    #define DEBUG_FREE(id) std::cout << "[FREE]		Id " << id << " freed" << std::endl
#else
    #define DEBUG_NEW(id)
    #define DEBUG_COPY(id)
    #define DEBUG_RETURN(id)
    #define DEBUG_FREE(id)
#endif


class Array {
public:
   unsigned int* data;
   size_t size;
   size_t refC;
   int id;
   Array() : data(nullptr), size(0), refC(0), id(0) {}
   ~Array() {}
};
class Array_param {
public:
   Array** data;
   size_t size;
   Array_param() : size(0) {}
};

Array* func0(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func10(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func11(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func28(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func29(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func46(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func47(Array_param* vars, int loopsFactor);
Array* func48(Array_param* vars, int loopsFactor);
Array* func49(Array_param* vars, int loopsFactor);
Array* func40(Array_param* vars, int loopsFactor);
Array* func41(Array_param* vars, int loopsFactor);
Array* func50(Array_param* vars, int loopsFactor);
Array* func30(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func42(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func43(Array_param* vars, int loopsFactor);
Array* func44(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func45(Array_param* vars, int loopsFactor);
Array* func51(Array_param* vars, int loopsFactor);
Array* func34(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func31(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func35(Array_param* vars, int loopsFactor);
Array* func22(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func23(Array_param* vars, int loopsFactor);
Array* func36(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func37(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func38(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func39(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func32(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func12(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func24(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func25(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func26(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func27(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func33(Array_param* vars, int loopsFactor);
Array* func16(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func13(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func17(Array_param* vars, int loopsFactor);
Array* func4(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func5(Array_param* vars, int loopsFactor);
Array* func18(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func19(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func20(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func21(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func14(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func6(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func7(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func8(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func9(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func15(Array_param* vars, int loopsFactor);
Array* func2(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func1(Array_param* vars, const unsigned long PATH0, int loopsFactor);
Array* func3(Array_param* vars, int loopsFactor);
#endif