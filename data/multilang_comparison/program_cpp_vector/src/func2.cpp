#include "program_cpp_vector.hpp" 
Array* func2(Array_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array* array215;
   if (pCounter > 0) {
      array215 = vars->data.at(--pCounter);
      array215->refC++;
      DEBUG_COPY(array215->id);
   } else {
      array215 = new Array();
      array215->size = 993;
      array215->refC = 1;
      array215->id = 215;
      array215->data = std::vector<unsigned int>(array215->size, 0);
      DEBUG_NEW(array215->id);
   }
   unsigned int loop62 = 0;
   unsigned int loopLimit62 = (50)/2 + 1;
   for(; loop62 < loopLimit62; loop62++) {
      if(PATH0 & 1) {
         Array* array216;
         if (pCounter > 0) {
            array216 = vars->data.at(--pCounter);
            array216->refC++;
            DEBUG_COPY(array216->id);
         } else {
            array216 = new Array();
            array216->size = 918;
            array216->refC = 1;
            array216->id = 216;
            array216->data = std::vector<unsigned int>(array216->size, 0);
            DEBUG_NEW(array216->id);
         }
         unsigned int loop63 = 0;
         unsigned int loopLimit63 = (50)/3 + 1;
         for(; loop63 < loopLimit63; loop63++) {
            for (int i = 0; i < array216->size; i++) {
                array216->data.at(i)--;
            }
            for (int i = 0; i < array215->size; i++) {
                if (array215->data.at(i) == 22) {
                    return array215;
                }
            }
         }
         Array_param params0;
         params0.size = 2;
         std::vector<Array*> data_params0(2);
         params0.data = data_params0;
         params0.data.at(0) = array215;
         params0.data.at(1) = array216;
         Array* array217 = func18(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array217->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array217->refC--;
         if(array217->refC == 0) {
            array217->data.clear();
            delete array217;
            DEBUG_FREE(array217->id);
         }
         array216->refC--;
         if(array216->refC == 0) {
            array216->data.clear();
            delete array216;
            DEBUG_FREE(array216->id);
         }
      }
      else {
         Array_param params0;
         params0.size = 1;
         std::vector<Array*> data_params0(1);
         params0.data = data_params0;
         params0.data.at(0) = array215;
         Array* array218 = func14(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array218->id);
         if(params0.data.size() > 0) {
         	params0.data.clear();
         }
         array218->refC--;
         if(array218->refC == 0) {
            array218->data.clear();
            delete array218;
            DEBUG_FREE(array218->id);
         }
      }
      Array* array219;
      if (pCounter > 0) {
         array219 = vars->data.at(--pCounter);
         array219->refC++;
         DEBUG_COPY(array219->id);
      } else {
         array219 = new Array();
         array219->size = 574;
         array219->refC = 1;
         array219->id = 219;
         array219->data = std::vector<unsigned int>(array219->size, 0);
         DEBUG_NEW(array219->id);
      }
      Array_param params0;
      params0.size = 2;
      std::vector<Array*> data_params0(2);
      params0.data = data_params0;
      params0.data.at(0) = array215;
      params0.data.at(1) = array219;
      Array* array220 = func15(&params0, loopsFactor);
      DEBUG_RETURN(array220->id);
      if(params0.data.size() > 0) {
      	params0.data.clear();
      }
      if(PATH0 & 2) {
         Array* array221;
         if (pCounter > 0) {
            array221 = vars->data.at(--pCounter);
            array221->refC++;
            DEBUG_COPY(array221->id);
         } else {
            array221 = new Array();
            array221->size = 486;
            array221->refC = 1;
            array221->id = 221;
            array221->data = std::vector<unsigned int>(array221->size, 0);
            DEBUG_NEW(array221->id);
         }
         unsigned int loop64 = 0;
         unsigned int loopLimit64 = (50)/3 + 1;
         for(; loop64 < loopLimit64; loop64++) {
            for (int i = 0; i < array219->size; i++) {
                array219->data.at(i)--;
            }
            for (int i = 0; i < array221->size; i++) {
                if (array221->data.at(i) == 74) {
                    return array221;
                }
            }
         }
         Array_param params1;
         params1.size = 4;
         std::vector<Array*> data_params1(4);
         params1.data = data_params1;
         params1.data.at(0) = array215;
         params1.data.at(1) = array219;
         params1.data.at(2) = array220;
         params1.data.at(3) = array221;
         Array* array222 = func24(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array222->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array222->refC--;
         if(array222->refC == 0) {
            array222->data.clear();
            delete array222;
            DEBUG_FREE(array222->id);
         }
         array221->refC--;
         if(array221->refC == 0) {
            array221->data.clear();
            delete array221;
            DEBUG_FREE(array221->id);
         }
      }
      else {
         Array_param params1;
         params1.size = 3;
         std::vector<Array*> data_params1(3);
         params1.data = data_params1;
         params1.data.at(0) = array215;
         params1.data.at(1) = array219;
         params1.data.at(2) = array220;
         Array* array223 = func16(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array223->id);
         if(params1.data.size() > 0) {
         	params1.data.clear();
         }
         array223->refC--;
         if(array223->refC == 0) {
            array223->data.clear();
            delete array223;
            DEBUG_FREE(array223->id);
         }
      }
      for (int i = 0; i < array215->size; i++) {
          if (array215->data.at(i) == 75) {
              return array215;
          }
      }
      array220->refC--;
      if(array220->refC == 0) {
         array220->data.clear();
         delete array220;
         DEBUG_FREE(array220->id);
      }
      array219->refC--;
      if(array219->refC == 0) {
         array219->data.clear();
         delete array219;
         DEBUG_FREE(array219->id);
      }
   }
   for (int i = 0; i < array215->size; i++) {
       array215->data.at(i)--;
   }
   for (int i = 0; i < array215->size; i++) {
       if (array215->data.at(i) == 10) {
           return array215;
       }
   }
   return array215;
}

