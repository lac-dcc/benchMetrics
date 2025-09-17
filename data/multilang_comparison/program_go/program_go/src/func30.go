package main
import "math/rand"
var _ = rand.Intn
func Func30(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array27 *Array
      if pCounter > 0 {
          array27 = vars.Data[pCounter-1]
          pCounter--
          array27.RefC++
      } else {
          array27 = &Array{
              Size: 434,
              RefC: 1,
              Id: 27,
              Data: make([]uint32, 434),
          }
      }
      var loop10 int = 0;
      var loopLimit10 int = (50)/4 + 1;
      for ; loop10 < loopLimit10; loop10++ {
         for i := 0; i < array27.Size; i++ {
             array27.Data[i]--
         }
         for i := 0; i < array27.Size; i++ {
             if array27.Data[i] == 1 {
                 return array27
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array27
      var array28 *Array = Func42(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array28.RefC--
      if array28.RefC == 0 {
          array28.Data = nil
          array28 = nil
      }
      array27.RefC--
      if array27.RefC == 0 {
          array27.Data = nil
          array27 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array39 *Array = Func34(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array39.RefC--
      if array39.RefC == 0 {
          array39.Data = nil
          array39 = nil
      }
   }
   var array45 *Array
   if pCounter > 0 {
       array45 = vars.Data[pCounter-1]
       pCounter--
       array45.RefC++
   } else {
       array45 = &Array{
           Size: 841,
           RefC: 1,
           Id: 45,
           Data: make([]uint32, 841),
       }
   }
   return array45;
}

