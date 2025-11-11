package main
import "math/rand"
var _ = rand.Intn
func Func3(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array195 *Array
   if pCounter > 0 {
       array195 = vars.Data[pCounter-1]
       pCounter--
       array195.RefC++
   } else {
       array195 = &Array{
           Size: 57,
           RefC: 1,
           Id: 195,
           Data: make([]uint32, 57),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array195
   var array196 *Array = Func6(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop56 int = 0;
   var loopLimit56 int = (50)/2 + 1;
   for ; loop56 < loopLimit56; loop56++ {
      for i := 0; i < array196.Size; i++ {
          array196.Data[i]++
      }
   }
   for i := 0; i < array195.Size; i++ {
       if array195.Data[i] == 91 {
           return array195
       }
   }
   array195.RefC--
   if array195.RefC == 0 {
       array195.Data = nil
       array195 = nil
   }
   return array196;
}

