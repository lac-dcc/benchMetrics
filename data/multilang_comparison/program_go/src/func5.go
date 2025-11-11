package main
import "math/rand"
var _ = rand.Intn
func Func5(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array121 *Array
   if pCounter > 0 {
       array121 = vars.Data[pCounter-1]
       pCounter--
       array121.RefC++
   } else {
       array121 = &Array{
           Size: 506,
           RefC: 1,
           Id: 121,
           Data: make([]uint32, 506),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array121
   var array122 *Array = Func10(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop36 int = 0;
   var loopLimit36 int = (50)/3 + 1;
   for ; loop36 < loopLimit36; loop36++ {
      for i := 0; i < array121.Size; i++ {
          array121.Data[i]++
      }
   }
   for i := 0; i < array121.Size; i++ {
       if array121.Data[i] == 28 {
           return array121
       }
   }
   array121.RefC--
   if array121.RefC == 0 {
       array121.Data = nil
       array121 = nil
   }
   return array122;
}

