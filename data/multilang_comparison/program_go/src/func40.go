package main
import "math/rand"
var _ = rand.Intn
func Func40(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array17 *Array
   if pCounter > 0 {
       array17 = vars.Data[pCounter-1]
       pCounter--
       array17.RefC++
   } else {
       array17 = &Array{
           Size: 84,
           RefC: 1,
           Id: 17,
           Data: make([]uint32, 84),
       }
   }
   var loop7 int = 0;
   var loopLimit7 int = (50)/5 + 1;
   for ; loop7 < loopLimit7; loop7++ {
      for i := 0; i < array17.Size; i++ {
          if array17.Data[i] == 36 {
              return array17
          }
      }
   }
   for i := 0; i < array17.Size; i++ {
       array17.Data[i]--
   }
   for i := 0; i < array17.Size; i++ {
       if array17.Data[i] == 29 {
           return array17
       }
   }
   return array17;
}

