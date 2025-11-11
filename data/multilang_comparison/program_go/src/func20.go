package main
import "math/rand"
var _ = rand.Intn
func Func20(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array136 *Array
      if pCounter > 0 {
          array136 = vars.Data[pCounter-1]
          pCounter--
          array136.RefC++
      } else {
          array136 = &Array{
              Size: 460,
              RefC: 1,
              Id: 136,
              Data: make([]uint32, 460),
          }
      }
      var loop41 int = 0;
      var loopLimit41 int = (50)/3 + 1;
      for ; loop41 < loopLimit41; loop41++ {
         for i := 0; i < array136.Size; i++ {
             array136.Data[i]--
         }
         for i := 0; i < array136.Size; i++ {
             if array136.Data[i] == 60 {
                 return array136
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array136
      var array137 *Array = Func28(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array137.RefC--
      if array137.RefC == 0 {
          array137.Data = nil
          array137 = nil
      }
      array136.RefC--
      if array136.RefC == 0 {
          array136.Data = nil
          array136 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array138 *Array = Func22(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array138.RefC--
      if array138.RefC == 0 {
          array138.Data = nil
          array138 = nil
      }
   }
   var array139 *Array
   if pCounter > 0 {
       array139 = vars.Data[pCounter-1]
       pCounter--
       array139.RefC++
   } else {
       array139 = &Array{
           Size: 748,
           RefC: 1,
           Id: 139,
           Data: make([]uint32, 748),
       }
   }
   return array139;
}

