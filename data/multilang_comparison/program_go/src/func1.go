package main
import "math/rand"
var _ = rand.Intn
func Func1(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array193 *Array
   if pCounter > 0 {
       array193 = vars.Data[pCounter-1]
       pCounter--
       array193.RefC++
   } else {
       array193 = &Array{
           Size: 462,
           RefC: 1,
           Id: 193,
           Data: make([]uint32, 462),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array193
   var array194 *Array = Func3(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array197 *Array
      if pCounter > 0 {
          array197 = vars.Data[pCounter-1]
          pCounter--
          array197.RefC++
      } else {
          array197 = &Array{
              Size: 951,
              RefC: 1,
              Id: 197,
              Data: make([]uint32, 951),
          }
      }
      var loop57 int = 0;
      var loopLimit57 int = (50)/2 + 1;
      for ; loop57 < loopLimit57; loop57++ {
         for i := 0; i < array193.Size; i++ {
             array193.Data[i]--
         }
         for i := 0; i < array194.Size; i++ {
             if array194.Data[i] == 37 {
                 return array194
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array193
      params1.Data[1] = array194
      params1.Data[2] = array197
      var array198 *Array = Func10(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array198.RefC--
      if array198.RefC == 0 {
          array198.Data = nil
          array198 = nil
      }
      array197.RefC--
      if array197.RefC == 0 {
          array197.Data = nil
          array197 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array193
      params1.Data[1] = array194
      var array199 *Array = Func4(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array199.RefC--
      if array199.RefC == 0 {
          array199.Data = nil
          array199 = nil
      }
   }
   array193.RefC--
   if array193.RefC == 0 {
       array193.Data = nil
       array193 = nil
   }
   return array194;
}

