package main
import "math/rand"
var _ = rand.Intn
func Func32(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array87 *Array
   if pCounter > 0 {
       array87 = vars.Data[pCounter-1]
       pCounter--
       array87.RefC++
   } else {
       array87 = &Array{
           Size: 813,
           RefC: 1,
           Id: 87,
           Data: make([]uint32, 813),
       }
   }
   var loop27 int = 0;
   var loopLimit27 int = (50)/4 + 1;
   for ; loop27 < loopLimit27; loop27++ {
      if (PATH0 & 1) != 0 {
         var array88 *Array
         if pCounter > 0 {
             array88 = vars.Data[pCounter-1]
             pCounter--
             array88.RefC++
         } else {
             array88 = &Array{
                 Size: 668,
                 RefC: 1,
                 Id: 88,
                 Data: make([]uint32, 668),
             }
         }
         var loop28 int = 0;
         var loopLimit28 int = (50)/5 + 1;
         for ; loop28 < loopLimit28; loop28++ {
            for i := 0; i < array87.Size; i++ {
                array87.Data[i]--
            }
            for i := 0; i < array88.Size; i++ {
                if array88.Data[i] == 26 {
                    return array88
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array87
         params0.Data[1] = array88
         var array89 *Array = Func46(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array89.RefC--
         if array89.RefC == 0 {
             array89.Data = nil
             array89 = nil
         }
         array88.RefC--
         if array88.RefC == 0 {
             array88.Data = nil
             array88 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array87
         var array90 *Array = Func40(&params0, loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array90.RefC--
         if array90.RefC == 0 {
             array90.Data = nil
             array90 = nil
         }
      }
      var array91 *Array
      if pCounter > 0 {
          array91 = vars.Data[pCounter-1]
          pCounter--
          array91.RefC++
      } else {
          array91 = &Array{
              Size: 684,
              RefC: 1,
              Id: 91,
              Data: make([]uint32, 684),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array87
      params0.Data[1] = array91
      var array92 *Array = Func41(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array93 *Array
         if pCounter > 0 {
             array93 = vars.Data[pCounter-1]
             pCounter--
             array93.RefC++
         } else {
             array93 = &Array{
                 Size: 936,
                 RefC: 1,
                 Id: 93,
                 Data: make([]uint32, 936),
             }
         }
         var loop29 int = 0;
         var loopLimit29 int = (50)/5 + 1;
         for ; loop29 < loopLimit29; loop29++ {
            for i := 0; i < array93.Size; i++ {
                array93.Data[i]--
            }
            for i := 0; i < array91.Size; i++ {
                if array91.Data[i] == 56 {
                    return array91
                }
            }
         }
         array93.RefC--
         if array93.RefC == 0 {
             array93.Data = nil
             array93 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array87
         params1.Data[1] = array91
         params1.Data[2] = array92
         var array94 *Array = Func50(&params1, loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array94.RefC--
         if array94.RefC == 0 {
             array94.Data = nil
             array94 = nil
         }
      }
      for i := 0; i < array92.Size; i++ {
          if array92.Data[i] == 12 {
              return array92
          }
      }
      array92.RefC--
      if array92.RefC == 0 {
          array92.Data = nil
          array92 = nil
      }
      array91.RefC--
      if array91.RefC == 0 {
          array91.Data = nil
          array91 = nil
      }
   }
   for i := 0; i < array87.Size; i++ {
       array87.Data[i]--
   }
   for i := 0; i < array87.Size; i++ {
       if array87.Data[i] == 59 {
           return array87
       }
   }
   return array87;
}

