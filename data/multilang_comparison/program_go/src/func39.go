package main
import "math/rand"
var _ = rand.Intn
func Func39(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array82 *Array
   if pCounter > 0 {
       array82 = vars.Data[pCounter-1]
       pCounter--
       array82.RefC++
   } else {
       array82 = &Array{
           Size: 71,
           RefC: 1,
           Id: 82,
           Data: make([]uint32, 71),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array82
   var array83 *Array = Func41(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array84 *Array
      if pCounter > 0 {
          array84 = vars.Data[pCounter-1]
          pCounter--
          array84.RefC++
      } else {
          array84 = &Array{
              Size: 881,
              RefC: 1,
              Id: 84,
              Data: make([]uint32, 881),
          }
      }
      var loop26 int = 0;
      var loopLimit26 int = (50)/4 + 1;
      for ; loop26 < loopLimit26; loop26++ {
         for i := 0; i < array83.Size; i++ {
             array83.Data[i]--
         }
         for i := 0; i < array83.Size; i++ {
             if array83.Data[i] == 94 {
                 return array83
             }
         }
      }
      array84.RefC--
      if array84.RefC == 0 {
          array84.Data = nil
          array84 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array82
      params1.Data[1] = array83
      var array85 *Array = Func50(&params1, loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array85.RefC--
      if array85.RefC == 0 {
          array85.Data = nil
          array85 = nil
      }
   }
   array82.RefC--
   if array82.RefC == 0 {
       array82.Data = nil
       array82 = nil
   }
   return array83;
}

