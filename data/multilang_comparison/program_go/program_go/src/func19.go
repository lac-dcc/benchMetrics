package main
import "math/rand"
var _ = rand.Intn
func Func19(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop47 int = 0;
   var loopLimit47 int = (50)/3 + 1;
   for ; loop47 < loopLimit47; loop47++ {
      if (PATH0 & 1) != 0 {
         var array158 *Array
         if pCounter > 0 {
             array158 = vars.Data[pCounter-1]
             pCounter--
             array158.RefC++
         } else {
             array158 = &Array{
                 Size: 367,
                 RefC: 1,
                 Id: 158,
                 Data: make([]uint32, 367),
             }
         }
         var loop48 int = 0;
         var loopLimit48 int = (50)/4 + 1;
         for ; loop48 < loopLimit48; loop48++ {
            for i := 0; i < array158.Size; i++ {
                array158.Data[i]--
            }
            for i := 0; i < array158.Size; i++ {
                if array158.Data[i] == 90 {
                    return array158
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array158
         var array159 *Array = Func36(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array159.RefC--
         if array159.RefC == 0 {
             array159.Data = nil
             array159 = nil
         }
         array158.RefC--
         if array158.RefC == 0 {
             array158.Data = nil
             array158 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array160 *Array = Func32(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array160.RefC--
         if array160.RefC == 0 {
             array160.Data = nil
             array160 = nil
         }
      }
      var array161 *Array
      if pCounter > 0 {
          array161 = vars.Data[pCounter-1]
          pCounter--
          array161.RefC++
      } else {
          array161 = &Array{
              Size: 168,
              RefC: 1,
              Id: 161,
              Data: make([]uint32, 168),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array161
      var array162 *Array = Func33(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array163 *Array
         if pCounter > 0 {
             array163 = vars.Data[pCounter-1]
             pCounter--
             array163.RefC++
         } else {
             array163 = &Array{
                 Size: 312,
                 RefC: 1,
                 Id: 163,
                 Data: make([]uint32, 312),
             }
         }
         var loop49 int = 0;
         var loopLimit49 int = (50)/4 + 1;
         for ; loop49 < loopLimit49; loop49++ {
            for i := 0; i < array162.Size; i++ {
                array162.Data[i]--
            }
            for i := 0; i < array162.Size; i++ {
                if array162.Data[i] == 46 {
                    return array162
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array161
         params1.Data[1] = array162
         params1.Data[2] = array163
         var array164 *Array = Func42(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array164.RefC--
         if array164.RefC == 0 {
             array164.Data = nil
             array164 = nil
         }
         array163.RefC--
         if array163.RefC == 0 {
             array163.Data = nil
             array163 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array161
         params1.Data[1] = array162
         var array165 *Array = Func34(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array165.RefC--
         if array165.RefC == 0 {
             array165.Data = nil
             array165 = nil
         }
      }
      for i := 0; i < array161.Size; i++ {
          if array161.Data[i] == 29 {
              return array161
          }
      }
      array162.RefC--
      if array162.RefC == 0 {
          array162.Data = nil
          array162 = nil
      }
      array161.RefC--
      if array161.RefC == 0 {
          array161.Data = nil
          array161 = nil
      }
   }
   var array166 *Array
   if pCounter > 0 {
       array166 = vars.Data[pCounter-1]
       pCounter--
       array166.RefC++
   } else {
       array166 = &Array{
           Size: 946,
           RefC: 1,
           Id: 166,
           Data: make([]uint32, 946),
       }
   }
   return array166;
}

