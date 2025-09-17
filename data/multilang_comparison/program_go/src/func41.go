package main
import "math/rand"
var _ = rand.Intn
func Func41(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array20 *Array
   if pCounter > 0 {
       array20 = vars.Data[pCounter-1]
       pCounter--
       array20.RefC++
   } else {
       array20 = &Array{
           Size: 814,
           RefC: 1,
           Id: 20,
           Data: make([]uint32, 814),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array20
   var array21 *Array = Func46(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop8 int = 0;
   var loopLimit8 int = (50)/5 + 1;
   for ; loop8 < loopLimit8; loop8++ {
      for i := 0; i < array20.Size; i++ {
          array20.Data[i]++
      }
   }
   for i := 0; i < array21.Size; i++ {
       if array21.Data[i] == 50 {
           return array21
       }
   }
   array20.RefC--
   if array20.RefC == 0 {
       array20.Data = nil
       array20 = nil
   }
   return array21;
}

