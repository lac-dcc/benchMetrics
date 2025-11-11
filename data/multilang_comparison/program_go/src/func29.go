package main
import "math/rand"
var _ = rand.Intn
func Func29(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop5 int = 0;
   var loopLimit5 int = (50)/4 + 1;
   for ; loop5 < loopLimit5; loop5++ {
      if (PATH0 & 1) != 0 {
         var array8 *Array
         if pCounter > 0 {
             array8 = vars.Data[pCounter-1]
             pCounter--
             array8.RefC++
         } else {
             array8 = &Array{
                 Size: 802,
                 RefC: 1,
                 Id: 8,
                 Data: make([]uint32, 802),
             }
         }
         var loop6 int = 0;
         var loopLimit6 int = (50)/5 + 1;
         for ; loop6 < loopLimit6; loop6++ {
            for i := 0; i < array8.Size; i++ {
                array8.Data[i]--
            }
            for i := 0; i < array8.Size; i++ {
                if array8.Data[i] == 69 {
                    return array8
                }
            }
         }
         array8.RefC--
         if array8.RefC == 0 {
             array8.Data = nil
             array8 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array9 *Array = Func40(&params0, loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array9.RefC--
         if array9.RefC == 0 {
             array9.Data = nil
             array9 = nil
         }
      }
      var array11 *Array
      if pCounter > 0 {
          array11 = vars.Data[pCounter-1]
          pCounter--
          array11.RefC++
      } else {
          array11 = &Array{
              Size: 784,
              RefC: 1,
              Id: 11,
              Data: make([]uint32, 784),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array11
      var array12 *Array = Func41(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      for i := 0; i < array11.Size; i++ {
          if array11.Data[i] == 73 {
              return array11
          }
      }
      array12.RefC--
      if array12.RefC == 0 {
          array12.Data = nil
          array12 = nil
      }
      array11.RefC--
      if array11.RefC == 0 {
          array11.Data = nil
          array11 = nil
      }
   }
   var array14 *Array
   if pCounter > 0 {
       array14 = vars.Data[pCounter-1]
       pCounter--
       array14.RefC++
   } else {
       array14 = &Array{
           Size: 862,
           RefC: 1,
           Id: 14,
           Data: make([]uint32, 862),
       }
   }
   return array14;
}

