package main
import "math/rand"
var _ = rand.Intn
func Func11(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop3 int = 0;
   var loopLimit3 int = (50)/3 + 1;
   for ; loop3 < loopLimit3; loop3++ {
      if (PATH0 & 1) != 0 {
         var array5 *Array
         if pCounter > 0 {
             array5 = vars.Data[pCounter-1]
             pCounter--
             array5.RefC++
         } else {
             array5 = &Array{
                 Size: 736,
                 RefC: 1,
                 Id: 5,
                 Data: make([]uint32, 736),
             }
         }
         var loop4 int = 0;
         var loopLimit4 int = (50)/4 + 1;
         for ; loop4 < loopLimit4; loop4++ {
            for i := 0; i < array5.Size; i++ {
                array5.Data[i]--
            }
            for i := 0; i < array5.Size; i++ {
                if array5.Data[i] == 67 {
                    return array5
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array5
         var array6 *Array = Func28(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array6.RefC--
         if array6.RefC == 0 {
             array6.Data = nil
             array6 = nil
         }
         array5.RefC--
         if array5.RefC == 0 {
             array5.Data = nil
             array5 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array54 *Array = Func22(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array54.RefC--
         if array54.RefC == 0 {
             array54.Data = nil
             array54 = nil
         }
      }
      var array64 *Array
      if pCounter > 0 {
          array64 = vars.Data[pCounter-1]
          pCounter--
          array64.RefC++
      } else {
          array64 = &Array{
              Size: 772,
              RefC: 1,
              Id: 64,
              Data: make([]uint32, 772),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array64
      var array65 *Array = Func23(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array68 *Array
         if pCounter > 0 {
             array68 = vars.Data[pCounter-1]
             pCounter--
             array68.RefC++
         } else {
             array68 = &Array{
                 Size: 197,
                 RefC: 1,
                 Id: 68,
                 Data: make([]uint32, 197),
             }
         }
         var loop22 int = 0;
         var loopLimit22 int = (50)/4 + 1;
         for ; loop22 < loopLimit22; loop22++ {
            for i := 0; i < array64.Size; i++ {
                array64.Data[i]--
            }
            for i := 0; i < array64.Size; i++ {
                if array64.Data[i] == 4 {
                    return array64
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array64
         params1.Data[1] = array65
         params1.Data[2] = array68
         var array69 *Array = Func36(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array69.RefC--
         if array69.RefC == 0 {
             array69.Data = nil
             array69 = nil
         }
         array68.RefC--
         if array68.RefC == 0 {
             array68.Data = nil
             array68 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array64
         params1.Data[1] = array65
         var array86 *Array = Func32(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array86.RefC--
         if array86.RefC == 0 {
             array86.Data = nil
             array86 = nil
         }
      }
      for i := 0; i < array64.Size; i++ {
          if array64.Data[i] == 10 {
              return array64
          }
      }
      array65.RefC--
      if array65.RefC == 0 {
          array65.Data = nil
          array65 = nil
      }
      array64.RefC--
      if array64.RefC == 0 {
          array64.Data = nil
          array64 = nil
      }
   }
   var array95 *Array
   if pCounter > 0 {
       array95 = vars.Data[pCounter-1]
       pCounter--
       array95.RefC++
   } else {
       array95 = &Array{
           Size: 342,
           RefC: 1,
           Id: 95,
           Data: make([]uint32, 342),
       }
   }
   return array95;
}

