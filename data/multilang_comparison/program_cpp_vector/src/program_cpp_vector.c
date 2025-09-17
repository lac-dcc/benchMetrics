#include "program_cpp_vector.h"

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
      array_t* array0 = func0(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array0->id);
      free(params0.data);
      array_t* array188;
      array188 = (array_t*)malloc(sizeof(array_t));
      array188->size = 493;
      array188->refC = 1;
         array188->id = 188;
      array188->data = (unsigned int*)malloc(array188->size*sizeof(unsigned int));
      memset(array188->data, 0, array188->size*sizeof(unsigned int));
      DEBUG_NEW(array188->id);
      if(get_path() & 1) {
         if(get_path() & 1) {
            array_t* array189;
            array189 = (array_t*)malloc(sizeof(array_t));
            array189->size = 358;
            array189->refC = 1;
               array189->id = 189;
            array189->data = (unsigned int*)malloc(array189->size*sizeof(unsigned int));
            memset(array189->data, 0, array189->size*sizeof(unsigned int));
            DEBUG_NEW(array189->id);
            unsigned int loop55 = 0;
            unsigned int loopLimit55 = (rand()%loopsFactor)/2 + 1;
            for(; loop55 < loopLimit55; loop55++) {
               for (int i = 0; i < array188->size; i++) {
                  array188->data[i]--;
               }
               for (int i = 0; i < array188->size; i++) {
                  if (array188->data[i] == 17) { 
                     array188->data[i] += 17;
                  }
               }
            }
            array_t_param params1;
            params1.size = 3;
            params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
            params1.data[0] = array0;
            params1.data[1] = array188;
            params1.data[2] = array189;
            array_t* array190 = func6(&params1, get_path(), loopsFactor);
            DEBUG_RETURN(array190->id);
            free(params1.data);
            array190->refC--;
            if(array190->refC == 0) {
               free(array190->data);
               free(array190);
               DEBUG_FREE(array190->id);
            }
            array189->refC--;
            if(array189->refC == 0) {
               free(array189->data);
               free(array189);
               DEBUG_FREE(array189->id);
            }
         }
         else {
            array_t_param params1;
            params1.size = 2;
            params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
            params1.data[0] = array0;
            params1.data[1] = array188;
            array_t* array214 = func2(&params1, get_path(), loopsFactor);
            DEBUG_RETURN(array214->id);
            free(params1.data);
            array214->refC--;
            if(array214->refC == 0) {
               free(array214->data);
               free(array214);
               DEBUG_FREE(array214->id);
            }
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array0;
         params1.data[1] = array188;
         array_t* array224 = func1(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array224->id);
         free(params1.data);
         array224->refC--;
         if(array224->refC == 0) {
            free(array224->data);
            free(array224);
            DEBUG_FREE(array224->id);
         }
      }
      array188->refC--;
      if(array188->refC == 0) {
         free(array188->data);
         free(array188);
         DEBUG_FREE(array188->id);
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

