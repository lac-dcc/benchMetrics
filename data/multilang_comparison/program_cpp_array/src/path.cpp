#include "path.hpp"
#include <cstdlib>
#include <string>
#include <random>


unsigned long get_path() {
   const char* path = std::getenv("BENCH_PATH");
   if(path != nullptr) { 
      return std::stoul(path);
   }else {
      static std::mt19937_64 rng(std::random_device{}());
      return rng();
   }
}

