package main
import "math/rand"
var _ = rand.Intn
func Func37(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop23 int = 0;
   var loopLimit23 int = (50)/4 + 1;
   for ; loop23 < loopLimit23; loop23++ {
      if (PATH0 & 1) != 0 {
         var array71 *Array
         if pCounter > 0 {
             array71 = vars.Data[pCounter-1]
             pCounter--
             array71.RefC++
         } else {
             array71 = &Array{
                 Size: 340,
                 RefC: 1,
                 Id: 71,
                 Data: make([]uint32, 340),
             }
         }
         var loop24 int = 0;
         var loopLimit24 int = (50)/5 + 1;
         for ; loop24 < loopLimit24; loop24++ {
            for i := 0; i < array71.Size; i++ {
                array71.Data[i]--
            }
            for i := 0; i < array71.Size; i++ {
                if array71.Data[i] == 10 {
                    return array71
                }
            }
         }
         array71.RefC--
         if array71.RefC == 0 {
             array71.Data = nil
             array71 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array72 *Array = Func50(&params0, loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array72.RefC--
         if array72.RefC == 0 {
             array72.Data = nil
             array72 = nil
         }
      }
      var array73 *Array
      if pCounter > 0 {
          array73 = vars.Data[pCounter-1]
          pCounter--
          array73.RefC++
      } else {
          array73 = &Array{
              Size: 661,
              RefC: 1,
              Id: 73,
              Data: make([]uint32, 661),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array73
      var array74 *Array = Func51(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      for i := 0; i < array74.Size; i++ {
          if array74.Data[i] == 20 {
              return array74
          }
      }
      array74.RefC--
      if array74.RefC == 0 {
          array74.Data = nil
          array74 = nil
      }
      array73.RefC--
      if array73.RefC == 0 {
          array73.Data = nil
          array73 = nil
      }
   }
   var array75 *Array
   if pCounter > 0 {
       array75 = vars.Data[pCounter-1]
       pCounter--
       array75.RefC++
   } else {
       array75 = &Array{
           Size: 736,
           RefC: 1,
           Id: 75,
           Data: make([]uint32, 736),
       }
   }
   return array75;
}

