package main
import "math/rand"
var _ = rand.Intn
func Func43(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop11 int = 0;
   var loopLimit11 int = (50)/4 + 1;
   for ; loop11 < loopLimit11; loop11++ {
   }
   var array30 *Array
   if pCounter > 0 {
       array30 = vars.Data[pCounter-1]
       pCounter--
       array30.RefC++
   } else {
       array30 = &Array{
           Size: 286,
           RefC: 1,
           Id: 30,
           Data: make([]uint32, 286),
       }
   }
   return array30;
}

