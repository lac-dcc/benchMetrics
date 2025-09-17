package main
import "math/rand"
var _ = rand.Intn
func Func34(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array40 *Array
   if pCounter > 0 {
       array40 = vars.Data[pCounter-1]
       pCounter--
       array40.RefC++
   } else {
       array40 = &Array{
           Size: 708,
           RefC: 1,
           Id: 40,
           Data: make([]uint32, 708),
       }
   }
   var loop14 int = 0;
   var loopLimit14 int = (50)/4 + 1;
   for ; loop14 < loopLimit14; loop14++ {
      if (PATH0 & 1) != 0 {
         var array41 *Array
         if pCounter > 0 {
             array41 = vars.Data[pCounter-1]
             pCounter--
             array41.RefC++
         } else {
             array41 = &Array{
                 Size: 715,
                 RefC: 1,
                 Id: 41,
                 Data: make([]uint32, 715),
             }
         }
         var loop15 int = 0;
         var loopLimit15 int = (50)/5 + 1;
         for ; loop15 < loopLimit15; loop15++ {
            for i := 0; i < array40.Size; i++ {
                array40.Data[i]--
            }
            for i := 0; i < array41.Size; i++ {
                if array41.Data[i] == 96 {
                    return array41
                }
            }
         }
         array41.RefC--
         if array41.RefC == 0 {
             array41.Data = nil
             array41 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array40
         var array42 *Array = Func50(&params0, loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array42.RefC--
         if array42.RefC == 0 {
             array42.Data = nil
             array42 = nil
         }
      }
      var array43 *Array
      if pCounter > 0 {
          array43 = vars.Data[pCounter-1]
          pCounter--
          array43.RefC++
      } else {
          array43 = &Array{
              Size: 245,
              RefC: 1,
              Id: 43,
              Data: make([]uint32, 245),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array40
      params0.Data[1] = array43
      var array44 *Array = Func51(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      for i := 0; i < array43.Size; i++ {
          if array43.Data[i] == 55 {
              return array43
          }
      }
      array44.RefC--
      if array44.RefC == 0 {
          array44.Data = nil
          array44 = nil
      }
      array43.RefC--
      if array43.RefC == 0 {
          array43.Data = nil
          array43 = nil
      }
   }
   for i := 0; i < array40.Size; i++ {
       array40.Data[i]--
   }
   for i := 0; i < array40.Size; i++ {
       if array40.Data[i] == 64 {
           return array40
       }
   }
   return array40;
}

