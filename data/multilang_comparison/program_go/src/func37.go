package main
import "math/rand"
var _ = rand.Intn
func Func37(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop17 int = 0;
   var loopLimit17 int = (50)/4 + 1;
   for ; loop17 < loopLimit17; loop17++ {
   }
   var array50 *Array
   if pCounter > 0 {
       array50 = vars.Data[pCounter-1]
       pCounter--
       array50.RefC++
   } else {
       array50 = &Array{
           Size: 859,
           RefC: 1,
           Id: 50,
           Data: make([]uint32, 859),
       }
   }
   return array50;
}

