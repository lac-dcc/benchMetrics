package main
import "math/rand"
var _ = rand.Intn
func Func17(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array136 *Array
   if pCounter > 0 {
       array136 = vars.Data[pCounter-1]
       pCounter--
       array136.RefC++
   } else {
       array136 = &Array{
           Size: 436,
           RefC: 1,
           Id: 136,
           Data: make([]uint32, 436),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array136
   var array137 *Array = Func24(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop40 int = 0;
   var loopLimit40 int = (50)/3 + 1;
   for ; loop40 < loopLimit40; loop40++ {
      for i := 0; i < array137.Size; i++ {
          array137.Data[i]++
      }
   }
   for i := 0; i < array136.Size; i++ {
       if array136.Data[i] == 4 {
           return array136
       }
   }
   array137.RefC--
   if array137.RefC == 0 {
       array137.Data = nil
       array137 = nil
   }
   return array136;
}

