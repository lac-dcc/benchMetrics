#include "program.h"

int main(int argc, char** argv) {
   int loopsFactor = 100;
   srand(0);
   for (int i = 1; i < argc; i++) {
      if (strcmp(argv[i], "-path-seed") == 0) {
         i++;
         if (i < argc) {
            srand(atoi(argv[i]));
         }
      }
      else if (strcmp(argv[i], "-loops-factor") == 0) {
         i++;
         if (i < argc) {
            loopsFactor = atoi(argv[i]);
         }
      }
   }
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      array_t_param params0;
      params0.size = 0;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      array_t* array0 = func0(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array0->id);
      free(params0.data);
      array_t* array156;
      array156 = (array_t*)malloc(sizeof(array_t));
      array156->size = 42;
      array156->refC = 1;
         array156->id = 156;
      array156->data = (unsigned int*)malloc(array156->size*sizeof(unsigned int));
      memset(array156->data, 0, array156->size*sizeof(unsigned int));
      DEBUG_NEW(array156->id);
      if(rng() & 1) {
         if(rng() & 1) {
            array_t* array157;
            array157 = (array_t*)malloc(sizeof(array_t));
            array157->size = 360;
            array157->refC = 1;
               array157->id = 157;
            array157->data = (unsigned int*)malloc(array157->size*sizeof(unsigned int));
            memset(array157->data, 0, array157->size*sizeof(unsigned int));
            DEBUG_NEW(array157->id);
            unsigned int loop46 = 0;
            unsigned int loopLimit46 = (rand()%loopsFactor)/2 + 1;
            for(; loop46 < loopLimit46; loop46++) {
               for (int i = 0; i < array0->size; i++) {
                  array0->data[i]--;
               }
               for (int i = 0; i < array0->size; i++) {
                  if (array0->data[i] == 61) { 
                     array0->data[i] += 61;
                  }
               }
            }
            array_t_param params1;
            params1.size = 3;
            params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
            params1.data[0] = array0;
            params1.data[1] = array156;
            params1.data[2] = array157;
            array_t* array158 = func6(&params1, rng(), loopsFactor);
            DEBUG_RETURN(array158->id);
            free(params1.data);
            array158->refC--;
            if(array158->refC == 0) {
               free(array158->data);
               free(array158);
               DEBUG_FREE(array158->id);
            }
            array157->refC--;
            if(array157->refC == 0) {
               free(array157->data);
               free(array157);
               DEBUG_FREE(array157->id);
            }
         }
         else {
            array_t_param params1;
            params1.size = 2;
            params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
            params1.data[0] = array0;
            params1.data[1] = array156;
            array_t* array182 = func2(&params1, rng(), loopsFactor);
            DEBUG_RETURN(array182->id);
            free(params1.data);
            array182->refC--;
            if(array182->refC == 0) {
               free(array182->data);
               free(array182);
               DEBUG_FREE(array182->id);
            }
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array0;
         params1.data[1] = array156;
         array_t* array192 = func1(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array192->id);
         free(params1.data);
         array192->refC--;
         if(array192->refC == 0) {
            free(array192->data);
            free(array192);
            DEBUG_FREE(array192->id);
         }
      }
      array156->refC--;
      if(array156->refC == 0) {
         free(array156->data);
         free(array156);
         DEBUG_FREE(array156->id);
      }
      array0->refC--;
      if(array0->refC == 0) {
         free(array0->data);
         free(array0);
         DEBUG_FREE(array0->id);
      }
   }
   return 0;
}

