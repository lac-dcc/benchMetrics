package main
import "math/rand"
var _ = rand.Intn
func Func25(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop22 int = 0;
   var loopLimit22 int = (50)/3 + 1;
   for ; loop22 < loopLimit22; loop22++ {
      if (PATH0 & 1) != 0 {
         var array69 *Array
         if pCounter > 0 {
             array69 = vars.Data[pCounter-1]
             pCounter--
             array69.RefC++
         } else {
             array69 = &Array{
                 Size: 828,
                 RefC: 1,
                 Id: 69,
                 Data: make([]uint32, 828),
             }
         }
         var loop23 int = 0;
         var loopLimit23 int = (50)/4 + 1;
         for ; loop23 < loopLimit23; loop23++ {
            for i := 0; i < array69.Size; i++ {
                array69.Data[i]--
            }
            for i := 0; i < array69.Size; i++ {
                if array69.Data[i] == 46 {
                    return array69
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array69
         var array70 *Array = Func42(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array70.RefC--
         if array70.RefC == 0 {
             array70.Data = nil
             array70 = nil
         }
         array69.RefC--
         if array69.RefC == 0 {
             array69.Data = nil
             array69 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array71 *Array = Func34(&params0, loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array71.RefC--
         if array71.RefC == 0 {
             array71.Data = nil
             array71 = nil
         }
      }
      var array72 *Array
      if pCounter > 0 {
          array72 = vars.Data[pCounter-1]
          pCounter--
          array72.RefC++
      } else {
          array72 = &Array{
              Size: 810,
              RefC: 1,
              Id: 72,
              Data: make([]uint32, 810),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array72
      var array73 *Array = Func35(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array74 *Array
         if pCounter > 0 {
             array74 = vars.Data[pCounter-1]
             pCounter--
             array74.RefC++
         } else {
             array74 = &Array{
                 Size: 661,
                 RefC: 1,
                 Id: 74,
                 Data: make([]uint32, 661),
             }
         }
         var loop24 int = 0;
         var loopLimit24 int = (50)/4 + 1;
         for ; loop24 < loopLimit24; loop24++ {
            for i := 0; i < array72.Size; i++ {
                array72.Data[i]--
            }
            for i := 0; i < array73.Size; i++ {
                if array73.Data[i] == 5 {
                    return array73
                }
            }
         }
         array74.RefC--
         if array74.RefC == 0 {
             array74.Data = nil
             array74 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array72
         params1.Data[1] = array73
         var array75 *Array = Func40(&params1, loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array75.RefC--
         if array75.RefC == 0 {
             array75.Data = nil
             array75 = nil
         }
      }
      for i := 0; i < array72.Size; i++ {
          if array72.Data[i] == 26 {
              return array72
          }
      }
      array73.RefC--
      if array73.RefC == 0 {
          array73.Data = nil
          array73 = nil
      }
      array72.RefC--
      if array72.RefC == 0 {
          array72.Data = nil
          array72 = nil
      }
   }
   var array76 *Array
   if pCounter > 0 {
       array76 = vars.Data[pCounter-1]
       pCounter--
       array76.RefC++
   } else {
       array76 = &Array{
           Size: 522,
           RefC: 1,
           Id: 76,
           Data: make([]uint32, 522),
       }
   }
   return array76;
}

