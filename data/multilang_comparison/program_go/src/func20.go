package main
import "math/rand"
var _ = rand.Intn
func Func20(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array168 *Array
      if pCounter > 0 {
          array168 = vars.Data[pCounter-1]
          pCounter--
          array168.RefC++
      } else {
          array168 = &Array{
              Size: 631,
              RefC: 1,
              Id: 168,
              Data: make([]uint32, 631),
          }
      }
      var loop50 int = 0;
      var loopLimit50 int = (50)/3 + 1;
      for ; loop50 < loopLimit50; loop50++ {
         for i := 0; i < array168.Size; i++ {
             array168.Data[i]--
         }
         for i := 0; i < array168.Size; i++ {
             if array168.Data[i] == 27 {
                 return array168
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array168
      var array169 *Array = Func28(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array169.RefC--
      if array169.RefC == 0 {
          array169.Data = nil
          array169 = nil
      }
      array168.RefC--
      if array168.RefC == 0 {
          array168.Data = nil
          array168 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array170 *Array = Func22(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array170.RefC--
      if array170.RefC == 0 {
          array170.Data = nil
          array170 = nil
      }
   }
   var array171 *Array
   if pCounter > 0 {
       array171 = vars.Data[pCounter-1]
       pCounter--
       array171.RefC++
   } else {
       array171 = &Array{
           Size: 512,
           RefC: 1,
           Id: 171,
           Data: make([]uint32, 512),
       }
   }
   return array171;
}

