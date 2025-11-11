#include "program_cpp_vector.hpp" 
Array* func0(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array1;
   if (pCounter > 0) {
      array1 = vars->data.at(--pCounter);
      array1->refC++;
      DEBUG_COPY(array1->id);
   } else {
      array1 = new Array();
      array1->size = 386;
      array1->refC = 1;
      array1->id = 1;
      array1->data = std::vector<unsigned int>(array1->size, 0);
      DEBUG_NEW(array1->id);
   }
   unsigned int loop1 = 0;
   unsigned int loopLimit1 = (50)/2 + 1;
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
         Array* array2;
         if (pCounter > 0) {
            array2 = vars->data.at(--pCounter);
            array2->refC++;
            DEBUG_COPY(array2->id);
         } else {
            array2 = new Array();
            array2->size = 492;
            array2->refC = 1;
            array2->id = 2;
            array2->data = std::vector<unsigned int>(array2->size, 0);
            DEBUG_NEW(array2->id);
         }
         unsigned int loop2 = 0;
         unsigned int loopLimit2 = (50)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            for (int i = 0; i < array2->size; i++) {
                array2->data.at(i)--;
            }
            for (int i = 0; i < array2->size; i++) {
                if (array2->data.at(i) == 62) {
                    return array2;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         std::vector<Array*> data_params0(2);
         params0.data = data_params0;
         params0.data.at(0) = array1;
         params0.data.at(1) = array2;
         Array* array3 = func10(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array3->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array3->refC--;
         if(array3->refC == 0) {
            array3->data.clear();
            delete array3;
            DEBUG_FREE(array3->id);
         }
         array2->refC--;
         if(array2->refC == 0) {
            array2->data.clear();
            delete array2;
            DEBUG_FREE(array2->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array1;
         Array* array109 = func4(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array109->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array109->refC--;
         if(array109->refC == 0) {
            array109->data.clear();
            delete array109;
            DEBUG_FREE(array109->id);
         }
      }
      Array* array119;
      if (pCounter > 0) {
         array119 = vars->data.at(--pCounter);
         array119->refC++;
         DEBUG_COPY(array119->id);
      } else {
         array119 = new Array();
         array119->size = 326;
         array119->refC = 1;
         array119->id = 119;
         array119->data = std::vector<unsigned int>(array119->size, 0);
         DEBUG_NEW(array119->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array1;
      params0.data.at(1) = array119;
      Array* array120 = func5(&params0, loopsFactor);
      DEBUG_RETURN(array120->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array123;
         if (pCounter > 0) {
            array123 = vars->data.at(--pCounter);
            array123->refC++;
            DEBUG_COPY(array123->id);
         } else {
            array123 = new Array();
            array123->size = 872;
            array123->refC = 1;
            array123->id = 123;
            array123->data = std::vector<unsigned int>(array123->size, 0);
            DEBUG_NEW(array123->id);
         }
         unsigned int loop37 = 0;
         unsigned int loopLimit37 = (50)/3 + 1;
         for(; loop37 < loopLimit37; loop37++) {
            for (int i = 0; i < array1->size; i++) {
                array1->data.at(i)--;
            }
            for (int i = 0; i < array120->size; i++) {
                if (array120->data.at(i) == 98) {
                    return array120;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         std::vector<Array*> data_params1(4);
         params1.data = data_params1;
         params1.data.at(0) = array1;
         params1.data.at(1) = array119;
         params1.data.at(2) = array120;
         params1.data.at(3) = array123;
         Array* array124 = func18(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array124->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array124->refC--;
         if(array124->refC == 0) {
            array124->data.clear();
            delete array124;
            DEBUG_FREE(array124->id);
         }
         array123->refC--;
         if(array123->refC == 0) {
            array123->data.clear();
            delete array123;
            DEBUG_FREE(array123->id);
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array1;
         params1.data.at(1) = array119;
         params1.data.at(2) = array120;
         Array* array146 = func14(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array146->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array146->refC--;
         if(array146->refC == 0) {
            array146->data.clear();
            delete array146;
            DEBUG_FREE(array146->id);
         }
      }
      for (int i = 0; i < array120->size; i++) {
          if (array120->data.at(i) == 32) {
              return array120;
          }
      }
      array120->refC--;
      if(array120->refC == 0) {
         array120->data.clear();
         delete array120;
         DEBUG_FREE(array120->id);
      }
      array119->refC--;
      if(array119->refC == 0) {
         array119->data.clear();
         delete array119;
         DEBUG_FREE(array119->id);
      }
   }
   return array1;
}

