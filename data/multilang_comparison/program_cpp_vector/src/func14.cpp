#include "program_cpp_vector.hpp" 
Array* func14(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array147;
   if (pCounter > 0) {
      array147 = vars->data.at(--pCounter);
      array147->refC++;
      DEBUG_COPY(array147->id);
   } else {
      array147 = new Array();
      array147->size = 504;
      array147->refC = 1;
      array147->id = 147;
      array147->data = std::vector<unsigned int>(array147->size, 0);
      DEBUG_NEW(array147->id);
   }
   unsigned int loop43 = 0;
   unsigned int loopLimit43 = (50)/3 + 1;
   for(; loop43 < loopLimit43; loop43++) {
      if(PATH0 & 1) {
         Array* array148;
         if (pCounter > 0) {
            array148 = vars->data.at(--pCounter);
            array148->refC++;
            DEBUG_COPY(array148->id);
         } else {
            array148 = new Array();
            array148->size = 629;
            array148->refC = 1;
            array148->id = 148;
            array148->data = std::vector<unsigned int>(array148->size, 0);
            DEBUG_NEW(array148->id);
         }
         unsigned int loop44 = 0;
         unsigned int loopLimit44 = (50)/4 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            for (int i = 0; i < array148->size; i++) {
                array148->data.at(i)--;
            }
            for (int i = 0; i < array147->size; i++) {
                if (array147->data.at(i) == 85) {
                    return array147;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         std::vector<Array*> data_params0(2);
         params0.data = data_params0;
         params0.data.at(0) = array147;
         params0.data.at(1) = array148;
         Array* array149 = func28(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array149->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array149->refC--;
         if(array149->refC == 0) {
            array149->data.clear();
            delete array149;
            DEBUG_FREE(array149->id);
         }
         array148->refC--;
         if(array148->refC == 0) {
            array148->data.clear();
            delete array148;
            DEBUG_FREE(array148->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array147;
         Array* array150 = func22(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array150->id);
         if(params0.size > 0) {
         	 params0.data.clear();
         }
         array150->refC--;
         if(array150->refC == 0) {
            array150->data.clear();
            delete array150;
            DEBUG_FREE(array150->id);
         }
      }
      Array* array151;
      if (pCounter > 0) {
         array151 = vars->data.at(--pCounter);
         array151->refC++;
         DEBUG_COPY(array151->id);
      } else {
         array151 = new Array();
         array151->size = 900;
         array151->refC = 1;
         array151->id = 151;
         array151->data = std::vector<unsigned int>(array151->size, 0);
         DEBUG_NEW(array151->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array147;
      params0.data.at(1) = array151;
      Array* array152 = func23(&params0, loopsFactor);
      DEBUG_RETURN(array152->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array153;
         if (pCounter > 0) {
            array153 = vars->data.at(--pCounter);
            array153->refC++;
            DEBUG_COPY(array153->id);
         } else {
            array153 = new Array();
            array153->size = 949;
            array153->refC = 1;
            array153->id = 153;
            array153->data = std::vector<unsigned int>(array153->size, 0);
            DEBUG_NEW(array153->id);
         }
         unsigned int loop45 = 0;
         unsigned int loopLimit45 = (50)/4 + 1;
         for(; loop45 < loopLimit45; loop45++) {
            for (int i = 0; i < array151->size; i++) {
                array151->data.at(i)--;
            }
            for (int i = 0; i < array153->size; i++) {
                if (array153->data.at(i) == 88) {
                    return array153;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         std::vector<Array*> data_params1(4);
         params1.data = data_params1;
         params1.data.at(0) = array147;
         params1.data.at(1) = array151;
         params1.data.at(2) = array152;
         params1.data.at(3) = array153;
         Array* array154 = func36(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array154->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array154->refC--;
         if(array154->refC == 0) {
            array154->data.clear();
            delete array154;
            DEBUG_FREE(array154->id);
         }
         array153->refC--;
         if(array153->refC == 0) {
            array153->data.clear();
            delete array153;
            DEBUG_FREE(array153->id);
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array147;
         params1.data.at(1) = array151;
         params1.data.at(2) = array152;
         Array* array155 = func32(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array155->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array155->refC--;
         if(array155->refC == 0) {
            array155->data.clear();
            delete array155;
            DEBUG_FREE(array155->id);
         }
      }
      for (int i = 0; i < array147->size; i++) {
          if (array147->data.at(i) == 90) {
              return array147;
          }
      }
      array152->refC--;
      if(array152->refC == 0) {
         array152->data.clear();
         delete array152;
         DEBUG_FREE(array152->id);
      }
      array151->refC--;
      if(array151->refC == 0) {
         array151->data.clear();
         delete array151;
         DEBUG_FREE(array151->id);
      }
   }
   for (int i = 0; i < array147->size; i++) {
       array147->data.at(i)--;
   }
   for (int i = 0; i < array147->size; i++) {
       if (array147->data.at(i) == 41) {
           return array147;
       }
   }
   return array147;
}

