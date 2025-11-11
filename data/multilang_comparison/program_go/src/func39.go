package main
import "math/rand"
var _ = rand.Intn
func Func39(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array56 *Array
   if pCounter > 0 {
       array56 = vars.Data[pCounter-1]
       pCounter--
       array56.RefC++
   } else {
       array56 = &Array{
           Size: 143,
           RefC: 1,
           Id: 56,
           Data: make([]uint32, 143),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array56
   var array57 *Array = Func41(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   array56.RefC--
   if array56.RefC == 0 {
       array56.Data = nil
       array56 = nil
   }
   return array57;
}

