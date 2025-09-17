#include "program_go.h" 
array_t* func27(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array115;
   if (pCounter > 0) {
      array115 = vars->data[--pCounter];
      array115->refC++;
      DEBUG_COPY(array115->id);
   } else {
      array115 = (array_t*)malloc(sizeof(array_t));
      array115->size = 255;
      array115->refC = 1;
      array115->id = 115;
      array115->data = (unsigned int*)malloc(array115->size*sizeof(unsigned int));
      memset(array115->data, 0, array115->size*sizeof(unsigned int));
      DEBUG_NEW(array115->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array115;
   array_t* array116 = func33(&params0, loopsFactor);
   DEBUG_RETURN(array116->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array119;
      if (pCounter > 0) {
         array119 = vars->data[--pCounter];
         array119->refC++;
         DEBUG_COPY(array119->id);
      } else {
         array119 = (array_t*)malloc(sizeof(array_t));
         array119->size = 754;
         array119->refC = 1;
         array119->id = 119;
         array119->data = (unsigned int*)malloc(array119->size*sizeof(unsigned int));
         memset(array119->data, 0, array119->size*sizeof(unsigned int));
         DEBUG_NEW(array119->id);
      }
      unsigned int loop36 = 0;
      unsigned int loopLimit36 = (rand()%loopsFactor)/3 + 1;
      for(; loop36 < loopLimit36; loop36++) {
         for (int i = 0; i < array115->size; i++) {
            array115->data[i]--;
         }
         for (int i = 0; i < array115->size; i++) {
            if (array115->data[i] == 44) { 
               return array115;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array115;
      params1.data[1] = array116;
      params1.data[2] = array119;
      array_t* array120 = func42(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array120->id);
      free(params1.data);
      array120->refC--;
      if(array120->refC == 0) {
         free(array120->data);
         free(array120);
         DEBUG_FREE(array120->id);
      }
      array119->refC--;
      if(array119->refC == 0) {
         free(array119->data);
         free(array119);
         DEBUG_FREE(array119->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array115;
      params1.data[1] = array116;
      array_t* array121 = func34(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array121->id);
      free(params1.data);
      array121->refC--;
      if(array121->refC == 0) {
         free(array121->data);
         free(array121);
         DEBUG_FREE(array121->id);
      }
   }
   array115->refC--;
   if(array115->refC == 0) {
      free(array115->data);
      free(array115);
      DEBUG_FREE(array115->id);
   }
   return array116;
}

