package main
import "math/rand"
var _ = rand.Intn
func Func27(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array115 *Array
   if pCounter > 0 {
       array115 = vars.Data[pCounter-1]
       pCounter--
       array115.RefC++
   } else {
       array115 = &Array{
           Size: 255,
           RefC: 1,
           Id: 115,
           Data: make([]uint32, 255),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array115
   var array116 *Array = Func33(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array119 *Array
      if pCounter > 0 {
          array119 = vars.Data[pCounter-1]
          pCounter--
          array119.RefC++
      } else {
          array119 = &Array{
              Size: 754,
              RefC: 1,
              Id: 119,
              Data: make([]uint32, 754),
          }
      }
      var loop36 int = 0;
      var loopLimit36 int = (50)/3 + 1;
      for ; loop36 < loopLimit36; loop36++ {
         for i := 0; i < array115.Size; i++ {
             array115.Data[i]--
         }
         for i := 0; i < array115.Size; i++ {
             if array115.Data[i] == 44 {
                 return array115
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array115
      params1.Data[1] = array116
      params1.Data[2] = array119
      var array120 *Array = Func42(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array120.RefC--
      if array120.RefC == 0 {
          array120.Data = nil
          array120 = nil
      }
      array119.RefC--
      if array119.RefC == 0 {
          array119.Data = nil
          array119 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array115
      params1.Data[1] = array116
      var array121 *Array = Func34(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array121.RefC--
      if array121.RefC == 0 {
          array121.Data = nil
          array121 = nil
      }
   }
   array115.RefC--
   if array115.RefC == 0 {
       array115.Data = nil
       array115 = nil
   }
   return array116;
}

