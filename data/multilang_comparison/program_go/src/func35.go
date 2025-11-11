package main
import "math/rand"
var _ = rand.Intn
func Func35(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array30 *Array
   if pCounter > 0 {
       array30 = vars.Data[pCounter-1]
       pCounter--
       array30.RefC++
   } else {
       array30 = &Array{
           Size: 756,
           RefC: 1,
           Id: 30,
           Data: make([]uint32, 756),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array30
   var array31 *Array = Func42(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop10 int = 0;
   var loopLimit10 int = (50)/4 + 1;
   for ; loop10 < loopLimit10; loop10++ {
      for i := 0; i < array30.Size; i++ {
          array30.Data[i]++
      }
   }
   for i := 0; i < array31.Size; i++ {
       if array31.Data[i] == 65 {
           return array31
       }
   }
   array30.RefC--
   if array30.RefC == 0 {
       array30.Data = nil
       array30 = nil
   }
   return array31;
}

