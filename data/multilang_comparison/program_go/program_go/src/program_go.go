

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
      var array188 *Array
      array188 = &Array{
          Size: 493,
          RefC: 1,
          Id: 188,
          Data: make([]uint32, 493),
      }
      if (getPath() & 1) != 0 {
         if (getPath() & 1) != 0 {
            var array189 *Array
            array189 = &Array{
                Size: 358,
                RefC: 1,
                Id: 189,
                Data: make([]uint32, 358),
            }
            var loop55 int = 0;
            var loopLimit55 int = (50)/2 + 1;
            for ; loop55 < loopLimit55; loop55++ {
               for i := 0; i < array188.Size; i++ {
                   array188.Data[i]--
               }
               for i := 0; i < array188.Size; i++ {
                   if array188.Data[i] == 17 {
                       array188.Data[i] += 17
                   }
               }
            }
            var params1 ArrayParam
            params1.Size = 3
            params1.Data = make([]*Array, params1.Size)
            params1.Data[0] = array0
            params1.Data[1] = array188
            params1.Data[2] = array189
            var array190 *Array = Func6(&params1, getPath(), loopsFactor);
            params1.Data = nil
            params1.Size = 0
            array190.RefC--
            if array190.RefC == 0 {
                array190.Data = nil
                array190 = nil
            }
            array189.RefC--
            if array189.RefC == 0 {
                array189.Data = nil
                array189 = nil
            }
         
         } else {
            var params1 ArrayParam
            params1.Size = 2
            params1.Data = make([]*Array, params1.Size)
            params1.Data[0] = array0
            params1.Data[1] = array188
            var array214 *Array = Func2(&params1, getPath(), loopsFactor);
            params1.Data = nil
            params1.Size = 0
            array214.RefC--
            if array214.RefC == 0 {
                array214.Data = nil
                array214 = nil
            }
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array0
         params1.Data[1] = array188
         var array224 *Array = Func1(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array224.RefC--
         if array224.RefC == 0 {
             array224.Data = nil
             array224 = nil
         }
      }
      array188.RefC--
      if array188.RefC == 0 {
          array188.Data = nil
          array188 = nil
      }
      array0.RefC--
      if array0.RefC == 0 {
          array0.Data = nil
          array0 = nil
      }
   }

}

