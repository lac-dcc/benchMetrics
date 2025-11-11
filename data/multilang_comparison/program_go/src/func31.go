package main
import "math/rand"
var _ = rand.Intn
func Func31(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array28 *Array
   if pCounter > 0 {
       array28 = vars.Data[pCounter-1]
       pCounter--
       array28.RefC++
   } else {
       array28 = &Array{
           Size: 97,
           RefC: 1,
           Id: 28,
           Data: make([]uint32, 97),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array28
   var array29 *Array = Func35(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array32 *Array
      if pCounter > 0 {
          array32 = vars.Data[pCounter-1]
          pCounter--
          array32.RefC++
      } else {
          array32 = &Array{
              Size: 444,
              RefC: 1,
              Id: 32,
              Data: make([]uint32, 444),
          }
      }
      var loop11 int = 0;
      var loopLimit11 int = (50)/4 + 1;
      for ; loop11 < loopLimit11; loop11++ {
         for i := 0; i < array32.Size; i++ {
             array32.Data[i]--
         }
         for i := 0; i < array29.Size; i++ {
             if array29.Data[i] == 29 {
                 return array29
             }
         }
      }
      array32.RefC--
      if array32.RefC == 0 {
          array32.Data = nil
          array32 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array28
      params1.Data[1] = array29
      var array33 *Array = Func40(&params1, loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array33.RefC--
      if array33.RefC == 0 {
          array33.Data = nil
          array33 = nil
      }
   }
   array28.RefC--
   if array28.RefC == 0 {
       array28.Data = nil
       array28 = nil
   }
   return array29;
}

