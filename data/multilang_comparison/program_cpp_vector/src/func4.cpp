#include "program_cpp_vector.hpp" 
Array* func4(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array142;
   if (pCounter > 0) {
      array142 = vars->data.at(--pCounter);
      array142->refC++;
      DEBUG_COPY(array142->id);
   } else {
      array142 = new Array();
      array142->size = 681;
      array142->refC = 1;
      array142->id = 142;
      array142->data = std::vector<unsigned int>(array142->size, 0);
      DEBUG_NEW(array142->id);
   }
   unsigned int loop42 = 0;
   unsigned int loopLimit42 = (50)/3 + 1;
   for(; loop42 < loopLimit42; loop42++) {
      if(PATH0 & 1) {
         Array* array143;
         if (pCounter > 0) {
            array143 = vars->data.at(--pCounter);
            array143->refC++;
            DEBUG_COPY(array143->id);
         } else {
            array143 = new Array();
            array143->size = 647;
            array143->refC = 1;
            array143->id = 143;
            array143->data = std::vector<unsigned int>(array143->size, 0);
            DEBUG_NEW(array143->id);
         }
         unsigned int loop43 = 0;
         unsigned int loopLimit43 = (50)/4 + 1;
         for(; loop43 < loopLimit43; loop43++) {
            for (int i = 0; i < array142->size; i++) {
                array142->data.at(i)--;
            }
            for (int i = 0; i < array143->size; i++) {
                if (array143->data.at(i) == 51) {
                    return array143;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         std::vector<Array*> data_params0(2);
         params0.data = data_params0;
         params0.data.at(0) = array142;
         params0.data.at(1) = array143;
         Array* array144 = func24(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array144->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array144->refC--;
         if(array144->refC == 0) {
            array144->data.clear();
            delete array144;
            DEBUG_FREE(array144->id);
         }
         array143->refC--;
         if(array143->refC == 0) {
            array143->data.clear();
            delete array143;
            DEBUG_FREE(array143->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array142;
         Array* array145 = func16(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array145->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array145->refC--;
         if(array145->refC == 0) {
            array145->data.clear();
            delete array145;
            DEBUG_FREE(array145->id);
         }
      }
      Array* array146;
      if (pCounter > 0) {
         array146 = vars->data.at(--pCounter);
         array146->refC++;
         DEBUG_COPY(array146->id);
      } else {
         array146 = new Array();
         array146->size = 215;
         array146->refC = 1;
         array146->id = 146;
         array146->data = std::vector<unsigned int>(array146->size, 0);
         DEBUG_NEW(array146->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array142;
      params0.data.at(1) = array146;
      Array* array147 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array147->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      if(PATH0 & 2) {
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
            for (int i = 0; i < array146->size; i++) {
                array146->data.at(i)--;
            }
            for (int i = 0; i < array142->size; i++) {
                if (array142->data.at(i) == 85) {
                    return array142;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         std::vector<Array*> data_params1(4);
         params1.data = data_params1;
         params1.data.at(0) = array142;
         params1.data.at(1) = array146;
         params1.data.at(2) = array147;
         params1.data.at(3) = array148;
         Array* array149 = func28(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array149->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
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
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array142;
         params1.data.at(1) = array146;
         params1.data.at(2) = array147;
         Array* array150 = func22(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array150->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array150->refC--;
         if(array150->refC == 0) {
            array150->data.clear();
            delete array150;
            DEBUG_FREE(array150->id);
         }
      }
      for (int i = 0; i < array146->size; i++) {
          if (array146->data.at(i) == 38) {
              return array146;
          }
      }
      array147->refC--;
      if(array147->refC == 0) {
         array147->data.clear();
         delete array147;
         DEBUG_FREE(array147->id);
      }
      array146->refC--;
      if(array146->refC == 0) {
         array146->data.clear();
         delete array146;
         DEBUG_FREE(array146->id);
      }
   }
   for (int i = 0; i < array142->size; i++) {
       array142->data.at(i)--;
   }
   for (int i = 0; i < array142->size; i++) {
       if (array142->data.at(i) == 89) {
           return array142;
       }
   }
   return array142;
}

