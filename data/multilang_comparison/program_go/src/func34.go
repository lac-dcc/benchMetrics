package main
import "math/rand"
var _ = rand.Intn
func Func34(vars *ArrayParam, loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array25 *Array
   if pCounter > 0 {
       array25 = vars.Data[pCounter-1]
       pCounter--
       array25.RefC++
   } else {
       array25 = &Array{
           Size: 368,
           RefC: 1,
           Id: 25,
           Data: make([]uint32, 368),
       }
   }
   var loop9 int = 0;
   var loopLimit9 int = (50)/4 + 1;
   for ; loop9 < loopLimit9; loop9++ {
      for i := 0; i < array25.Size; i++ {
          if array25.Data[i] == 12 {
              return array25
          }
      }
   }
   for i := 0; i < array25.Size; i++ {
       array25.Data[i]--
   }
   for i := 0; i < array25.Size; i++ {
       if array25.Data[i] == 94 {
           return array25
       }
   }
   return array25;
}

