#include "program_cpp_array.hpp"

#include <iostream>
#include <string>
#include <random>


int main(int argc, char** argv) {
   int loopsFactor = 100;
   std::mt19937 rng(0);
   for (int i = 1; i < argc; i++) {
      std::string arg = argv[i];
      if (arg == "-path-seed") {
         i++;
         if (i < argc) {
            int seed = std::stoi(argv[i]);
            rng.seed(seed);
         }
      }
      else if (arg == "-loops-factor") {
         i++;
         if (i < argc) {
            loopsFactor = std::stoi(argv[i]);
         }
      }
   }
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (50)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      Array_param params0;
      params0.size = 0;
      Array* data_params0[0];
      params0.data = data_params0;
      Array* array0 = func0(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array0->id);
      if(params0.size > 0) {
      	params0.data = nullptr;
      }
      Array* array188;
      array188 = new Array();
      array188->size = 493;
      array188->refC = 1;
      array188->id = 188;
         array188->data = new unsigned int[array188->size]();
      DEBUG_NEW(array188->id);
      if(get_path() & 1) {
         if(get_path() & 1) {
            Array* array189;
            array189 = new Array();
            array189->size = 358;
            array189->refC = 1;
            array189->id = 189;
               array189->data = new unsigned int[array189->size]();
            DEBUG_NEW(array189->id);
            unsigned int loop55 = 0;
            unsigned int loopLimit55 = (50)/2 + 1;
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
            Array_param params1;
            params1.size = 3;
            Array* data_params1[3];
            params1.data = data_params1;
            params1.data[0] = array0;
            params1.data[1] = array188;
            params1.data[2] = array189;
            Array* array190 = func6(&params1, get_path(), loopsFactor);
            DEBUG_RETURN(array190->id);
            if(params1.size > 0) {
            	params1.data = nullptr;
            }
            array190->refC--;
            if(array190->refC == 0) {
               delete[] array190->data;
               array190->data = nullptr;
               DEBUG_FREE(array190->id);
               delete array190;
            }
            array189->refC--;
            if(array189->refC == 0) {
               delete[] array189->data;
               array189->data = nullptr;
               DEBUG_FREE(array189->id);
               delete array189;
            }
         }
         else {
            Array_param params1;
            params1.size = 2;
            Array* data_params1[2];
            params1.data = data_params1;
            params1.data[0] = array0;
            params1.data[1] = array188;
            Array* array214 = func2(&params1, get_path(), loopsFactor);
            DEBUG_RETURN(array214->id);
            if(params1.size > 0) {
            	params1.data = nullptr;
            }
            array214->refC--;
            if(array214->refC == 0) {
               delete[] array214->data;
               array214->data = nullptr;
               DEBUG_FREE(array214->id);
               delete array214;
            }
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         Array* data_params1[2];
         params1.data = data_params1;
         params1.data[0] = array0;
         params1.data[1] = array188;
         Array* array224 = func1(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array224->id);
         if(params1.size > 0) {
         	params1.data = nullptr;
         }
         array224->refC--;
         if(array224->refC == 0) {
            delete[] array224->data;
            array224->data = nullptr;
            DEBUG_FREE(array224->id);
            delete array224;
         }
      }
      array188->refC--;
      if(array188->refC == 0) {
         delete[] array188->data;
         array188->data = nullptr;
         DEBUG_FREE(array188->id);
         delete array188;
      }
      array0->refC--;
      if(array0->refC == 0) {
         delete[] array0->data;
         array0->data = nullptr;
         DEBUG_FREE(array0->id);
         delete array0;
      }
   }
   return 0;
}

