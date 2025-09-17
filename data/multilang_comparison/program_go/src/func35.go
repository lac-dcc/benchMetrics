package main
import "math/rand"
var _ = rand.Intn
func Func35(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array49 *Array
   if pCounter > 0 {
       array49 = vars.Data[pCounter-1]
       pCounter--
       array49.RefC++
   } else {
       array49 = &Array{
           Size: 491,
           RefC: 1,
           Id: 49,
           Data: make([]uint32, 491),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array49
   var array50 *Array = Func42(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop16 int = 0;
   var loopLimit16 int = (50)/4 + 1;
   for ; loop16 < loopLimit16; loop16++ {
      for i := 0; i < array50.Size; i++ {
          array50.Data[i]++
      }
   }
   for i := 0; i < array49.Size; i++ {
       if array49.Data[i] == 32 {
           return array49
       }
   }
   array49.RefC--
   if array49.RefC == 0 {
       array49.Data = nil
       array49 = nil
   }
   return array50;
}

