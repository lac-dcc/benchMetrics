package main
import "math/rand"
var _ = rand.Intn
func Func38(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array52 *Array
      if pCounter > 0 {
          array52 = vars.Data[pCounter-1]
          pCounter--
          array52.RefC++
      } else {
          array52 = &Array{
              Size: 275,
              RefC: 1,
              Id: 52,
              Data: make([]uint32, 275),
          }
      }
      var loop18 int = 0;
      var loopLimit18 int = (50)/4 + 1;
      for ; loop18 < loopLimit18; loop18++ {
         for i := 0; i < array52.Size; i++ {
             array52.Data[i]--
         }
         for i := 0; i < array52.Size; i++ {
             if array52.Data[i] == 21 {
                 return array52
             }
         }
      }
      array52.RefC--
      if array52.RefC == 0 {
          array52.Data = nil
          array52 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array53 *Array = Func40(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array53.RefC--
      if array53.RefC == 0 {
          array53.Data = nil
          array53 = nil
      }
   }
   var array54 *Array
   if pCounter > 0 {
       array54 = vars.Data[pCounter-1]
       pCounter--
       array54.RefC++
   } else {
       array54 = &Array{
           Size: 29,
           RefC: 1,
           Id: 54,
           Data: make([]uint32, 29),
       }
   }
   return array54;
}

