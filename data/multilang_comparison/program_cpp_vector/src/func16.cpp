#include "program_cpp_vector.hpp" 
Array* func16(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array123;
   if (pCounter > 0) {
      array123 = vars->data.at(--pCounter);
      array123->refC++;
      DEBUG_COPY(array123->id);
   } else {
      array123 = new Array();
      array123->size = 908;
      array123->refC = 1;
      array123->id = 123;
      array123->data = std::vector<unsigned int>(array123->size, 0);
      DEBUG_NEW(array123->id);
   }
   unsigned int loop37 = 0;
   unsigned int loopLimit37 = (50)/3 + 1;
   for(; loop37 < loopLimit37; loop37++) {
      if(PATH0 & 1) {
         Array* array124;
         if (pCounter > 0) {
            array124 = vars->data.at(--pCounter);
            array124->refC++;
            DEBUG_COPY(array124->id);
         } else {
            array124 = new Array();
            array124->size = 958;
            array124->refC = 1;
            array124->id = 124;
            array124->data = std::vector<unsigned int>(array124->size, 0);
            DEBUG_NEW(array124->id);
         }
         unsigned int loop38 = 0;
         unsigned int loopLimit38 = (50)/4 + 1;
         for(; loop38 < loopLimit38; loop38++) {
            for (int i = 0; i < array123->size; i++) {
                array123->data.at(i)--;
            }
            for (int i = 0; i < array123->size; i++) {
                if (array123->data.at(i) == 8) {
                    return array123;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         std::vector<Array*> data_params0(2);
         params0.data = data_params0;
         params0.data.at(0) = array123;
         params0.data.at(1) = array124;
         Array* array125 = func36(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array125->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array125->refC--;
         if(array125->refC == 0) {
            array125->data.clear();
            delete array125;
            DEBUG_FREE(array125->id);
         }
         array124->refC--;
         if(array124->refC == 0) {
            array124->data.clear();
            delete array124;
            DEBUG_FREE(array124->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array123;
         Array* array126 = func32(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array126->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array126->refC--;
         if(array126->refC == 0) {
            array126->data.clear();
            delete array126;
            DEBUG_FREE(array126->id);
         }
      }
      Array* array127;
      if (pCounter > 0) {
         array127 = vars->data.at(--pCounter);
         array127->refC++;
         DEBUG_COPY(array127->id);
      } else {
         array127 = new Array();
         array127->size = 133;
         array127->refC = 1;
         array127->id = 127;
         array127->data = std::vector<unsigned int>(array127->size, 0);
         DEBUG_NEW(array127->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array123;
      params0.data.at(1) = array127;
      Array* array128 = func33(&params0, loopsFactor);
      DEBUG_RETURN(array128->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array129;
         if (pCounter > 0) {
            array129 = vars->data.at(--pCounter);
            array129->refC++;
            DEBUG_COPY(array129->id);
         } else {
            array129 = new Array();
            array129->size = 754;
            array129->refC = 1;
            array129->id = 129;
            array129->data = std::vector<unsigned int>(array129->size, 0);
            DEBUG_NEW(array129->id);
         }
         unsigned int loop39 = 0;
         unsigned int loopLimit39 = (50)/4 + 1;
         for(; loop39 < loopLimit39; loop39++) {
            for (int i = 0; i < array129->size; i++) {
                array129->data.at(i)--;
            }
            for (int i = 0; i < array128->size; i++) {
                if (array128->data.at(i) == 68) {
                    return array128;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         std::vector<Array*> data_params1(4);
         params1.data = data_params1;
         params1.data.at(0) = array123;
         params1.data.at(1) = array127;
         params1.data.at(2) = array128;
         params1.data.at(3) = array129;
         Array* array130 = func42(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array130->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array130->refC--;
         if(array130->refC == 0) {
            array130->data.clear();
            delete array130;
            DEBUG_FREE(array130->id);
         }
         array129->refC--;
         if(array129->refC == 0) {
            array129->data.clear();
            delete array129;
            DEBUG_FREE(array129->id);
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array123;
         params1.data.at(1) = array127;
         params1.data.at(2) = array128;
         Array* array131 = func34(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array131->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array131->refC--;
         if(array131->refC == 0) {
            array131->data.clear();
            delete array131;
            DEBUG_FREE(array131->id);
         }
      }
      for (int i = 0; i < array128->size; i++) {
          if (array128->data.at(i) == 49) {
              return array128;
          }
      }
      array128->refC--;
      if(array128->refC == 0) {
         array128->data.clear();
         delete array128;
         DEBUG_FREE(array128->id);
      }
      array127->refC--;
      if(array127->refC == 0) {
         array127->data.clear();
         delete array127;
         DEBUG_FREE(array127->id);
      }
   }
   for (int i = 0; i < array123->size; i++) {
       array123->data.at(i)--;
   }
   for (int i = 0; i < array123->size; i++) {
       if (array123->data.at(i) == 33) {
           return array123;
       }
   }
   return array123;
}

