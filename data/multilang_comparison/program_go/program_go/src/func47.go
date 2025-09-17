package main
import "math/rand"
var _ = rand.Intn
func Func47(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array11 *Array
   if pCounter > 0 {
       array11 = vars.Data[pCounter-1]
       pCounter--
       array11.RefC++
   } else {
       array11 = &Array{
           Size: 919,
           RefC: 1,
           Id: 11,
           Data: make([]uint32, 919),
       }
   }
   return array11;
}

