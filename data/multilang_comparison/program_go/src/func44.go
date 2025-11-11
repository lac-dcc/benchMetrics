package main
import "math/rand"
var _ = rand.Intn
func Func44(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array21 *Array
   if pCounter > 0 {
       array21 = vars.Data[pCounter-1]
       pCounter--
       array21.RefC++
   } else {
       array21 = &Array{
           Size: 87,
           RefC: 1,
           Id: 21,
           Data: make([]uint32, 87),
       }
   }
   return array21;
}

