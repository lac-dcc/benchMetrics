package main
import "math/rand"
var _ = rand.Intn
func Func8(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array170 *Array
      if pCounter > 0 {
          array170 = vars.Data[pCounter-1]
          pCounter--
          array170.RefC++
      } else {
          array170 = &Array{
              Size: 627,
              RefC: 1,
              Id: 170,
              Data: make([]uint32, 627),
          }
      }
      var loop50 int = 0;
      var loopLimit50 int = (50)/2 + 1;
      for ; loop50 < loopLimit50; loop50++ {
         for i := 0; i < array170.Size; i++ {
             array170.Data[i]--
         }
         for i := 0; i < array170.Size; i++ {
             if array170.Data[i] == 14 {
                 return array170
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array170
      var array171 *Array = Func18(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array171.RefC--
      if array171.RefC == 0 {
          array171.Data = nil
          array171 = nil
      }
      array170.RefC--
      if array170.RefC == 0 {
          array170.Data = nil
          array170 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array172 *Array = Func14(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array172.RefC--
      if array172.RefC == 0 {
          array172.Data = nil
          array172 = nil
      }
   }
   var array173 *Array
   if pCounter > 0 {
       array173 = vars.Data[pCounter-1]
       pCounter--
       array173.RefC++
   } else {
       array173 = &Array{
           Size: 479,
           RefC: 1,
           Id: 173,
           Data: make([]uint32, 479),
       }
   }
   return array173;
}

