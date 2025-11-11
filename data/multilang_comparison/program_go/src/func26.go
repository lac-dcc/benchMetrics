package main
import "math/rand"
var _ = rand.Intn
func Func26(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array78 *Array
      if pCounter > 0 {
          array78 = vars.Data[pCounter-1]
          pCounter--
          array78.RefC++
      } else {
          array78 = &Array{
              Size: 924,
              RefC: 1,
              Id: 78,
              Data: make([]uint32, 924),
          }
      }
      var loop25 int = 0;
      var loopLimit25 int = (50)/3 + 1;
      for ; loop25 < loopLimit25; loop25++ {
         for i := 0; i < array78.Size; i++ {
             array78.Data[i]--
         }
         for i := 0; i < array78.Size; i++ {
             if array78.Data[i] == 24 {
                 return array78
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array78
      var array79 *Array = Func36(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array79.RefC--
      if array79.RefC == 0 {
          array79.Data = nil
          array79 = nil
      }
      array78.RefC--
      if array78.RefC == 0 {
          array78.Data = nil
          array78 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array80 *Array = Func32(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array80.RefC--
      if array80.RefC == 0 {
          array80.Data = nil
          array80 = nil
      }
   }
   var array81 *Array
   if pCounter > 0 {
       array81 = vars.Data[pCounter-1]
       pCounter--
       array81.RefC++
   } else {
       array81 = &Array{
           Size: 379,
           RefC: 1,
           Id: 81,
           Data: make([]uint32, 379),
       }
   }
   return array81;
}

