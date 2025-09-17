package main
import "math/rand"
var _ = rand.Intn
func Func23(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array66 *Array
   if pCounter > 0 {
       array66 = vars.Data[pCounter-1]
       pCounter--
       array66.RefC++
   } else {
       array66 = &Array{
           Size: 139,
           RefC: 1,
           Id: 66,
           Data: make([]uint32, 139),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array66
   var array67 *Array = Func28(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop21 int = 0;
   var loopLimit21 int = (50)/4 + 1;
   for ; loop21 < loopLimit21; loop21++ {
      for i := 0; i < array67.Size; i++ {
          array67.Data[i]++
      }
   }
   for i := 0; i < array66.Size; i++ {
       if array66.Data[i] == 42 {
           return array66
       }
   }
   array67.RefC--
   if array67.RefC == 0 {
       array67.Data = nil
       array67 = nil
   }
   return array66;
}

