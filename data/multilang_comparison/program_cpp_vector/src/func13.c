#include "program_cpp_vector.h" 
array_t* func13(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array134;
   if (pCounter > 0) {
      array134 = vars->data[--pCounter];
      array134->refC++;
      DEBUG_COPY(array134->id);
   } else {
      array134 = (array_t*)malloc(sizeof(array_t));
      array134->size = 996;
      array134->refC = 1;
      array134->id = 134;
      array134->data = (unsigned int*)malloc(array134->size*sizeof(unsigned int));
      memset(array134->data, 0, array134->size*sizeof(unsigned int));
      DEBUG_NEW(array134->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array134;
   array_t* array135 = func17(&params0, loopsFactor);
   DEBUG_RETURN(array135->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array138;
      if (pCounter > 0) {
         array138 = vars->data[--pCounter];
         array138->refC++;
         DEBUG_COPY(array138->id);
      } else {
         array138 = (array_t*)malloc(sizeof(array_t));
         array138->size = 27;
         array138->refC = 1;
         array138->id = 138;
         array138->data = (unsigned int*)malloc(array138->size*sizeof(unsigned int));
         memset(array138->data, 0, array138->size*sizeof(unsigned int));
         DEBUG_NEW(array138->id);
      }
      unsigned int loop41 = 0;
      unsigned int loopLimit41 = (rand()%loopsFactor)/3 + 1;
      for(; loop41 < loopLimit41; loop41++) {
         for (int i = 0; i < array138->size; i++) {
            array138->data[i]--;
         }
         for (int i = 0; i < array138->size; i++) {
            if (array138->data[i] == 56) { 
               return array138;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array134;
      params1.data[1] = array135;
      params1.data[2] = array138;
      array_t* array139 = func28(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array139->id);
      free(params1.data);
      array139->refC--;
      if(array139->refC == 0) {
         free(array139->data);
         free(array139);
         DEBUG_FREE(array139->id);
      }
      array138->refC--;
      if(array138->refC == 0) {
         free(array138->data);
         free(array138);
         DEBUG_FREE(array138->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array134;
      params1.data[1] = array135;
      array_t* array140 = func22(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array140->id);
      free(params1.data);
      array140->refC--;
      if(array140->refC == 0) {
         free(array140->data);
         free(array140);
         DEBUG_FREE(array140->id);
      }
   }
   array134->refC--;
   if(array134->refC == 0) {
      free(array134->data);
      free(array134);
      DEBUG_FREE(array134->id);
   }
   return array135;
}

