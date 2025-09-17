package main
import "math/rand"
var _ = rand.Intn
func Func4(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array142 *Array
   if pCounter > 0 {
       array142 = vars.Data[pCounter-1]
       pCounter--
       array142.RefC++
   } else {
       array142 = &Array{
           Size: 681,
           RefC: 1,
           Id: 142,
           Data: make([]uint32, 681),
       }
   }
   var loop42 int = 0;
   var loopLimit42 int = (50)/3 + 1;
   for ; loop42 < loopLimit42; loop42++ {
      if (PATH0 & 1) != 0 {
         var array143 *Array
         if pCounter > 0 {
             array143 = vars.Data[pCounter-1]
             pCounter--
             array143.RefC++
         } else {
             array143 = &Array{
                 Size: 647,
                 RefC: 1,
                 Id: 143,
                 Data: make([]uint32, 647),
             }
         }
         var loop43 int = 0;
         var loopLimit43 int = (50)/4 + 1;
         for ; loop43 < loopLimit43; loop43++ {
            for i := 0; i < array142.Size; i++ {
                array142.Data[i]--
            }
            for i := 0; i < array143.Size; i++ {
                if array143.Data[i] == 51 {
                    return array143
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array142
         params0.Data[1] = array143
         var array144 *Array = Func24(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array144.RefC--
         if array144.RefC == 0 {
             array144.Data = nil
             array144 = nil
         }
         array143.RefC--
         if array143.RefC == 0 {
             array143.Data = nil
             array143 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array142
         var array145 *Array = Func16(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array145.RefC--
         if array145.RefC == 0 {
             array145.Data = nil
             array145 = nil
         }
      }
      var array146 *Array
      if pCounter > 0 {
          array146 = vars.Data[pCounter-1]
          pCounter--
          array146.RefC++
      } else {
          array146 = &Array{
              Size: 215,
              RefC: 1,
              Id: 146,
              Data: make([]uint32, 215),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array142
      params0.Data[1] = array146
      var array147 *Array = Func17(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array148 *Array
         if pCounter > 0 {
             array148 = vars.Data[pCounter-1]
             pCounter--
             array148.RefC++
         } else {
             array148 = &Array{
                 Size: 629,
                 RefC: 1,
                 Id: 148,
                 Data: make([]uint32, 629),
             }
         }
         var loop44 int = 0;
         var loopLimit44 int = (50)/4 + 1;
         for ; loop44 < loopLimit44; loop44++ {
            for i := 0; i < array146.Size; i++ {
                array146.Data[i]--
            }
            for i := 0; i < array142.Size; i++ {
                if array142.Data[i] == 85 {
                    return array142
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array142
         params1.Data[1] = array146
         params1.Data[2] = array147
         params1.Data[3] = array148
         var array149 *Array = Func28(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array149.RefC--
         if array149.RefC == 0 {
             array149.Data = nil
             array149 = nil
         }
         array148.RefC--
         if array148.RefC == 0 {
             array148.Data = nil
             array148 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array142
         params1.Data[1] = array146
         params1.Data[2] = array147
         var array150 *Array = Func22(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array150.RefC--
         if array150.RefC == 0 {
             array150.Data = nil
             array150 = nil
         }
      }
      for i := 0; i < array146.Size; i++ {
          if array146.Data[i] == 38 {
              return array146
          }
      }
      array147.RefC--
      if array147.RefC == 0 {
          array147.Data = nil
          array147 = nil
      }
      array146.RefC--
      if array146.RefC == 0 {
          array146.Data = nil
          array146 = nil
      }
   }
   for i := 0; i < array142.Size; i++ {
       array142.Data[i]--
   }
   for i := 0; i < array142.Size; i++ {
       if array142.Data[i] == 89 {
           return array142
       }
   }
   return array142;
}

