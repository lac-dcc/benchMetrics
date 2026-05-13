package main

import "core:os"
import "core:mem"
import "base:runtime"
import "core:strconv"
import "core:math/rand"

main :: proc() {

    path_seed: u64 = 0;

    for arg, i in os.args {
        if i == 0 { continue; }
        if arg == "-path-seed" && i + 1 < len(os.args) {
            if val, ok := strconv.parse_u64(os.args[i+1], 10); ok {
                path_seed = val;
            }
        }
    }
    random_state := rand.create(path_seed)
   loop0: int = 0
   loopLimit0 :: (50)/1 + 1;
   for loop0 < loopLimit0 {
      params0_data := make([]^Array, 0);
      params0 := ArrayParam{
          data = params0_data,
          size = 0,
      };
      array0 := func0(&params0, get_path());
      defer delete(params0.data);
       array156: ^Array
      array156 = new(Array);
      array156.size = 538;
      array156.refC = 1;
      array156.id = 156;
      array156.data = make([]u32, array156.size);
      if (get_path() & 1) != 0 {
         if (get_path() & 1) != 0 {
             array157: ^Array
            array157 = new(Array);
            array157.size = 159;
            array157.refC = 1;
            array157.id = 157;
            array157.data = make([]u32, array157.size);
            loop46: int = 0
            loopLimit46 :: (50)/2 + 1;
            for loop46 < loopLimit46 {
               for i in 0..<array157.size { 
                   array157.data[i] -= 1;
               }
               for i in 0..<array157.size {
                   if array157.data[i] == 34 {
                       array157.data[i] += 34;
                   }
               }
               loop46 += 1;
            }
            params1_data := make([]^Array, 3);
            params1_data[0] = array0;
            params1_data[1] = array156;
            params1_data[2] = array157;
            params1 := ArrayParam{
                data = params1_data,
                size = 3,
            };
            array158 := func6(&params1, get_path());
            defer delete(params1.data);
            array158.refC -= 1;
            if array158.refC == 0 {
                delete(array158.data);
                free(array158);
            }
            array157.refC -= 1;
            if array157.refC == 0 {
                delete(array157.data);
                free(array157);
            }
         
         } else {
            params1_data := make([]^Array, 2);
            params1_data[0] = array0;
            params1_data[1] = array156;
            params1 := ArrayParam{
                data = params1_data,
                size = 2,
            };
            array182 := func2(&params1, get_path());
            defer delete(params1.data);
            array182.refC -= 1;
            if array182.refC == 0 {
                delete(array182.data);
                free(array182);
            }
         }
      
      } else {
         params1_data := make([]^Array, 2);
         params1_data[0] = array0;
         params1_data[1] = array156;
         params1 := ArrayParam{
             data = params1_data,
             size = 2,
         };
         array192 := func1(&params1, get_path());
         defer delete(params1.data);
         array192.refC -= 1;
         if array192.refC == 0 {
             delete(array192.data);
             free(array192);
         }
      }
      array156.refC -= 1;
      if array156.refC == 0 {
          delete(array156.data);
          free(array156);
      }
      array0.refC -= 1;
      if array0.refC == 0 {
          delete(array0.data);
          free(array0);
      }
      loop0 += 1;
   }
    context.random_generator = runtime.default_random_generator(&random_state)
}
