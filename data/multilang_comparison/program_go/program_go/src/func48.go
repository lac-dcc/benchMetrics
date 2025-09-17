package main
import "math/rand"
var _ = rand.Intn
func Func48(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array13 *Array
   if pCounter > 0 {
       array13 = vars.Data[pCounter-1]
       pCounter--
       array13.RefC++
   } else {
       array13 = &Array{
           Size: 370,
           RefC: 1,
           Id: 13,
           Data: make([]uint32, 370),
       }
   }
   return array13;
}

