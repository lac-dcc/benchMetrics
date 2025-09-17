package main
import "math/rand"
var _ = rand.Intn
func Func8(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array202 *Array
      if pCounter > 0 {
          array202 = vars.Data[pCounter-1]
          pCounter--
          array202.RefC++
      } else {
          array202 = &Array{
              Size: 796,
              RefC: 1,
              Id: 202,
              Data: make([]uint32, 796),
          }
      }
      var loop59 int = 0;
      var loopLimit59 int = (50)/2 + 1;
      for ; loop59 < loopLimit59; loop59++ {
         for i := 0; i < array202.Size; i++ {
             array202.Data[i]--
         }
         for i := 0; i < array202.Size; i++ {
             if array202.Data[i] == 80 {
                 return array202
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array202
      var array203 *Array = Func18(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array203.RefC--
      if array203.RefC == 0 {
          array203.Data = nil
          array203 = nil
      }
      array202.RefC--
      if array202.RefC == 0 {
          array202.Data = nil
          array202 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array204 *Array = Func14(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array204.RefC--
      if array204.RefC == 0 {
          array204.Data = nil
          array204 = nil
      }
   }
   var array205 *Array
   if pCounter > 0 {
       array205 = vars.Data[pCounter-1]
       pCounter--
       array205.RefC++
   } else {
       array205 = &Array{
           Size: 812,
           RefC: 1,
           Id: 205,
           Data: make([]uint32, 812),
       }
   }
   return array205;
}

