package main
import "math/rand"
var _ = rand.Intn
func Func43(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array19 *Array
   if pCounter > 0 {
       array19 = vars.Data[pCounter-1]
       pCounter--
       array19.RefC++
   } else {
       array19 = &Array{
           Size: 814,
           RefC: 1,
           Id: 19,
           Data: make([]uint32, 814),
       }
   }
   return array19;
}

