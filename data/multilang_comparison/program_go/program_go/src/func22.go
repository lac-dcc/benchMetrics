package main
import "math/rand"
var _ = rand.Intn
func Func22(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array55 *Array
   if pCounter > 0 {
       array55 = vars.Data[pCounter-1]
       pCounter--
       array55.RefC++
   } else {
       array55 = &Array{
           Size: 143,
           RefC: 1,
           Id: 55,
           Data: make([]uint32, 143),
       }
   }
   var loop18 int = 0;
   var loopLimit18 int = (50)/4 + 1;
   for ; loop18 < loopLimit18; loop18++ {
      if (PATH0 & 1) != 0 {
         var array56 *Array
         if pCounter > 0 {
             array56 = vars.Data[pCounter-1]
             pCounter--
             array56.RefC++
         } else {
             array56 = &Array{
                 Size: 11,
                 RefC: 1,
                 Id: 56,
                 Data: make([]uint32, 11),
             }
         }
         var loop19 int = 0;
         var loopLimit19 int = (50)/5 + 1;
         for ; loop19 < loopLimit19; loop19++ {
            for i := 0; i < array55.Size; i++ {
                array55.Data[i]--
            }
            for i := 0; i < array56.Size; i++ {
                if array56.Data[i] == 76 {
                    return array56
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array55
         params0.Data[1] = array56
         var array57 *Array = Func42(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array57.RefC--
         if array57.RefC == 0 {
             array57.Data = nil
             array57 = nil
         }
         array56.RefC--
         if array56.RefC == 0 {
             array56.Data = nil
             array56 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array55
         var array58 *Array = Func34(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array58.RefC--
         if array58.RefC == 0 {
             array58.Data = nil
             array58 = nil
         }
      }
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
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array55
      params0.Data[1] = array59
      var array60 *Array = Func35(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array61 *Array
         if pCounter > 0 {
             array61 = vars.Data[pCounter-1]
             pCounter--
             array61.RefC++
         } else {
             array61 = &Array{
                 Size: 904,
                 RefC: 1,
                 Id: 61,
                 Data: make([]uint32, 904),
             }
         }
         var loop20 int = 0;
         var loopLimit20 int = (50)/5 + 1;
         for ; loop20 < loopLimit20; loop20++ {
            for i := 0; i < array60.Size; i++ {
                array60.Data[i]--
            }
            for i := 0; i < array55.Size; i++ {
                if array55.Data[i] == 88 {
                    return array55
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array55
         params1.Data[1] = array59
         params1.Data[2] = array60
         params1.Data[3] = array61
         var array62 *Array = Func46(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array62.RefC--
         if array62.RefC == 0 {
             array62.Data = nil
             array62 = nil
         }
         array61.RefC--
         if array61.RefC == 0 {
             array61.Data = nil
             array61 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array55
         params1.Data[1] = array59
         params1.Data[2] = array60
         var array63 *Array = Func40(&params1, loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array63.RefC--
         if array63.RefC == 0 {
             array63.Data = nil
             array63 = nil
         }
      }
      for i := 0; i < array60.Size; i++ {
          if array60.Data[i] == 43 {
              return array60
          }
      }
      array60.RefC--
      if array60.RefC == 0 {
          array60.Data = nil
          array60 = nil
      }
      array59.RefC--
      if array59.RefC == 0 {
          array59.Data = nil
          array59 = nil
      }
   }
   for i := 0; i < array55.Size; i++ {
       array55.Data[i]--
   }
   for i := 0; i < array55.Size; i++ {
       if array55.Data[i] == 90 {
           return array55
       }
   }
   return array55;
}

