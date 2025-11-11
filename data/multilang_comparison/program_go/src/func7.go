package main
import "math/rand"
var _ = rand.Intn
func Func7(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop47 int = 0;
   var loopLimit47 int = (50)/2 + 1;
   for ; loop47 < loopLimit47; loop47++ {
      if (PATH0 & 1) != 0 {
         var array160 *Array
         if pCounter > 0 {
             array160 = vars.Data[pCounter-1]
             pCounter--
             array160.RefC++
         } else {
             array160 = &Array{
                 Size: 690,
                 RefC: 1,
                 Id: 160,
                 Data: make([]uint32, 690),
             }
         }
         var loop48 int = 0;
         var loopLimit48 int = (50)/3 + 1;
         for ; loop48 < loopLimit48; loop48++ {
            for i := 0; i < array160.Size; i++ {
                array160.Data[i]--
            }
            for i := 0; i < array160.Size; i++ {
                if array160.Data[i] == 57 {
                    return array160
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array160
         var array161 *Array = Func24(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array161.RefC--
         if array161.RefC == 0 {
             array161.Data = nil
             array161 = nil
         }
         array160.RefC--
         if array160.RefC == 0 {
             array160.Data = nil
             array160 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array162 *Array = Func16(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array162.RefC--
         if array162.RefC == 0 {
             array162.Data = nil
             array162 = nil
         }
      }
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
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array163
      var array164 *Array = Func17(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array165 *Array
         if pCounter > 0 {
             array165 = vars.Data[pCounter-1]
             pCounter--
             array165.RefC++
         } else {
             array165 = &Array{
                 Size: 346,
                 RefC: 1,
                 Id: 165,
                 Data: make([]uint32, 346),
             }
         }
         var loop49 int = 0;
         var loopLimit49 int = (50)/3 + 1;
         for ; loop49 < loopLimit49; loop49++ {
            for i := 0; i < array163.Size; i++ {
                array163.Data[i]--
            }
            for i := 0; i < array163.Size; i++ {
                if array163.Data[i] == 16 {
                    return array163
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array163
         params1.Data[1] = array164
         params1.Data[2] = array165
         var array166 *Array = Func28(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array166.RefC--
         if array166.RefC == 0 {
             array166.Data = nil
             array166 = nil
         }
         array165.RefC--
         if array165.RefC == 0 {
             array165.Data = nil
             array165 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array163
         params1.Data[1] = array164
         var array167 *Array = Func22(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array167.RefC--
         if array167.RefC == 0 {
             array167.Data = nil
             array167 = nil
         }
      }
      for i := 0; i < array163.Size; i++ {
          if array163.Data[i] == 47 {
              return array163
          }
      }
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
   }
   var array168 *Array
   if pCounter > 0 {
       array168 = vars.Data[pCounter-1]
       pCounter--
       array168.RefC++
   } else {
       array168 = &Array{
           Size: 970,
           RefC: 1,
           Id: 168,
           Data: make([]uint32, 970),
       }
   }
   return array168;
}

