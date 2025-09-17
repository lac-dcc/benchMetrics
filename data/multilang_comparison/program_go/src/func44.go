package main
import "math/rand"
var _ = rand.Intn
func Func44(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array32 *Array
      if pCounter > 0 {
          array32 = vars.Data[pCounter-1]
          pCounter--
          array32.RefC++
      } else {
          array32 = &Array{
              Size: 440,
              RefC: 1,
              Id: 32,
              Data: make([]uint32, 440),
          }
      }
      var loop12 int = 0;
      var loopLimit12 int = (50)/4 + 1;
      for ; loop12 < loopLimit12; loop12++ {
         for i := 0; i < array32.Size; i++ {
             array32.Data[i]--
         }
         for i := 0; i < array32.Size; i++ {
             if array32.Data[i] == 17 {
                 return array32
             }
         }
      }
      array32.RefC--
      if array32.RefC == 0 {
          array32.Data = nil
          array32 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array33 *Array = Func50(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array33.RefC--
      if array33.RefC == 0 {
          array33.Data = nil
          array33 = nil
      }
   }
   var array34 *Array
   if pCounter > 0 {
       array34 = vars.Data[pCounter-1]
       pCounter--
       array34.RefC++
   } else {
       array34 = &Array{
           Size: 481,
           RefC: 1,
           Id: 34,
           Data: make([]uint32, 481),
       }
   }
   return array34;
}

