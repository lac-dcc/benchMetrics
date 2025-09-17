package main
import "math/rand"
var _ = rand.Intn
func Func13(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array134 *Array
   if pCounter > 0 {
       array134 = vars.Data[pCounter-1]
       pCounter--
       array134.RefC++
   } else {
       array134 = &Array{
           Size: 996,
           RefC: 1,
           Id: 134,
           Data: make([]uint32, 996),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array134
   var array135 *Array = Func17(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array138 *Array
      if pCounter > 0 {
          array138 = vars.Data[pCounter-1]
          pCounter--
          array138.RefC++
      } else {
          array138 = &Array{
              Size: 27,
              RefC: 1,
              Id: 138,
              Data: make([]uint32, 27),
          }
      }
      var loop41 int = 0;
      var loopLimit41 int = (50)/3 + 1;
      for ; loop41 < loopLimit41; loop41++ {
         for i := 0; i < array138.Size; i++ {
             array138.Data[i]--
         }
         for i := 0; i < array138.Size; i++ {
             if array138.Data[i] == 56 {
                 return array138
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array134
      params1.Data[1] = array135
      params1.Data[2] = array138
      var array139 *Array = Func28(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array139.RefC--
      if array139.RefC == 0 {
          array139.Data = nil
          array139 = nil
      }
      array138.RefC--
      if array138.RefC == 0 {
          array138.Data = nil
          array138 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array134
      params1.Data[1] = array135
      var array140 *Array = Func22(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array140.RefC--
      if array140.RefC == 0 {
          array140.Data = nil
          array140 = nil
      }
   }
   array134.RefC--
   if array134.RefC == 0 {
       array134.Data = nil
       array134 = nil
   }
   return array135;
}

