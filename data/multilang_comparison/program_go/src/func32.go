package main
import "math/rand"
var _ = rand.Intn
func Func32(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array59 *Array
   if pCounter > 0 {
       array59 = vars.Data[pCounter-1]
       pCounter--
       array59.RefC++
   } else {
       array59 = &Array{
           Size: 538,
           RefC: 1,
           Id: 59,
           Data: make([]uint32, 538),
       }
   }
   var loop19 int = 0;
   var loopLimit19 int = (50)/4 + 1;
   for ; loop19 < loopLimit19; loop19++ {
      if (PATH0 & 1) != 0 {
         var array60 *Array
         if pCounter > 0 {
             array60 = vars.Data[pCounter-1]
             pCounter--
             array60.RefC++
         } else {
             array60 = &Array{
                 Size: 606,
                 RefC: 1,
                 Id: 60,
                 Data: make([]uint32, 606),
             }
         }
         var loop20 int = 0;
         var loopLimit20 int = (50)/5 + 1;
         for ; loop20 < loopLimit20; loop20++ {
            for i := 0; i < array59.Size; i++ {
                array59.Data[i]--
            }
            for i := 0; i < array59.Size; i++ {
                if array59.Data[i] == 18 {
                    return array59
                }
            }
         }
         array60.RefC--
         if array60.RefC == 0 {
             array60.Data = nil
             array60 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array59
         var array61 *Array = Func40(&params0, loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array61.RefC--
         if array61.RefC == 0 {
             array61.Data = nil
             array61 = nil
         }
      }
      var array62 *Array
      if pCounter > 0 {
          array62 = vars.Data[pCounter-1]
          pCounter--
          array62.RefC++
      } else {
          array62 = &Array{
              Size: 369,
              RefC: 1,
              Id: 62,
              Data: make([]uint32, 369),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array59
      params0.Data[1] = array62
      var array63 *Array = Func41(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      for i := 0; i < array59.Size; i++ {
          if array59.Data[i] == 24 {
              return array59
          }
      }
      array63.RefC--
      if array63.RefC == 0 {
          array63.Data = nil
          array63 = nil
      }
      array62.RefC--
      if array62.RefC == 0 {
          array62.Data = nil
          array62 = nil
      }
   }
   for i := 0; i < array59.Size; i++ {
       array59.Data[i]--
   }
   for i := 0; i < array59.Size; i++ {
       if array59.Data[i] == 83 {
           return array59
       }
   }
   return array59;
}

