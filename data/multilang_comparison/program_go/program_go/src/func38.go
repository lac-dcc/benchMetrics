package main
import "math/rand"
var _ = rand.Intn
func Func38(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array77 *Array
      if pCounter > 0 {
          array77 = vars.Data[pCounter-1]
          pCounter--
          array77.RefC++
      } else {
          array77 = &Array{
              Size: 416,
              RefC: 1,
              Id: 77,
              Data: make([]uint32, 416),
          }
      }
      var loop25 int = 0;
      var loopLimit25 int = (50)/4 + 1;
      for ; loop25 < loopLimit25; loop25++ {
         for i := 0; i < array77.Size; i++ {
             array77.Data[i]--
         }
         for i := 0; i < array77.Size; i++ {
             if array77.Data[i] == 24 {
                 return array77
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array77
      var array78 *Array = Func46(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array78.RefC--
      if array78.RefC == 0 {
          array78.Data = nil
          array78 = nil
      }
      array77.RefC--
      if array77.RefC == 0 {
          array77.Data = nil
          array77 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array79 *Array = Func40(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array79.RefC--
      if array79.RefC == 0 {
          array79.Data = nil
          array79 = nil
      }
   }
   var array80 *Array
   if pCounter > 0 {
       array80 = vars.Data[pCounter-1]
       pCounter--
       array80.RefC++
   } else {
       array80 = &Array{
           Size: 36,
           RefC: 1,
           Id: 80,
           Data: make([]uint32, 36),
       }
   }
   return array80;
}

