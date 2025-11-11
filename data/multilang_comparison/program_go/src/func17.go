package main
import "math/rand"
var _ = rand.Intn
func Func17(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array104 *Array
   if pCounter > 0 {
       array104 = vars.Data[pCounter-1]
       pCounter--
       array104.RefC++
   } else {
       array104 = &Array{
           Size: 269,
           RefC: 1,
           Id: 104,
           Data: make([]uint32, 269),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array104
   var array105 *Array = Func24(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop31 int = 0;
   var loopLimit31 int = (50)/3 + 1;
   for ; loop31 < loopLimit31; loop31++ {
      for i := 0; i < array104.Size; i++ {
          array104.Data[i]++
      }
   }
   for i := 0; i < array104.Size; i++ {
       if array104.Data[i] == 92 {
           return array104
       }
   }
   array105.RefC--
   if array105.RefC == 0 {
       array105.Data = nil
       array105 = nil
   }
   return array104;
}

