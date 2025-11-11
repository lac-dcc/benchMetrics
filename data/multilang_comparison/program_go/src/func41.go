package main
import "math/rand"
var _ = rand.Intn
func Func41(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array13 *Array
   if pCounter > 0 {
       array13 = vars.Data[pCounter-1]
       pCounter--
       array13.RefC++
   } else {
       array13 = &Array{
           Size: 370,
           RefC: 1,
           Id: 13,
           Data: make([]uint32, 370),
       }
   }
   var loop7 int = 0;
   var loopLimit7 int = (50)/5 + 1;
   for ; loop7 < loopLimit7; loop7++ {
      for i := 0; i < array13.Size; i++ {
          array13.Data[i]++
      }
   }
   for i := 0; i < array13.Size; i++ {
       if array13.Data[i] == 91 {
           return array13
       }
   }
   return array13;
}

