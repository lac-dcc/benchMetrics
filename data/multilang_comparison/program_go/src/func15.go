package main
import "math/rand"
var _ = rand.Intn
func Func15(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array209 *Array
   if pCounter > 0 {
       array209 = vars.Data[pCounter-1]
       pCounter--
       array209.RefC++
   } else {
       array209 = &Array{
           Size: 744,
           RefC: 1,
           Id: 209,
           Data: make([]uint32, 744),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array209
   var array210 *Array = Func18(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   var loop60 int = 0;
   var loopLimit60 int = (50)/2 + 1;
   for ; loop60 < loopLimit60; loop60++ {
      for i := 0; i < array210.Size; i++ {
          array210.Data[i]++
      }
   }
   for i := 0; i < array209.Size; i++ {
       if array209.Data[i] == 36 {
           return array209
       }
   }
   array210.RefC--
   if array210.RefC == 0 {
       array210.Data = nil
       array210 = nil
   }
   return array209;
}

