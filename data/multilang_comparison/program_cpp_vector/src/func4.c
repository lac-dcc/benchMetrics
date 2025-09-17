#include "program_cpp_vector.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array142;
   if (pCounter > 0) {
      array142 = vars->data[--pCounter];
      array142->refC++;
      DEBUG_COPY(array142->id);
   } else {
      array142 = (array_t*)malloc(sizeof(array_t));
      array142->size = 681;
      array142->refC = 1;
      array142->id = 142;
      array142->data = (unsigned int*)malloc(array142->size*sizeof(unsigned int));
      memset(array142->data, 0, array142->size*sizeof(unsigned int));
      DEBUG_NEW(array142->id);
   }
   unsigned int loop42 = 0;
   unsigned int loopLimit42 = (rand()%loopsFactor)/3 + 1;
   for(; loop42 < loopLimit42; loop42++) {
      if(PATH0 & 1) {
         array_t* array143;
         if (pCounter > 0) {
            array143 = vars->data[--pCounter];
            array143->refC++;
            DEBUG_COPY(array143->id);
         } else {
            array143 = (array_t*)malloc(sizeof(array_t));
            array143->size = 647;
            array143->refC = 1;
            array143->id = 143;
            array143->data = (unsigned int*)malloc(array143->size*sizeof(unsigned int));
            memset(array143->data, 0, array143->size*sizeof(unsigned int));
            DEBUG_NEW(array143->id);
         }
         unsigned int loop43 = 0;
         unsigned int loopLimit43 = (rand()%loopsFactor)/4 + 1;
         for(; loop43 < loopLimit43; loop43++) {
            for (int i = 0; i < array142->size; i++) {
               array142->data[i]--;
            }
            for (int i = 0; i < array143->size; i++) {
               if (array143->data[i] == 51) { 
                  return array143;
               }
            }
         }
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array142;
         params0.data[1] = array143;
         array_t* array144 = func24(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array144->id);
         free(params0.data);
         array144->refC--;
         if(array144->refC == 0) {
            free(array144->data);
            free(array144);
            DEBUG_FREE(array144->id);
         }
         array143->refC--;
         if(array143->refC == 0) {
            free(array143->data);
            free(array143);
            DEBUG_FREE(array143->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array142;
         array_t* array145 = func16(&params0, get_path(), loopsFactor);
         DEBUG_RETURN(array145->id);
         free(params0.data);
         array145->refC--;
         if(array145->refC == 0) {
            free(array145->data);
            free(array145);
            DEBUG_FREE(array145->id);
         }
      }
      array_t* array146;
      if (pCounter > 0) {
         array146 = vars->data[--pCounter];
         array146->refC++;
         DEBUG_COPY(array146->id);
      } else {
         array146 = (array_t*)malloc(sizeof(array_t));
         array146->size = 215;
         array146->refC = 1;
         array146->id = 146;
         array146->data = (unsigned int*)malloc(array146->size*sizeof(unsigned int));
         memset(array146->data, 0, array146->size*sizeof(unsigned int));
         DEBUG_NEW(array146->id);
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array142;
      params0.data[1] = array146;
      array_t* array147 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array147->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array148;
         if (pCounter > 0) {
            array148 = vars->data[--pCounter];
            array148->refC++;
            DEBUG_COPY(array148->id);
         } else {
            array148 = (array_t*)malloc(sizeof(array_t));
            array148->size = 629;
            array148->refC = 1;
            array148->id = 148;
            array148->data = (unsigned int*)malloc(array148->size*sizeof(unsigned int));
            memset(array148->data, 0, array148->size*sizeof(unsigned int));
            DEBUG_NEW(array148->id);
         }
         unsigned int loop44 = 0;
         unsigned int loopLimit44 = (rand()%loopsFactor)/4 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            for (int i = 0; i < array146->size; i++) {
               array146->data[i]--;
            }
            for (int i = 0; i < array142->size; i++) {
               if (array142->data[i] == 85) { 
                  return array142;
               }
            }
         }
         array_t_param params1;
         params1.size = 4;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array142;
         params1.data[1] = array146;
         params1.data[2] = array147;
         params1.data[3] = array148;
         array_t* array149 = func28(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array149->id);
         free(params1.data);
         array149->refC--;
         if(array149->refC == 0) {
            free(array149->data);
            free(array149);
            DEBUG_FREE(array149->id);
         }
         array148->refC--;
         if(array148->refC == 0) {
            free(array148->data);
            free(array148);
            DEBUG_FREE(array148->id);
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array142;
         params1.data[1] = array146;
         params1.data[2] = array147;
         array_t* array150 = func22(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array150->id);
         free(params1.data);
         array150->refC--;
         if(array150->refC == 0) {
            free(array150->data);
            free(array150);
            DEBUG_FREE(array150->id);
         }
      }
      for (int i = 0; i < array146->size; i++) {
         if (array146->data[i] == 38) { 
            return array146;
         }
      }
      array147->refC--;
      if(array147->refC == 0) {
         free(array147->data);
         free(array147);
         DEBUG_FREE(array147->id);
      }
      array146->refC--;
      if(array146->refC == 0) {
         free(array146->data);
         free(array146);
         DEBUG_FREE(array146->id);
      }
   }
   for (int i = 0; i < array142->size; i++) {
      array142->data[i]--;
   }
   for (int i = 0; i < array142->size; i++) {
      if (array142->data[i] == 89) { 
         return array142;
      }
   }
   return array142;
}

