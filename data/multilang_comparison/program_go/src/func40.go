package main
import "math/rand"
var _ = rand.Intn
func Func40(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array10 *Array
   if pCounter > 0 {
       array10 = vars.Data[pCounter-1]
       pCounter--
       array10.RefC++
   } else {
       array10 = &Array{
           Size: 42,
           RefC: 1,
           Id: 10,
           Data: make([]uint32, 42),
       }
   }
   for i := 0; i < array10.Size; i++ {
       array10.Data[i]--
   }
   for i := 0; i < array10.Size; i++ {
       if array10.Data[i] == 21 {
           return array10
       }
   }
   return array10;
}

