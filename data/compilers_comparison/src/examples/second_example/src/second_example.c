#include "second_example.h"

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
      array_t* array220;
      array220 = (array_t*)malloc(sizeof(array_t));
      array220->size = 713;
      array220->refC = 1;
         array220->id = 220;
      array220->data = (unsigned int*)malloc(array220->size*sizeof(unsigned int));
      memset(array220->data, 0, array220->size*sizeof(unsigned int));
      DEBUG_NEW(array220->id);
      if(rng() & 1) {
         if(rng() & 1) {
            array_t* array221;
            array221 = (array_t*)malloc(sizeof(array_t));
            array221->size = 179;
            array221->refC = 1;
               array221->id = 221;
            array221->data = (unsigned int*)malloc(array221->size*sizeof(unsigned int));
            memset(array221->data, 0, array221->size*sizeof(unsigned int));
            DEBUG_NEW(array221->id);
            unsigned int loop64 = 0;
            unsigned int loopLimit64 = (rand()%loopsFactor)/2 + 1;
            for(; loop64 < loopLimit64; loop64++) {
               for (int i = 0; i < array221->size; i++) {
                  array221->data[i]--;
               }
               for (int i = 0; i < array0->size; i++) {
                  if (array0->data[i] == 75) { 
                     array0->data[i] += 75;
                  }
               }
            }
            array_t_param params1;
            params1.size = 3;
            params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
            params1.data[0] = array0;
            params1.data[1] = array220;
            params1.data[2] = array221;
            array_t* array222 = func6(&params1, rng(), loopsFactor);
            DEBUG_RETURN(array222->id);
            free(params1.data);
            array222->refC--;
            if(array222->refC == 0) {
               free(array222->data);
               free(array222);
               DEBUG_FREE(array222->id);
            }
            array221->refC--;
            if(array221->refC == 0) {
               free(array221->data);
               free(array221);
               DEBUG_FREE(array221->id);
            }
         }
         else {
            array_t_param params1;
            params1.size = 2;
            params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
            params1.data[0] = array0;
            params1.data[1] = array220;
            array_t* array246 = func2(&params1, rng(), loopsFactor);
            DEBUG_RETURN(array246->id);
            free(params1.data);
            array246->refC--;
            if(array246->refC == 0) {
               free(array246->data);
               free(array246);
               DEBUG_FREE(array246->id);
            }
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array0;
         params1.data[1] = array220;
         array_t* array256 = func1(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array256->id);
         free(params1.data);
         array256->refC--;
         if(array256->refC == 0) {
            free(array256->data);
            free(array256);
            DEBUG_FREE(array256->id);
         }
      }
      array220->refC--;
      if(array220->refC == 0) {
         free(array220->data);
         free(array220);
         DEBUG_FREE(array220->id);
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

