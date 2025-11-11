

package main

import (
    "math/rand"
    "os"
    "strconv"
)

func main() {
    loopsFactor := 100
    rand.Seed(0)

    args := os.Args
    for i := 1; i < len(args); i++ {
        if args[i] == "-path-seed" {
            i++
            if i < len(args) {
                seed, err := strconv.Atoi(args[i])
                if err == nil {
                    rand.Seed(int64(seed))
                }
            }
        } else if args[i] == "-loops-factor" {
            i++
            if i < len(args) {
                val, err := strconv.Atoi(args[i])
                if err == nil {
                    loopsFactor = val
                }
            }
        }
    }
   var loop0 int = 0;
   var loopLimit0 int = (50)/1 + 1;
   for ; loop0 < loopLimit0; loop0++ {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array0 *Array = Func0(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      var array156 *Array
      array156 = &Array{
          Size: 42,
          RefC: 1,
          Id: 156,
          Data: make([]uint32, 42),
      }
      if (getPath() & 1) != 0 {
         if (getPath() & 1) != 0 {
            var array157 *Array
            array157 = &Array{
                Size: 360,
                RefC: 1,
                Id: 157,
                Data: make([]uint32, 360),
            }
            var loop46 int = 0;
            var loopLimit46 int = (50)/2 + 1;
            for ; loop46 < loopLimit46; loop46++ {
               for i := 0; i < array0.Size; i++ {
                   array0.Data[i]--
               }
               for i := 0; i < array0.Size; i++ {
                   if array0.Data[i] == 61 {
                       array0.Data[i] += 61
                   }
               }
            }
            var params1 ArrayParam
            params1.Size = 3
            params1.Data = make([]*Array, params1.Size)
            params1.Data[0] = array0
            params1.Data[1] = array156
            params1.Data[2] = array157
            var array158 *Array = Func6(&params1, getPath(), loopsFactor);
            params1.Data = nil
            params1.Size = 0
            array158.RefC--
            if array158.RefC == 0 {
                array158.Data = nil
                array158 = nil
            }
            array157.RefC--
            if array157.RefC == 0 {
                array157.Data = nil
                array157 = nil
            }
         
         } else {
            var params1 ArrayParam
            params1.Size = 2
            params1.Data = make([]*Array, params1.Size)
            params1.Data[0] = array0
            params1.Data[1] = array156
            var array182 *Array = Func2(&params1, getPath(), loopsFactor);
            params1.Data = nil
            params1.Size = 0
            array182.RefC--
            if array182.RefC == 0 {
                array182.Data = nil
                array182 = nil
            }
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array0
         params1.Data[1] = array156
         var array192 *Array = Func1(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array192.RefC--
         if array192.RefC == 0 {
             array192.Data = nil
             array192 = nil
         }
      }
      array156.RefC--
      if array156.RefC == 0 {
          array156.Data = nil
          array156 = nil
      }
      array0.RefC--
      if array0.RefC == 0 {
          array0.Data = nil
          array0 = nil
      }
   }

}

