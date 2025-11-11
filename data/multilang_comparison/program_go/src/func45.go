package main
import "math/rand"
var _ = rand.Intn
func Func45(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array23 *Array
   if pCounter > 0 {
       array23 = vars.Data[pCounter-1]
       pCounter--
       array23.RefC++
   } else {
       array23 = &Array{
           Size: 403,
           RefC: 1,
           Id: 23,
           Data: make([]uint32, 403),
       }
   }
   return array23;
}

