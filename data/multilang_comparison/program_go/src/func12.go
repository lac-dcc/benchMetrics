package main
import "math/rand"
var _ = rand.Intn
func Func12(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array66 *Array
      if pCounter > 0 {
          array66 = vars.Data[pCounter-1]
          pCounter--
          array66.RefC++
      } else {
          array66 = &Array{
              Size: 786,
              RefC: 1,
              Id: 66,
              Data: make([]uint32, 786),
          }
      }
      var loop21 int = 0;
      var loopLimit21 int = (50)/3 + 1;
      for ; loop21 < loopLimit21; loop21++ {
         for i := 0; i < array66.Size; i++ {
             array66.Data[i]--
         }
         for i := 0; i < array66.Size; i++ {
             if array66.Data[i] == 42 {
                 return array66
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array66
      var array67 *Array = Func24(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array67.RefC--
      if array67.RefC == 0 {
          array67.Data = nil
          array67 = nil
      }
      array66.RefC--
      if array66.RefC == 0 {
          array66.Data = nil
          array66 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array90 *Array = Func16(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array90.RefC--
      if array90.RefC == 0 {
          array90.Data = nil
          array90 = nil
      }
   }
   var array100 *Array
   if pCounter > 0 {
       array100 = vars.Data[pCounter-1]
       pCounter--
       array100.RefC++
   } else {
       array100 = &Array{
           Size: 940,
           RefC: 1,
           Id: 100,
           Data: make([]uint32, 940),
       }
   }
   return array100;
}

