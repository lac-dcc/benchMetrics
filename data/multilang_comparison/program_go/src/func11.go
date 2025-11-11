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
         var array34 *Array = Func22(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array34.RefC--
         if array34.RefC == 0 {
             array34.Data = nil
             array34 = nil
         }
      }
      var array43 *Array
      if pCounter > 0 {
          array43 = vars.Data[pCounter-1]
          pCounter--
          array43.RefC++
      } else {
          array43 = &Array{
              Size: 618,
              RefC: 1,
              Id: 43,
              Data: make([]uint32, 618),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array43
      var array44 *Array = Func23(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array47 *Array
         if pCounter > 0 {
             array47 = vars.Data[pCounter-1]
             pCounter--
             array47.RefC++
         } else {
             array47 = &Array{
                 Size: 193,
                 RefC: 1,
                 Id: 47,
                 Data: make([]uint32, 193),
             }
         }
         var loop16 int = 0;
         var loopLimit16 int = (50)/4 + 1;
         for ; loop16 < loopLimit16; loop16++ {
            for i := 0; i < array44.Size; i++ {
                array44.Data[i]--
            }
            for i := 0; i < array47.Size; i++ {
                if array47.Data[i] == 64 {
                    return array47
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array43
         params1.Data[1] = array44
         params1.Data[2] = array47
         var array48 *Array = Func36(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array48.RefC--
         if array48.RefC == 0 {
             array48.Data = nil
             array48 = nil
         }
         array47.RefC--
         if array47.RefC == 0 {
             array47.Data = nil
             array47 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array43
         params1.Data[1] = array44
         var array58 *Array = Func32(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array58.RefC--
         if array58.RefC == 0 {
             array58.Data = nil
             array58 = nil
         }
      }
      for i := 0; i < array44.Size; i++ {
          if array44.Data[i] == 72 {
              return array44
          }
      }
      array44.RefC--
      if array44.RefC == 0 {
          array44.Data = nil
          array44 = nil
      }
      array43.RefC--
      if array43.RefC == 0 {
          array43.Data = nil
          array43 = nil
      }
   }
   var array64 *Array
   if pCounter > 0 {
       array64 = vars.Data[pCounter-1]
       pCounter--
       array64.RefC++
   } else {
       array64 = &Array{
           Size: 725,
           RefC: 1,
           Id: 64,
           Data: make([]uint32, 725),
       }
   }
   return array64;
}

