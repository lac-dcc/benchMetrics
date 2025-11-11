#include "program_cpp_vector.hpp"

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
      std::vector<Array*> data_params0(0);
      params0.data = data_params0;
      Array* array0 = func0(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array0->id);
      if(params0.size > 0) {
      	 params0.data.clear();
      }
      Array* array156;
      array156 = new Array();
      array156->size = 42;
      array156->refC = 1;
      array156->id = 156;
      array156->data = std::vector<unsigned int>(array156->size, 0);
      DEBUG_NEW(array156->id);
      if(get_path() & 1) {
         if(get_path() & 1) {
            Array* array157;
            array157 = new Array();
            array157->size = 360;
            array157->refC = 1;
            array157->id = 157;
            array157->data = std::vector<unsigned int>(array157->size, 0);
            DEBUG_NEW(array157->id);
            unsigned int loop46 = 0;
            unsigned int loopLimit46 = (50)/2 + 1;
            for(; loop46 < loopLimit46; loop46++) {
               for (int i = 0; i < array0->size; i++) {
                   array0->data.at(i)--;
               }
               for (int i = 0; i < array0->size; i++) {
                   if (array0->data.at(i) == 61) {
                       array0->data.at(i) += 61;
                   }
               }
            }
            Array_param params1;
            params1.size = 3;
            std::vector<Array*> data_params1(3);
            params1.data = data_params1;
            params1.data.at(0) = array0;
            params1.data.at(1) = array156;
            params1.data.at(2) = array157;
            Array* array158 = func6(&params1, get_path(), loopsFactor);
            DEBUG_RETURN(array158->id);
            if(params1.size > 0) {
            	 params1.data.clear();
            }
            array158->refC--;
            if(array158->refC == 0) {
               array158->data.clear();
               delete array158;
               DEBUG_FREE(array158->id);
            }
            array157->refC--;
            if(array157->refC == 0) {
               array157->data.clear();
               delete array157;
               DEBUG_FREE(array157->id);
            }
         }
         else {
            Array_param params1;
            params1.size = 2;
            std::vector<Array*> data_params1(2);
            params1.data = data_params1;
            params1.data.at(0) = array0;
            params1.data.at(1) = array156;
            Array* array182 = func2(&params1, get_path(), loopsFactor);
            DEBUG_RETURN(array182->id);
            if(params1.size > 0) {
            	 params1.data.clear();
            }
            array182->refC--;
            if(array182->refC == 0) {
               array182->data.clear();
               delete array182;
               DEBUG_FREE(array182->id);
            }
         }
      }
      else {
         Array_param params1;
         params1.size = 2;
         std::vector<Array*> data_params1(2);
         params1.data = data_params1;
         params1.data.at(0) = array0;
         params1.data.at(1) = array156;
         Array* array192 = func1(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array192->id);
         if(params1.size > 0) {
         	 params1.data.clear();
         }
         array192->refC--;
         if(array192->refC == 0) {
            array192->data.clear();
            delete array192;
            DEBUG_FREE(array192->id);
         }
      }
      array156->refC--;
      if(array156->refC == 0) {
         array156->data.clear();
         delete array156;
         DEBUG_FREE(array156->id);
      }
      array0->refC--;
      if(array0->refC == 0) {
         array0->data.clear();
         delete array0;
         DEBUG_FREE(array0->id);
      }
   }
   return 0;
}

