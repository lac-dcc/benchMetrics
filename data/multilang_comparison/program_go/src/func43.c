#include "program_go.h" 
array_t* func43(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop11 = 0;
   unsigned int loopLimit11 = (rand()%loopsFactor)/4 + 1;
   for(; loop11 < loopLimit11; loop11++) {
   }
   array_t* array30;
   if (pCounter > 0) {
      array30 = vars->data[--pCounter];
      array30->refC++;
      DEBUG_COPY(array30->id);
   } else {
      array30 = (array_t*)malloc(sizeof(array_t));
      array30->size = 286;
      array30->refC = 1;
      array30->id = 30;
      array30->data = (unsigned int*)malloc(array30->size*sizeof(unsigned int));
      memset(array30->data, 0, array30->size*sizeof(unsigned int));
      DEBUG_NEW(array30->id);
   }
   return array30;
}

