package main
import "math/rand"
var _ = rand.Intn
func Func21(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array141 *Array
   if pCounter > 0 {
       array141 = vars.Data[pCounter-1]
       pCounter--
       array141.RefC++
   } else {
       array141 = &Array{
           Size: 43,
           RefC: 1,
           Id: 141,
           Data: make([]uint32, 43),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array141
   var array142 *Array = Func23(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array143 *Array
      if pCounter > 0 {
          array143 = vars.Data[pCounter-1]
          pCounter--
          array143.RefC++
      } else {
          array143 = &Array{
              Size: 428,
              RefC: 1,
              Id: 143,
              Data: make([]uint32, 428),
          }
      }
      var loop42 int = 0;
      var loopLimit42 int = (50)/3 + 1;
      for ; loop42 < loopLimit42; loop42++ {
         for i := 0; i < array141.Size; i++ {
             array141.Data[i]--
         }
         for i := 0; i < array143.Size; i++ {
             if array143.Data[i] == 81 {
                 return array143
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array141
      params1.Data[1] = array142
      params1.Data[2] = array143
      var array144 *Array = Func36(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array144.RefC--
      if array144.RefC == 0 {
          array144.Data = nil
          array144 = nil
      }
      array143.RefC--
      if array143.RefC == 0 {
          array143.Data = nil
          array143 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array141
      params1.Data[1] = array142
      var array145 *Array = Func32(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array145.RefC--
      if array145.RefC == 0 {
          array145.Data = nil
          array145 = nil
      }
   }
   array141.RefC--
   if array141.RefC == 0 {
       array141.Data = nil
       array141 = nil
   }
   return array142;
}

