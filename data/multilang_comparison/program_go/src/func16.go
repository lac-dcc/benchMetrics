package main
import "math/rand"
var _ = rand.Intn
func Func16(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array91 *Array
   if pCounter > 0 {
       array91 = vars.Data[pCounter-1]
       pCounter--
       array91.RefC++
   } else {
       array91 = &Array{
           Size: 445,
           RefC: 1,
           Id: 91,
           Data: make([]uint32, 445),
       }
   }
   var loop28 int = 0;
   var loopLimit28 int = (50)/3 + 1;
   for ; loop28 < loopLimit28; loop28++ {
      if (PATH0 & 1) != 0 {
         var array92 *Array
         if pCounter > 0 {
             array92 = vars.Data[pCounter-1]
             pCounter--
             array92.RefC++
         } else {
             array92 = &Array{
                 Size: 756,
                 RefC: 1,
                 Id: 92,
                 Data: make([]uint32, 756),
             }
         }
         var loop29 int = 0;
         var loopLimit29 int = (50)/4 + 1;
         for ; loop29 < loopLimit29; loop29++ {
            for i := 0; i < array92.Size; i++ {
                array92.Data[i]--
            }
            for i := 0; i < array91.Size; i++ {
                if array91.Data[i] == 87 {
                    return array91
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array91
         params0.Data[1] = array92
         var array93 *Array = Func36(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array93.RefC--
         if array93.RefC == 0 {
             array93.Data = nil
             array93 = nil
         }
         array92.RefC--
         if array92.RefC == 0 {
             array92.Data = nil
             array92 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array91
         var array94 *Array = Func32(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array94.RefC--
         if array94.RefC == 0 {
             array94.Data = nil
             array94 = nil
         }
      }
      var array95 *Array
      if pCounter > 0 {
          array95 = vars.Data[pCounter-1]
          pCounter--
          array95.RefC++
      } else {
          array95 = &Array{
              Size: 9,
              RefC: 1,
              Id: 95,
              Data: make([]uint32, 9),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array91
      params0.Data[1] = array95
      var array96 *Array = Func33(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array97 *Array
         if pCounter > 0 {
             array97 = vars.Data[pCounter-1]
             pCounter--
             array97.RefC++
         } else {
             array97 = &Array{
                 Size: 342,
                 RefC: 1,
                 Id: 97,
                 Data: make([]uint32, 342),
             }
         }
         var loop30 int = 0;
         var loopLimit30 int = (50)/4 + 1;
         for ; loop30 < loopLimit30; loop30++ {
            for i := 0; i < array97.Size; i++ {
                array97.Data[i]--
            }
            for i := 0; i < array96.Size; i++ {
                if array96.Data[i] == 1 {
                    return array96
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array91
         params1.Data[1] = array95
         params1.Data[2] = array96
         params1.Data[3] = array97
         var array98 *Array = Func42(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array98.RefC--
         if array98.RefC == 0 {
             array98.Data = nil
             array98 = nil
         }
         array97.RefC--
         if array97.RefC == 0 {
             array97.Data = nil
             array97 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array91
         params1.Data[1] = array95
         params1.Data[2] = array96
         var array99 *Array = Func34(&params1, loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array99.RefC--
         if array99.RefC == 0 {
             array99.Data = nil
             array99 = nil
         }
      }
      for i := 0; i < array96.Size; i++ {
          if array96.Data[i] == 99 {
              return array96
          }
      }
      array96.RefC--
      if array96.RefC == 0 {
          array96.Data = nil
          array96 = nil
      }
      array95.RefC--
      if array95.RefC == 0 {
          array95.Data = nil
          array95 = nil
      }
   }
   for i := 0; i < array91.Size; i++ {
       array91.Data[i]--
   }
   for i := 0; i < array91.Size; i++ {
       if array91.Data[i] == 39 {
           return array91
       }
   }
   return array91;
}

