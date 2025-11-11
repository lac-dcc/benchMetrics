package main
import "math/rand"
var _ = rand.Intn
func Func15(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array177 *Array
   if pCounter > 0 {
       array177 = vars.Data[pCounter-1]
       pCounter--
       array177.RefC++
   } else {
       array177 = &Array{
           Size: 338,
           RefC: 1,
           Id: 177,
           Data: make([]uint32, 338),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array177
   var array178 *Array = Func18(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop51 int = 0;
   var loopLimit51 int = (50)/2 + 1;
   for ; loop51 < loopLimit51; loop51++ {
      for i := 0; i < array177.Size; i++ {
          array177.Data[i]++
      }
   }
   for i := 0; i < array177.Size; i++ {
       if array177.Data[i] == 17 {
           return array177
       }
   }
   array178.RefC--
   if array178.RefC == 0 {
       array178.Data = nil
       array178 = nil
   }
   return array177;
}

