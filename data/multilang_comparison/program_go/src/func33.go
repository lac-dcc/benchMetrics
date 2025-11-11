package main
import "math/rand"
var _ = rand.Intn
func Func33(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array85 *Array
   if pCounter > 0 {
       array85 = vars.Data[pCounter-1]
       pCounter--
       array85.RefC++
   } else {
       array85 = &Array{
           Size: 163,
           RefC: 1,
           Id: 85,
           Data: make([]uint32, 163),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array85
   var array86 *Array = Func36(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop26 int = 0;
   var loopLimit26 int = (50)/3 + 1;
   for ; loop26 < loopLimit26; loop26++ {
      for i := 0; i < array86.Size; i++ {
          array86.Data[i]++
      }
   }
   for i := 0; i < array85.Size; i++ {
       if array85.Data[i] == 59 {
           return array85
       }
   }
   array85.RefC--
   if array85.RefC == 0 {
       array85.Data = nil
       array85 = nil
   }
   return array86;
}

