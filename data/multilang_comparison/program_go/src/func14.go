package main
import "math/rand"
var _ = rand.Intn
func Func14(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array147 *Array
   if pCounter > 0 {
       array147 = vars.Data[pCounter-1]
       pCounter--
       array147.RefC++
   } else {
       array147 = &Array{
           Size: 504,
           RefC: 1,
           Id: 147,
           Data: make([]uint32, 504),
       }
   }
   var loop43 int = 0;
   var loopLimit43 int = (50)/3 + 1;
   for ; loop43 < loopLimit43; loop43++ {
      if (PATH0 & 1) != 0 {
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
            for i := 0; i < array148.Size; i++ {
                array148.Data[i]--
            }
            for i := 0; i < array147.Size; i++ {
                if array147.Data[i] == 85 {
                    return array147
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array147
         params0.Data[1] = array148
         var array149 *Array = Func28(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
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
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array147
         var array150 *Array = Func22(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array150.RefC--
         if array150.RefC == 0 {
             array150.Data = nil
             array150 = nil
         }
      }
      var array151 *Array
      if pCounter > 0 {
          array151 = vars.Data[pCounter-1]
          pCounter--
          array151.RefC++
      } else {
          array151 = &Array{
              Size: 900,
              RefC: 1,
              Id: 151,
              Data: make([]uint32, 900),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array147
      params0.Data[1] = array151
      var array152 *Array = Func23(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array153 *Array
         if pCounter > 0 {
             array153 = vars.Data[pCounter-1]
             pCounter--
             array153.RefC++
         } else {
             array153 = &Array{
                 Size: 949,
                 RefC: 1,
                 Id: 153,
                 Data: make([]uint32, 949),
             }
         }
         var loop45 int = 0;
         var loopLimit45 int = (50)/4 + 1;
         for ; loop45 < loopLimit45; loop45++ {
            for i := 0; i < array151.Size; i++ {
                array151.Data[i]--
            }
            for i := 0; i < array153.Size; i++ {
                if array153.Data[i] == 88 {
                    return array153
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array147
         params1.Data[1] = array151
         params1.Data[2] = array152
         params1.Data[3] = array153
         var array154 *Array = Func36(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array154.RefC--
         if array154.RefC == 0 {
             array154.Data = nil
             array154 = nil
         }
         array153.RefC--
         if array153.RefC == 0 {
             array153.Data = nil
             array153 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array147
         params1.Data[1] = array151
         params1.Data[2] = array152
         var array155 *Array = Func32(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array155.RefC--
         if array155.RefC == 0 {
             array155.Data = nil
             array155 = nil
         }
      }
      for i := 0; i < array147.Size; i++ {
          if array147.Data[i] == 90 {
              return array147
          }
      }
      array152.RefC--
      if array152.RefC == 0 {
          array152.Data = nil
          array152 = nil
      }
      array151.RefC--
      if array151.RefC == 0 {
          array151.Data = nil
          array151 = nil
      }
   }
   for i := 0; i < array147.Size; i++ {
       array147.Data[i]--
   }
   for i := 0; i < array147.Size; i++ {
       if array147.Data[i] == 41 {
           return array147
       }
   }
   return array147;
}

