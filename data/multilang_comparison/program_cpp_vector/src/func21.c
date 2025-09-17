#include "program_cpp_vector.h" 
array_t* func21(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array173;
   if (pCounter > 0) {
      array173 = vars->data[--pCounter];
      array173->refC++;
      DEBUG_COPY(array173->id);
   } else {
      array173 = (array_t*)malloc(sizeof(array_t));
      array173->size = 189;
      array173->refC = 1;
      array173->id = 173;
      array173->data = (unsigned int*)malloc(array173->size*sizeof(unsigned int));
      memset(array173->data, 0, array173->size*sizeof(unsigned int));
      DEBUG_NEW(array173->id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array173;
   array_t* array174 = func23(&params0, loopsFactor);
   DEBUG_RETURN(array174->id);
   free(params0.data);
   if(PATH0 & 1) {
      array_t* array175;
      if (pCounter > 0) {
         array175 = vars->data[--pCounter];
         array175->refC++;
         DEBUG_COPY(array175->id);
      } else {
         array175 = (array_t*)malloc(sizeof(array_t));
         array175->size = 641;
         array175->refC = 1;
         array175->id = 175;
         array175->data = (unsigned int*)malloc(array175->size*sizeof(unsigned int));
         memset(array175->data, 0, array175->size*sizeof(unsigned int));
         DEBUG_NEW(array175->id);
      }
      unsigned int loop51 = 0;
      unsigned int loopLimit51 = (rand()%loopsFactor)/3 + 1;
      for(; loop51 < loopLimit51; loop51++) {
         for (int i = 0; i < array175->size; i++) {
            array175->data[i]--;
         }
         for (int i = 0; i < array173->size; i++) {
            if (array173->data[i] == 87) { 
               return array173;
            }
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array173;
      params1.data[1] = array174;
      params1.data[2] = array175;
      array_t* array176 = func36(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array176->id);
      free(params1.data);
      array176->refC--;
      if(array176->refC == 0) {
         free(array176->data);
         free(array176);
         DEBUG_FREE(array176->id);
      }
      array175->refC--;
      if(array175->refC == 0) {
         free(array175->data);
         free(array175);
         DEBUG_FREE(array175->id);
      }
   }
   else {
      array_t_param params1;
      params1.size = 2;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array173;
      params1.data[1] = array174;
      array_t* array177 = func32(&params1, get_path(), loopsFactor);
      DEBUG_RETURN(array177->id);
      free(params1.data);
      array177->refC--;
      if(array177->refC == 0) {
         free(array177->data);
         free(array177);
         DEBUG_FREE(array177->id);
      }
   }
   array174->refC--;
   if(array174->refC == 0) {
      free(array174->data);
      free(array174);
      DEBUG_FREE(array174->id);
   }
   return array173;
}

