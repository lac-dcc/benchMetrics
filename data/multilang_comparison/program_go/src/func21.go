package main
import "math/rand"
var _ = rand.Intn
func Func21(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array173 *Array
   if pCounter > 0 {
       array173 = vars.Data[pCounter-1]
       pCounter--
       array173.RefC++
   } else {
       array173 = &Array{
           Size: 189,
           RefC: 1,
           Id: 173,
           Data: make([]uint32, 189),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array173
   var array174 *Array = Func23(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array175 *Array
      if pCounter > 0 {
          array175 = vars.Data[pCounter-1]
          pCounter--
          array175.RefC++
      } else {
          array175 = &Array{
              Size: 641,
              RefC: 1,
              Id: 175,
              Data: make([]uint32, 641),
          }
      }
      var loop51 int = 0;
      var loopLimit51 int = (50)/3 + 1;
      for ; loop51 < loopLimit51; loop51++ {
         for i := 0; i < array175.Size; i++ {
             array175.Data[i]--
         }
         for i := 0; i < array173.Size; i++ {
             if array173.Data[i] == 87 {
                 return array173
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array173
      params1.Data[1] = array174
      params1.Data[2] = array175
      var array176 *Array = Func36(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array176.RefC--
      if array176.RefC == 0 {
          array176.Data = nil
          array176 = nil
      }
      array175.RefC--
      if array175.RefC == 0 {
          array175.Data = nil
          array175 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array173
      params1.Data[1] = array174
      var array177 *Array = Func32(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array177.RefC--
      if array177.RefC == 0 {
          array177.Data = nil
          array177 = nil
      }
   }
   array174.RefC--
   if array174.RefC == 0 {
       array174.Data = nil
       array174 = nil
   }
   return array173;
}

