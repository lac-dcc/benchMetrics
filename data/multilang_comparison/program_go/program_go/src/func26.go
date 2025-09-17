package main
import "math/rand"
var _ = rand.Intn
func Func26(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array110 *Array
      if pCounter > 0 {
          array110 = vars.Data[pCounter-1]
          pCounter--
          array110.RefC++
      } else {
          array110 = &Array{
              Size: 590,
              RefC: 1,
              Id: 110,
              Data: make([]uint32, 590),
          }
      }
      var loop34 int = 0;
      var loopLimit34 int = (50)/3 + 1;
      for ; loop34 < loopLimit34; loop34++ {
         for i := 0; i < array110.Size; i++ {
             array110.Data[i]--
         }
         for i := 0; i < array110.Size; i++ {
             if array110.Data[i] == 19 {
                 return array110
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array110
      var array111 *Array = Func36(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array111.RefC--
      if array111.RefC == 0 {
          array111.Data = nil
          array111 = nil
      }
      array110.RefC--
      if array110.RefC == 0 {
          array110.Data = nil
          array110 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array112 *Array = Func32(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array112.RefC--
      if array112.RefC == 0 {
          array112.Data = nil
          array112 = nil
      }
   }
   var array113 *Array
   if pCounter > 0 {
       array113 = vars.Data[pCounter-1]
       pCounter--
       array113.RefC++
   } else {
       array113 = &Array{
           Size: 4,
           RefC: 1,
           Id: 113,
           Data: make([]uint32, 4),
       }
   }
   return array113;
}

