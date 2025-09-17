package main
import "math/rand"
var _ = rand.Intn
func Func50(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array24 *Array
   if pCounter > 0 {
       array24 = vars.Data[pCounter-1]
       pCounter--
       array24.RefC++
   } else {
       array24 = &Array{
           Size: 399,
           RefC: 1,
           Id: 24,
           Data: make([]uint32, 399),
       }
   }
   for i := 0; i < array24.Size; i++ {
       array24.Data[i]--
   }
   for i := 0; i < array24.Size; i++ {
       if array24.Data[i] == 76 {
           return array24
       }
   }
   return array24;
}

