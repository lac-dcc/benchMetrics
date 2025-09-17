package main
import "math/rand"
var _ = rand.Intn
func Func45(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array36 *Array
   if pCounter > 0 {
       array36 = vars.Data[pCounter-1]
       pCounter--
       array36.RefC++
   } else {
       array36 = &Array{
           Size: 497,
           RefC: 1,
           Id: 36,
           Data: make([]uint32, 497),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array36
   var array37 *Array = Func51(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   array37.RefC--
   if array37.RefC == 0 {
       array37.Data = nil
       array37 = nil
   }
   return array36;
}

