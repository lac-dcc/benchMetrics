#include "fourth_example.h"

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
      unsigned int loop63 = 0;
      unsigned int loopLimit63 = (rand()%loopsFactor)/2 + 1;
      for(; loop63 < loopLimit63; loop63++) {
         for (int i = 0; i < array0->size; i++) {
            array0->data[i]--;
         }
      }
      array_t* array162;
      array162 = (array_t*)malloc(sizeof(array_t));
      array162->size = 916;
      array162->refC = 1;
         array162->id = 162;
      array162->data = (unsigned int*)malloc(array162->size*sizeof(unsigned int));
      memset(array162->data, 0, array162->size*sizeof(unsigned int));
      DEBUG_NEW(array162->id);
      if(rng() & 1) {
         unsigned int loop64 = 0;
         unsigned int loopLimit64 = (rand()%loopsFactor)/2 + 1;
         for(; loop64 < loopLimit64; loop64++) {
            array_t* array163;
            array163 = (array_t*)malloc(sizeof(array_t));
            array163->size = 552;
            array163->refC = 1;
               array163->id = 163;
            array163->data = (unsigned int*)malloc(array163->size*sizeof(unsigned int));
            memset(array163->data, 0, array163->size*sizeof(unsigned int));
            DEBUG_NEW(array163->id);
            for (int i = 0; i < array162->size; i++) {
               array162->data[i]--;
            }
            for (int i = 0; i < array1->size; i++) {
               if (array1->data[i] == 46) { 
                  array1->data[i] += 46;
               }
            }
            array163->refC--;
            if(array163->refC == 0) {
               free(array163->data);
               free(array163);
               DEBUG_FREE(array163->id);
            }
         }
      }
      else {
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array0;
         params1.data[1] = array1;
         params1.data[2] = array162;
         array_t* array164 = func9(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array164->id);
         free(params1.data);
         array164->refC--;
         if(array164->refC == 0) {
            free(array164->data);
            free(array164);
            DEBUG_FREE(array164->id);
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array0;
      params1.data[1] = array1;
      params1.data[2] = array162;
      array_t* array171 = func6(&params1, rng(), loopsFactor);
      DEBUG_RETURN(array171->id);
      free(params1.data);
      unsigned int loop75 = 0;
      unsigned int loopLimit75 = (rand()%loopsFactor)/2 + 1;
      for(; loop75 < loopLimit75; loop75++) {
         for (int i = 0; i < array1->size; i++) {
            array1->data[i]++;
         }
      }
      array_t_param params2;
      params2.size = 4;
      params2.data = (array_t**)malloc(params2.size*sizeof(array_t*));
      params2.data[0] = array0;
      params2.data[1] = array1;
      params2.data[2] = array162;
      params2.data[3] = array171;
      array_t* array193 = func3(&params2, rng(), loopsFactor);
      DEBUG_RETURN(array193->id);
      free(params2.data);
      array_t* array199;
      array199 = (array_t*)malloc(sizeof(array_t));
      array199->size = 404;
      array199->refC = 1;
         array199->id = 199;
      array199->data = (unsigned int*)malloc(array199->size*sizeof(unsigned int));
      memset(array199->data, 0, array199->size*sizeof(unsigned int));
      DEBUG_NEW(array199->id);
      if(rng() & 1) {
         unsigned int loop77 = 0;
         unsigned int loopLimit77 = (rand()%loopsFactor)/2 + 1;
         for(; loop77 < loopLimit77; loop77++) {
            array_t* array200;
            array200 = (array_t*)malloc(sizeof(array_t));
            array200->size = 338;
            array200->refC = 1;
               array200->id = 200;
            array200->data = (unsigned int*)malloc(array200->size*sizeof(unsigned int));
            memset(array200->data, 0, array200->size*sizeof(unsigned int));
            DEBUG_NEW(array200->id);
            for (int i = 0; i < array171->size; i++) {
               array171->data[i]--;
            }
            for (int i = 0; i < array193->size; i++) {
               if (array193->data[i] == 21) { 
                  array193->data[i] += 21;
               }
            }
            array200->refC--;
            if(array200->refC == 0) {
               free(array200->data);
               free(array200);
               DEBUG_FREE(array200->id);
            }
         }
      }
      else {
         array_t_param params3;
         params3.size = 6;
         params3.data = (array_t**)malloc(params3.size*sizeof(array_t*));
         params3.data[0] = array0;
         params3.data[1] = array1;
         params3.data[2] = array162;
         params3.data[3] = array171;
         params3.data[4] = array193;
         params3.data[5] = array199;
         array_t* array201 = func7(&params3, rng(), loopsFactor);
         DEBUG_RETURN(array201->id);
         free(params3.data);
         array201->refC--;
         if(array201->refC == 0) {
            free(array201->data);
            free(array201);
            DEBUG_FREE(array201->id);
         }
      }
      array_t_param params3;
      params3.size = 6;
      params3.data = (array_t**)malloc(params3.size*sizeof(array_t*));
      params3.data[0] = array0;
      params3.data[1] = array1;
      params3.data[2] = array162;
      params3.data[3] = array171;
      params3.data[4] = array193;
      params3.data[5] = array199;
      array_t* array208 = func4(&params3, rng(), loopsFactor);
      DEBUG_RETURN(array208->id);
      free(params3.data);
      for (int i = 0; i < array171->size; i++) {
         if (array171->data[i] == 25) { 
            array171->data[i] += 25;
         }
      }
      array208->refC--;
      if(array208->refC == 0) {
         free(array208->data);
         free(array208);
         DEBUG_FREE(array208->id);
      }
      array199->refC--;
      if(array199->refC == 0) {
         free(array199->data);
         free(array199);
         DEBUG_FREE(array199->id);
      }
      array193->refC--;
      if(array193->refC == 0) {
         free(array193->data);
         free(array193);
         DEBUG_FREE(array193->id);
      }
      array171->refC--;
      if(array171->refC == 0) {
         free(array171->data);
         free(array171);
         DEBUG_FREE(array171->id);
      }
      array162->refC--;
      if(array162->refC == 0) {
         free(array162->data);
         free(array162);
         DEBUG_FREE(array162->id);
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
         if (array0->data[i] == 10) { 
            array0->data[i] += 10;
         }
      }
   }
   else {
      array_t* array225;
      array225 = (array_t*)malloc(sizeof(array_t));
      array225->size = 18;
      array225->refC = 1;
         array225->id = 225;
      array225->data = (unsigned int*)malloc(array225->size*sizeof(unsigned int));
      memset(array225->data, 0, array225->size*sizeof(unsigned int));
      DEBUG_NEW(array225->id);
      array225->refC--;
      if(array225->refC == 0) {
         free(array225->data);
         free(array225);
         DEBUG_FREE(array225->id);
      }
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
   params0.data[0] = array0;
   array_t* array226 = func1(&params0, loopsFactor);
   DEBUG_RETURN(array226->id);
   free(params0.data);
   array226->refC--;
   if(array226->refC == 0) {
      free(array226->data);
      free(array226);
      DEBUG_FREE(array226->id);
   }
   array0->refC--;
   if(array0->refC == 0) {
      free(array0->data);
      free(array0);
      DEBUG_FREE(array0->id);
   }
   return 0;
}

