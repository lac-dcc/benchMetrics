#include "third_example.h"

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
   array_t* array0;
   array0 = (array_t*)malloc(sizeof(array_t));
   array0->size = 777;
   array0->refC = 1;
      array0->id = 0;
   array0->data = (unsigned int*)malloc(array0->size*sizeof(unsigned int));
   memset(array0->data, 0, array0->size*sizeof(unsigned int));
   DEBUG_NEW(array0->id);
   for (int i = 0; i < array0->size; i++) {
      if (array0->data[i] == 93) { 
         array0->data[i] += 93;
      }
   }
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      for (int i = 0; i < array0->size; i++) {
         array0->data[i]++;
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array0;
      array_t* array1 = func0(&params0, rng(), loopsFactor);
      DEBUG_RETURN(array1->id);
      free(params0.data);
      unsigned int loop43 = 0;
      unsigned int loopLimit43 = (rand()%loopsFactor)/2 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
      }
      array_t* array108;
      array108 = (array_t*)malloc(sizeof(array_t));
      array108->size = 209;
      array108->refC = 1;
         array108->id = 108;
      array108->data = (unsigned int*)malloc(array108->size*sizeof(unsigned int));
      memset(array108->data, 0, array108->size*sizeof(unsigned int));
      DEBUG_NEW(array108->id);
      if(rng() & 1) {
         unsigned int loop44 = 0;
         unsigned int loopLimit44 = (rand()%loopsFactor)/2 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            array_t* array109;
            array109 = (array_t*)malloc(sizeof(array_t));
            array109->size = 581;
            array109->refC = 1;
               array109->id = 109;
            array109->data = (unsigned int*)malloc(array109->size*sizeof(unsigned int));
            memset(array109->data, 0, array109->size*sizeof(unsigned int));
            DEBUG_NEW(array109->id);
            for (int i = 0; i < array109->size; i++) {
               array109->data[i]--;
            }
            for (int i = 0; i < array0->size; i++) {
               if (array0->data[i] == 32) { 
                  array0->data[i] += 32;
               }
            }
            array109->refC--;
            if(array109->refC == 0) {
               free(array109->data);
               free(array109);
               DEBUG_FREE(array109->id);
            }
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array0;
         params1.data[1] = array1;
         params1.data[2] = array108;
         array_t* array110 = func9(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array110->id);
         free(params1.data);
         array110->refC--;
         if(array110->refC == 0) {
            free(array110->data);
            free(array110);
            DEBUG_FREE(array110->id);
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array0;
      params1.data[1] = array1;
      params1.data[2] = array108;
      array_t* array117 = func6(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array117->id);
      free(params1.data);
      unsigned int loop55 = 0;
      unsigned int loopLimit55 = (rand()%loopsFactor)/2 + 1;
      for(; loop55 < loopLimit55; loop55++) {
         for (int i = 0; i < array117->size; i++) {
            array117->data[i]++;
         }
      }
      array_t_param params2;
      params2.size = 4;
      params2.data = (array_t**)malloc(params2.size*sizeof(array_t*));
      params2.data[0] = array0;
      params2.data[1] = array1;
      params2.data[2] = array108;
      params2.data[3] = array117;
      array_t* array139 = func3(&params2, rng(), loopsFactor);
      DEBUG_RETURN(array139->id);
      free(params2.data);
      array_t* array145;
      array145 = (array_t*)malloc(sizeof(array_t));
      array145->size = 964;
      array145->refC = 1;
         array145->id = 145;
      array145->data = (unsigned int*)malloc(array145->size*sizeof(unsigned int));
      memset(array145->data, 0, array145->size*sizeof(unsigned int));
      DEBUG_NEW(array145->id);
      if(rng() & 1) {
         unsigned int loop57 = 0;
         unsigned int loopLimit57 = (rand()%loopsFactor)/2 + 1;
         for(; loop57 < loopLimit57; loop57++) {
            array_t* array146;
            array146 = (array_t*)malloc(sizeof(array_t));
            array146->size = 285;
            array146->refC = 1;
               array146->id = 146;
            array146->data = (unsigned int*)malloc(array146->size*sizeof(unsigned int));
            memset(array146->data, 0, array146->size*sizeof(unsigned int));
            DEBUG_NEW(array146->id);
            for (int i = 0; i < array117->size; i++) {
               array117->data[i]--;
            }
            for (int i = 0; i < array145->size; i++) {
               if (array145->data[i] == 35) { 
                  array145->data[i] += 35;
               }
            }
            array146->refC--;
            if(array146->refC == 0) {
               free(array146->data);
               free(array146);
               DEBUG_FREE(array146->id);
            }
         }
      }
      else {
         array_t_param params3;
         params3.size = 6;
         params3.data = (array_t**)malloc(params3.size*sizeof(array_t*));
         params3.data[0] = array0;
         params3.data[1] = array1;
         params3.data[2] = array108;
         params3.data[3] = array117;
         params3.data[4] = array139;
         params3.data[5] = array145;
         array_t* array147 = func7(&params3, rng(), loopsFactor);
         DEBUG_RETURN(array147->id);
         free(params3.data);
         array147->refC--;
         if(array147->refC == 0) {
            free(array147->data);
            free(array147);
            DEBUG_FREE(array147->id);
         }
      }
      array_t_param params3;
      params3.size = 6;
      params3.data = (array_t**)malloc(params3.size*sizeof(array_t*));
      params3.data[0] = array0;
      params3.data[1] = array1;
      params3.data[2] = array108;
      params3.data[3] = array117;
      params3.data[4] = array139;
      params3.data[5] = array145;
      array_t* array154 = func4(&params3, rng(), loopsFactor);
      DEBUG_RETURN(array154->id);
      free(params3.data);
      for (int i = 0; i < array0->size; i++) {
         if (array0->data[i] == 10) { 
            array0->data[i] += 10;
         }
      }
      array154->refC--;
      if(array154->refC == 0) {
         free(array154->data);
         free(array154);
         DEBUG_FREE(array154->id);
      }
      array145->refC--;
      if(array145->refC == 0) {
         free(array145->data);
         free(array145);
         DEBUG_FREE(array145->id);
      }
      array139->refC--;
      if(array139->refC == 0) {
         free(array139->data);
         free(array139);
         DEBUG_FREE(array139->id);
      }
      array117->refC--;
      if(array117->refC == 0) {
         free(array117->data);
         free(array117);
         DEBUG_FREE(array117->id);
      }
      array108->refC--;
      if(array108->refC == 0) {
         free(array108->data);
         free(array108);
         DEBUG_FREE(array108->id);
      }
      array1->refC--;
      if(array1->refC == 0) {
         free(array1->data);
         free(array1);
         DEBUG_FREE(array1->id);
      }
   }
   if(rng() & 1) {
      for (int i = 0; i < array0->size; i++) {
         if (array0->data[i] == 89) { 
            array0->data[i] += 89;
         }
      }
   }
   else {
      array_t* array171;
      array171 = (array_t*)malloc(sizeof(array_t));
      array171->size = 274;
      array171->refC = 1;
         array171->id = 171;
      array171->data = (unsigned int*)malloc(array171->size*sizeof(unsigned int));
      memset(array171->data, 0, array171->size*sizeof(unsigned int));
      DEBUG_NEW(array171->id);
      array171->refC--;
      if(array171->refC == 0) {
         free(array171->data);
         free(array171);
         DEBUG_FREE(array171->id);
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array0;
   array_t* array172 = func1(&params0, loopsFactor);
   DEBUG_RETURN(array172->id);
   free(params0.data);
   array172->refC--;
   if(array172->refC == 0) {
      free(array172->data);
      free(array172);
      DEBUG_FREE(array172->id);
   }
   array0->refC--;
   if(array0->refC == 0) {
      free(array0->data);
      free(array0);
      DEBUG_FREE(array0->id);
   }
   return 0;
}

