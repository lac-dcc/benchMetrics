package main
import "math/rand"
var _ = rand.Intn
func Func2(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array215 *Array
   if pCounter > 0 {
       array215 = vars.Data[pCounter-1]
       pCounter--
       array215.RefC++
   } else {
       array215 = &Array{
           Size: 993,
           RefC: 1,
           Id: 215,
           Data: make([]uint32, 993),
       }
   }
   var loop62 int = 0;
   var loopLimit62 int = (50)/2 + 1;
   for ; loop62 < loopLimit62; loop62++ {
      if (PATH0 & 1) != 0 {
         var array216 *Array
         if pCounter > 0 {
             array216 = vars.Data[pCounter-1]
             pCounter--
             array216.RefC++
         } else {
             array216 = &Array{
                 Size: 918,
                 RefC: 1,
                 Id: 216,
                 Data: make([]uint32, 918),
             }
         }
         var loop63 int = 0;
         var loopLimit63 int = (50)/3 + 1;
         for ; loop63 < loopLimit63; loop63++ {
            for i := 0; i < array216.Size; i++ {
                array216.Data[i]--
            }
            for i := 0; i < array215.Size; i++ {
                if array215.Data[i] == 22 {
                    return array215
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array215
         params0.Data[1] = array216
         var array217 *Array = Func18(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array217.RefC--
         if array217.RefC == 0 {
             array217.Data = nil
             array217 = nil
         }
         array216.RefC--
         if array216.RefC == 0 {
             array216.Data = nil
             array216 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array215
         var array218 *Array = Func14(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array218.RefC--
         if array218.RefC == 0 {
             array218.Data = nil
             array218 = nil
         }
      }
      var array219 *Array
      if pCounter > 0 {
          array219 = vars.Data[pCounter-1]
          pCounter--
          array219.RefC++
      } else {
          array219 = &Array{
              Size: 574,
              RefC: 1,
              Id: 219,
              Data: make([]uint32, 574),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array215
      params0.Data[1] = array219
      var array220 *Array = Func15(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array221 *Array
         if pCounter > 0 {
             array221 = vars.Data[pCounter-1]
             pCounter--
             array221.RefC++
         } else {
             array221 = &Array{
                 Size: 486,
                 RefC: 1,
                 Id: 221,
                 Data: make([]uint32, 486),
             }
         }
         var loop64 int = 0;
         var loopLimit64 int = (50)/3 + 1;
         for ; loop64 < loopLimit64; loop64++ {
            for i := 0; i < array219.Size; i++ {
                array219.Data[i]--
            }
            for i := 0; i < array221.Size; i++ {
                if array221.Data[i] == 74 {
                    return array221
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array215
         params1.Data[1] = array219
         params1.Data[2] = array220
         params1.Data[3] = array221
         var array222 *Array = Func24(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array222.RefC--
         if array222.RefC == 0 {
             array222.Data = nil
             array222 = nil
         }
         array221.RefC--
         if array221.RefC == 0 {
             array221.Data = nil
             array221 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array215
         params1.Data[1] = array219
         params1.Data[2] = array220
         var array223 *Array = Func16(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array223.RefC--
         if array223.RefC == 0 {
             array223.Data = nil
             array223 = nil
         }
      }
      for i := 0; i < array215.Size; i++ {
          if array215.Data[i] == 75 {
              return array215
          }
      }
      array220.RefC--
      if array220.RefC == 0 {
          array220.Data = nil
          array220 = nil
      }
      array219.RefC--
      if array219.RefC == 0 {
          array219.Data = nil
          array219 = nil
      }
   }
   for i := 0; i < array215.Size; i++ {
       array215.Data[i]--
   }
   for i := 0; i < array215.Size; i++ {
       if array215.Data[i] == 10 {
           return array215
       }
   }
   return array215;
}

