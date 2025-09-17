#include "program_julia.h" 
array_t* func1(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array225;
   if (pCounter > 0) {
      array225 = vars->data[--pCounter];
      array225->refC++;
      DEBUG_COPY(array225->id);
   } else {
      array225 = (array_t*)malloc(sizeof(array_t));
      array225->size = 137;
      array225->refC = 1;
      array225->id = 225;
      array225->data = (unsigned int*)malloc(array225->size*sizeof(unsigned int));
      memset(array225->data, 0, array225->size*sizeof(unsigned int));
      DEBUG_NEW(array225->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array225;
   array_t* array226 = func3(&params0, loopsFactor);
   DEBUG_RETURN(array226->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array229;
      if (pCounter > 0) {
         array229 = vars->data[--pCounter];
         array229->refC++;
         DEBUG_COPY(array229->id);
      } else {
         array229 = (array_t*)malloc(sizeof(array_t));
         array229->size = 963;
         array229->refC = 1;
         array229->id = 229;
         array229->data = (unsigned int*)malloc(array229->size*sizeof(unsigned int));
         memset(array229->data, 0, array229->size*sizeof(unsigned int));
         DEBUG_NEW(array229->id);
      }
      unsigned int loop66 = 0;
      unsigned int loopLimit66 = (rand()%loopsFactor)/2 + 1;
      for(; loop66 < loopLimit66; loop66++) {
         for (int i = 0; i < array229->size; i++) {
            array229->data[i]--;
         }
         for (int i = 0; i < array226->size; i++) {
            if (array226->data[i] == 58) { 
               return array226;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array225;
      params1.data[1] = array226;
      params1.data[2] = array229;
      array_t* array230 = func10(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array230->id);
      free(params1.data);
      array230->refC--;
      if(array230->refC == 0) {
         free(array230->data);
         free(array230);
         DEBUG_FREE(array230->id);
      }
      array229->refC--;
      if(array229->refC == 0) {
         free(array229->data);
         free(array229);
         DEBUG_FREE(array229->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array225;
      params1.data[1] = array226;
      array_t* array231 = func4(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array231->id);
      free(params1.data);
      array231->refC--;
      if(array231->refC == 0) {
         free(array231->data);
         free(array231);
         DEBUG_FREE(array231->id);
      }
   }
   array225->refC--;
   if(array225->refC == 0) {
      free(array225->data);
      free(array225);
      DEBUG_FREE(array225->id);
   }
   return array226;
}

