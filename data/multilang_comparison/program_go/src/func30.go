package main
import "math/rand"
var _ = rand.Intn
func Func30(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array16 *Array
      if pCounter > 0 {
          array16 = vars.Data[pCounter-1]
          pCounter--
          array16.RefC++
      } else {
          array16 = &Array{
              Size: 84,
              RefC: 1,
              Id: 16,
              Data: make([]uint32, 84),
          }
      }
      var loop8 int = 0;
      var loopLimit8 int = (50)/4 + 1;
      for ; loop8 < loopLimit8; loop8++ {
         for i := 0; i < array16.Size; i++ {
             array16.Data[i]--
         }
         for i := 0; i < array16.Size; i++ {
             if array16.Data[i] == 5 {
                 return array16
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array16
      var array17 *Array = Func42(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array17.RefC--
      if array17.RefC == 0 {
          array17.Data = nil
          array17 = nil
      }
      array16.RefC--
      if array16.RefC == 0 {
          array16.Data = nil
          array16 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array24 *Array = Func34(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array24.RefC--
      if array24.RefC == 0 {
          array24.Data = nil
          array24 = nil
      }
   }
   var array26 *Array
   if pCounter > 0 {
       array26 = vars.Data[pCounter-1]
       pCounter--
       array26.RefC++
   } else {
       array26 = &Array{
           Size: 795,
           RefC: 1,
           Id: 26,
           Data: make([]uint32, 795),
       }
   }
   return array26;
}

