package main
import "math/rand"
var _ = rand.Intn
func Func51(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array38 *Array
   if pCounter > 0 {
       array38 = vars.Data[pCounter-1]
       pCounter--
       array38.RefC++
   } else {
       array38 = &Array{
           Size: 683,
           RefC: 1,
           Id: 38,
           Data: make([]uint32, 683),
       }
   }
   var loop13 int = 0;
   var loopLimit13 int = (50)/4 + 1;
   for ; loop13 < loopLimit13; loop13++ {
      for i := 0; i < array38.Size; i++ {
          array38.Data[i]++
      }
   }
   for i := 0; i < array38.Size; i++ {
       if array38.Data[i] == 28 {
           return array38
       }
   }
   return array38;
}

