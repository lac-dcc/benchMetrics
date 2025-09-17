#include "program_cpp_vector.hpp" 
Array* func11(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop3 = 0;
   unsigned int loopLimit3 = (50)/3 + 1;
   for(; loop3 < loopLimit3; loop3++) {
      if(PATH0 & 1) {
         Array* array5;
         if (pCounter > 0) {
            array5 = vars->data.at(--pCounter);
            array5->refC++;
            DEBUG_COPY(array5->id);
         } else {
            array5 = new Array();
            array5->size = 736;
            array5->refC = 1;
            array5->id = 5;
            array5->data = std::vector<unsigned int>(array5->size, 0);
            DEBUG_NEW(array5->id);
         }
         unsigned int loop4 = 0;
         unsigned int loopLimit4 = (50)/4 + 1;
         for(; loop4 < loopLimit4; loop4++) {
            for (int i = 0; i < array5->size; i++) {
                array5->data.at(i)--;
            }
            for (int i = 0; i < array5->size; i++) {
                if (array5->data.at(i) == 67) {
                    return array5;
                }
            }
         }
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array5;
         Array* array6 = func28(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array6->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array6->refC--;
         if(array6->refC == 0) {
            array6->data.clear();
            delete array6;
            DEBUG_FREE(array6->id);
         }
         array5->refC--;
         if(array5->refC == 0) {
            array5->data.clear();
            delete array5;
            DEBUG_FREE(array5->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 0;
         std::vector<Array*> data_params0(0);
         params0.data = data_params0;
         Array* array54 = func22(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array54->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array54->refC--;
         if(array54->refC == 0) {
            array54->data.clear();
            delete array54;
            DEBUG_FREE(array54->id);
         }
      }
      Array* array64;
      if (pCounter > 0) {
         array64 = vars->data.at(--pCounter);
         array64->refC++;
         DEBUG_COPY(array64->id);
      } else {
         array64 = new Array();
         array64->size = 772;
         array64->refC = 1;
         array64->id = 64;
         array64->data = std::vector<unsigned int>(array64->size, 0);
         DEBUG_NEW(array64->id);
      }
      Array_param params0;
      params0.size = 1;
      std::vector<Array*> data_params0(1);
      params0.data = data_params0;
      params0.data.at(0) = array64;
      Array* array65 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array65->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array68;
         if (pCounter > 0) {
            array68 = vars->data.at(--pCounter);
            array68->refC++;
            DEBUG_COPY(array68->id);
         } else {
            array68 = new Array();
            array68->size = 197;
            array68->refC = 1;
            array68->id = 68;
            array68->data = std::vector<unsigned int>(array68->size, 0);
            DEBUG_NEW(array68->id);
         }
         unsigned int loop22 = 0;
         unsigned int loopLimit22 = (50)/4 + 1;
         for(; loop22 < loopLimit22; loop22++) {
            for (int i = 0; i < array64->size; i++) {
                array64->data.at(i)--;
            }
            for (int i = 0; i < array64->size; i++) {
                if (array64->data.at(i) == 4) {
                    return array64;
                }
            }
         }
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array64;
         params1.data.at(1) = array65;
         params1.data.at(2) = array68;
         Array* array69 = func36(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array69->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array69->refC--;
         if(array69->refC == 0) {
            array69->data.clear();
            delete array69;
            DEBUG_FREE(array69->id);
         }
         array68->refC--;
         if(array68->refC == 0) {
            array68->data.clear();
            delete array68;
            DEBUG_FREE(array68->id);
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         std::vector<Array*> data_params1(2);
         params1.data = data_params1;
         params1.data.at(0) = array64;
         params1.data.at(1) = array65;
         Array* array86 = func32(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array86->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array86->refC--;
         if(array86->refC == 0) {
            array86->data.clear();
            delete array86;
            DEBUG_FREE(array86->id);
         }
      }
      for (int i = 0; i < array64->size; i++) {
          if (array64->data.at(i) == 10) {
              return array64;
          }
      }
      array65->refC--;
      if(array65->refC == 0) {
         array65->data.clear();
         delete array65;
         DEBUG_FREE(array65->id);
      }
      array64->refC--;
      if(array64->refC == 0) {
         array64->data.clear();
         delete array64;
         DEBUG_FREE(array64->id);
      }
   }
   Array* array95;
   if (pCounter > 0) {
      array95 = vars->data.at(--pCounter);
      array95->refC++;
      DEBUG_COPY(array95->id);
   } else {
      array95 = new Array();
      array95->size = 342;
      array95->refC = 1;
      array95->id = 95;
      array95->data = std::vector<unsigned int>(array95->size, 0);
      DEBUG_NEW(array95->id);
   }
   return array95;
}

