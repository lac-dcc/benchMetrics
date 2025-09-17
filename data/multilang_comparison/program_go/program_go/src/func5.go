package main
import "math/rand"
var _ = rand.Intn
func Func5(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array153 *Array
   if pCounter > 0 {
       array153 = vars.Data[pCounter-1]
       pCounter--
       array153.RefC++
   } else {
       array153 = &Array{
           Size: 829,
           RefC: 1,
           Id: 153,
           Data: make([]uint32, 829),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array153
   var array154 *Array = Func10(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop45 int = 0;
   var loopLimit45 int = (50)/3 + 1;
   for ; loop45 < loopLimit45; loop45++ {
      for i := 0; i < array153.Size; i++ {
          array153.Data[i]++
      }
   }
   for i := 0; i < array154.Size; i++ {
       if array154.Data[i] == 69 {
           return array154
       }
   }
   array154.RefC--
   if array154.RefC == 0 {
       array154.Data = nil
       array154 = nil
   }
   return array153;
}

