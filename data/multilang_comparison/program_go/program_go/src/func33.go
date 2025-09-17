package main
import "math/rand"
var _ = rand.Intn
func Func33(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array117 *Array
   if pCounter > 0 {
       array117 = vars.Data[pCounter-1]
       pCounter--
       array117.RefC++
   } else {
       array117 = &Array{
           Size: 993,
           RefC: 1,
           Id: 117,
           Data: make([]uint32, 993),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array117
   var array118 *Array = Func36(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop35 int = 0;
   var loopLimit35 int = (50)/3 + 1;
   for ; loop35 < loopLimit35; loop35++ {
      for i := 0; i < array118.Size; i++ {
          array118.Data[i]++
      }
   }
   for i := 0; i < array117.Size; i++ {
       if array117.Data[i] == 13 {
           return array117
       }
   }
   array117.RefC--
   if array117.RefC == 0 {
       array117.Data = nil
       array117 = nil
   }
   return array118;
}

