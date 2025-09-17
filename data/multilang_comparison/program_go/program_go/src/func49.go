package main
import "math/rand"
var _ = rand.Intn
func Func49(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array15 *Array
   if pCounter > 0 {
       array15 = vars.Data[pCounter-1]
       pCounter--
       array15.RefC++
   } else {
       array15 = &Array{
           Size: 873,
           RefC: 1,
           Id: 15,
           Data: make([]uint32, 873),
       }
   }
   return array15;
}

