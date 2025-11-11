module main

import functions
import os
import rand

type Array = functions.Array
type ArrayParam = functions.ArrayParam

fn get_path() u64 { return functions.get_path() }

fn main() {
    mut loops_factor := 100
    mut path_seed := u64(0)

    args := os.args
    for i := 1; i < args.len; i++ {
        match args[i] {
            '-path-seed' {
                i++
                if i < args.len {
                    path_seed = args[i].u64()
                }
            }
            '-loops-factor' {
                i++
                if i < args.len {
                    loops_factor = args[i].int()
                }
            }
            else {}
        }
    }
   mut loop0 := 0
   loop_limit0 := (50) / 1 + 1
   for loop0 < loop_limit0 {
      mut params0 := ArrayParam{
          size: 0,
          data: []functions.Array{len: 0}
      }
      mut array0 := functions.func0(params0, get_path(), loops_factor)
      mut array156 := Array{}
      array156 = Array{
          size: 323,
          ref_c: 1,
          id: 156,
          data: []u32{len: 323}
      }
      if (get_path() & 1) != 0 {
         if (get_path() & 1) != 0 {
            mut array157 := Array{}
            array157 = Array{
                size: 147,
                ref_c: 1,
                id: 157,
                data: []u32{len: 147}
            }
            mut loop46 := 0
            loop_limit46 := (50) / 2 + 1
            for loop46 < loop_limit46 {
               for i := 0; i < array0.size; i++ {
                   array0.data[i]--
               }
               for i := 0; i < array0.size; i++ {
                   if array0.data[i] == 66 {
                       array0.data[i] += 66
                   }
               }
               loop46++
            }
            mut params1 := ArrayParam{
                size: 3,
                data: []functions.Array{len: 3}
            }
            params1.data[0] = array0
            params1.data[1] = array156
            params1.data[2] = array157
            mut array158 := functions.func6(params1, get_path(), loops_factor)
            array158.ref_c--
            if array158.ref_c == 0 {
            }
            array157.ref_c--
            if array157.ref_c == 0 {
            }
         } else {
            mut params1 := ArrayParam{
                size: 2,
                data: []functions.Array{len: 2}
            }
            params1.data[0] = array0
            params1.data[1] = array156
            mut array182 := functions.func2(params1, get_path(), loops_factor)
            array182.ref_c--
            if array182.ref_c == 0 {
            }
         }
      } else {
         mut params1 := ArrayParam{
             size: 2,
             data: []functions.Array{len: 2}
         }
         params1.data[0] = array0
         params1.data[1] = array156
         mut array192 := functions.func1(params1, get_path(), loops_factor)
         array192.ref_c--
         if array192.ref_c == 0 {
         }
      }
      loop0++
      array156.ref_c--
      if array156.ref_c == 0 {
      }
      array0.ref_c--
      if array0.ref_c == 0 {
      }
   }
    rand.seed([u32(path_seed), u32(path_seed >> 32)])
}
