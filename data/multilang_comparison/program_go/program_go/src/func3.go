package main
import "math/rand"
var _ = rand.Intn
func Func3(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array227 *Array
   if pCounter > 0 {
       array227 = vars.Data[pCounter-1]
       pCounter--
       array227.RefC++
   } else {
       array227 = &Array{
           Size: 328,
           RefC: 1,
           Id: 227,
           Data: make([]uint32, 328),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array227
   var array228 *Array = Func6(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop65 int = 0;
   var loopLimit65 int = (50)/2 + 1;
   for ; loop65 < loopLimit65; loop65++ {
      for i := 0; i < array227.Size; i++ {
          array227.Data[i]++
      }
   }
   for i := 0; i < array227.Size; i++ {
       if array227.Data[i] == 17 {
           return array227
       }
   }
   array228.RefC--
   if array228.RefC == 0 {
       array228.Data = nil
       array228 = nil
   }
   return array227;
}

