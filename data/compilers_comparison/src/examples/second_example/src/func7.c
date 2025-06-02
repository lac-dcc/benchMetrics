#include "second_example.h" 
array_t* func7(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   unsigned int loop65 = 0;
   unsigned int loopLimit65 = (rand()%loopsFactor)/2 + 1;
   for(; loop65 < loopLimit65; loop65++) {
      if(PATH0 & 1) {
         array_t* array224;
         if (pCounter > 0) {
            array224 = vars->data[--pCounter];
            array224->refC++;
            DEBUG_COPY(array224->id);
         } else {
            array224 = (array_t*)malloc(sizeof(array_t));
            array224->size = 137;
            array224->refC = 1;
            array224->id = 224;
            array224->data = (unsigned int*)malloc(array224->size*sizeof(unsigned int));
            memset(array224->data, 0, array224->size*sizeof(unsigned int));
            DEBUG_NEW(array224->id);
         }
         unsigned int loop66 = 0;
         unsigned int loopLimit66 = (rand()%loopsFactor)/3 + 1;
         for(; loop66 < loopLimit66; loop66++) {
            for (int i = 0; i < array224->size; i++) {
               array224->data[i]--;
            }
            for (int i = 0; i < array224->size; i++) {
               if (array224->data[i] == 43) { 
                  return array224;
               }
            }
         }
         array_t_param params0;
         params0.size = 1;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array224;
         array_t* array225 = func24(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array225->id);
         free(params0.data);
         array225->refC--;
         if(array225->refC == 0) {
            free(array225->data);
            free(array225);
            DEBUG_FREE(array225->id);
         }
         array224->refC--;
         if(array224->refC == 0) {
            free(array224->data);
            free(array224);
            DEBUG_FREE(array224->id);
         }
      }
      else {
         array_t_param params0;
         params0.size = 0;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         array_t* array226 = func16(&params0, rng(), loopsFactor);
         DEBUG_RETURN(array226->id);
         free(params0.data);
         array226->refC--;
         if(array226->refC == 0) {
            free(array226->data);
            free(array226);
            DEBUG_FREE(array226->id);
         }
      }
      array_t* array227;
      if (pCounter > 0) {
         array227 = vars->data[--pCounter];
         array227->refC++;
         DEBUG_COPY(array227->id);
      } else {
         array227 = (array_t*)malloc(sizeof(array_t));
         array227->size = 710;
         array227->refC = 1;
         array227->id = 227;
         array227->data = (unsigned int*)malloc(array227->size*sizeof(unsigned int));
         memset(array227->data, 0, array227->size*sizeof(unsigned int));
         DEBUG_NEW(array227->id);
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array227;
      array_t* array228 = func17(&params0, loopsFactor);
      DEBUG_RETURN(array228->id);
      free(params0.data);
      if(PATH0 & 2) {
         array_t* array229;
         if (pCounter > 0) {
            array229 = vars->data[--pCounter];
            array229->refC++;
            DEBUG_COPY(array229->id);
         } else {
            array229 = (array_t*)malloc(sizeof(array_t));
            array229->size = 836;
            array229->refC = 1;
            array229->id = 229;
            array229->data = (unsigned int*)malloc(array229->size*sizeof(unsigned int));
            memset(array229->data, 0, array229->size*sizeof(unsigned int));
            DEBUG_NEW(array229->id);
         }
         unsigned int loop67 = 0;
         unsigned int loopLimit67 = (rand()%loopsFactor)/3 + 1;
         for(; loop67 < loopLimit67; loop67++) {
            for (int i = 0; i < array229->size; i++) {
               array229->data[i]--;
            }
            for (int i = 0; i < array229->size; i++) {
               if (array229->data[i] == 90) { 
                  return array229;
               }
            }
         }
         array_t_param params1;
         params1.size = 3;
         params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
         params1.data[0] = array227;
         params1.data[1] = array228;
         params1.data[2] = array229;
         array_t* array230 = func28(&params1, rng(), loopsFactor);
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
         params1.data[0] = array227;
         params1.data[1] = array228;
         array_t* array231 = func22(&params1, rng(), loopsFactor);
         DEBUG_RETURN(array231->id);
         free(params1.data);
         array231->refC--;
         if(array231->refC == 0) {
            free(array231->data);
            free(array231);
            DEBUG_FREE(array231->id);
         }
      }
      for (int i = 0; i < array228->size; i++) {
         if (array228->data[i] == 33) { 
            return array228;
         }
      }
      array228->refC--;
      if(array228->refC == 0) {
         free(array228->data);
         free(array228);
         DEBUG_FREE(array228->id);
      }
      array227->refC--;
      if(array227->refC == 0) {
         free(array227->data);
         free(array227);
         DEBUG_FREE(array227->id);
      }
   }
   array_t* array232;
   if (pCounter > 0) {
      array232 = vars->data[--pCounter];
      array232->refC++;
      DEBUG_COPY(array232->id);
   } else {
      array232 = (array_t*)malloc(sizeof(array_t));
      array232->size = 685;
      array232->refC = 1;
      array232->id = 232;
      array232->data = (unsigned int*)malloc(array232->size*sizeof(unsigned int));
      memset(array232->data, 0, array232->size*sizeof(unsigned int));
      DEBUG_NEW(array232->id);
   }
   return array232;
}

