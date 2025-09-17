#include "program_cpp_vector.h" 
array_t* func12(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      array_t* array97;
      if (pCounter > 0) {
         array97 = vars->data[--pCounter];
         array97->refC++;
         DEBUG_COPY(array97->id);
      } else {
         array97 = (array_t*)malloc(sizeof(array_t));
         array97->size = 321;
         array97->refC = 1;
         array97->id = 97;
         array97->data = (unsigned int*)malloc(array97->size*sizeof(unsigned int));
         memset(array97->data, 0, array97->size*sizeof(unsigned int));
         DEBUG_NEW(array97->id);
      }
      unsigned int loop30 = 0;
      unsigned int loopLimit30 = (rand()%loopsFactor)/3 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         for (int i = 0; i < array97->size; i++) {
            array97->data[i]--;
         }
         for (int i = 0; i < array97->size; i++) {
            if (array97->data[i] == 99) { 
               return array97;
            }
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array97;
      array_t* array98 = func24(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array98->id);
      free(params0.data);
      array98->refC--;
      if(array98->refC == 0) {
         free(array98->data);
         free(array98);
         DEBUG_FREE(array98->id);
      }
      array97->refC--;
      if(array97->refC == 0) {
         free(array97->data);
         free(array97);
         DEBUG_FREE(array97->id);
      }
   }
   else {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array122 = func16(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array122->id);
      free(params0.data);
      array122->refC--;
      if(array122->refC == 0) {
         free(array122->data);
         free(array122);
         DEBUG_FREE(array122->id);
      }
   }
   array_t* array132;
   if (pCounter > 0) {
      array132 = vars->data[--pCounter];
      array132->refC++;
      DEBUG_COPY(array132->id);
   } else {
      array132 = (array_t*)malloc(sizeof(array_t));
      array132->size = 497;
      array132->refC = 1;
      array132->id = 132;
      array132->data = (unsigned int*)malloc(array132->size*sizeof(unsigned int));
      memset(array132->data, 0, array132->size*sizeof(unsigned int));
      DEBUG_NEW(array132->id);
   }
   return array132;
}

