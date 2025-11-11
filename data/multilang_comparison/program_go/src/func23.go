package main
import "math/rand"
var _ = rand.Intn
func Func23(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array45 *Array
   if pCounter > 0 {
       array45 = vars.Data[pCounter-1]
       pCounter--
       array45.RefC++
   } else {
       array45 = &Array{
           Size: 555,
           RefC: 1,
           Id: 45,
           Data: make([]uint32, 555),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array45
   var array46 *Array = Func28(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop15 int = 0;
   var loopLimit15 int = (50)/4 + 1;
   for ; loop15 < loopLimit15; loop15++ {
      for i := 0; i < array45.Size; i++ {
          array45.Data[i]++
      }
   }
   for i := 0; i < array45.Size; i++ {
       if array45.Data[i] == 41 {
           return array45
       }
   }
   array46.RefC--
   if array46.RefC == 0 {
       array46.Data = nil
       array46 = nil
   }
   return array45;
}

