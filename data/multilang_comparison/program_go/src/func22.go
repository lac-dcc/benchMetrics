package main
import "math/rand"
var _ = rand.Intn
func Func22(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array35 *Array
   if pCounter > 0 {
       array35 = vars.Data[pCounter-1]
       pCounter--
       array35.RefC++
   } else {
       array35 = &Array{
           Size: 567,
           RefC: 1,
           Id: 35,
           Data: make([]uint32, 567),
       }
   }
   var loop12 int = 0;
   var loopLimit12 int = (50)/4 + 1;
   for ; loop12 < loopLimit12; loop12++ {
      if (PATH0 & 1) != 0 {
         var array36 *Array
         if pCounter > 0 {
             array36 = vars.Data[pCounter-1]
             pCounter--
             array36.RefC++
         } else {
             array36 = &Array{
                 Size: 856,
                 RefC: 1,
                 Id: 36,
                 Data: make([]uint32, 856),
             }
         }
         var loop13 int = 0;
         var loopLimit13 int = (50)/5 + 1;
         for ; loop13 < loopLimit13; loop13++ {
            for i := 0; i < array36.Size; i++ {
                array36.Data[i]--
            }
            for i := 0; i < array36.Size; i++ {
                if array36.Data[i] == 86 {
                    return array36
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array35
         params0.Data[1] = array36
         var array37 *Array = Func42(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array37.RefC--
         if array37.RefC == 0 {
             array37.Data = nil
             array37 = nil
         }
         array36.RefC--
         if array36.RefC == 0 {
             array36.Data = nil
             array36 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array35
         var array38 *Array = Func34(&params0, loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array38.RefC--
         if array38.RefC == 0 {
             array38.Data = nil
             array38 = nil
         }
      }
      var array39 *Array
      if pCounter > 0 {
          array39 = vars.Data[pCounter-1]
          pCounter--
          array39.RefC++
      } else {
          array39 = &Array{
              Size: 624,
              RefC: 1,
              Id: 39,
              Data: make([]uint32, 624),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array35
      params0.Data[1] = array39
      var array40 *Array = Func35(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array41 *Array
         if pCounter > 0 {
             array41 = vars.Data[pCounter-1]
             pCounter--
             array41.RefC++
         } else {
             array41 = &Array{
                 Size: 732,
                 RefC: 1,
                 Id: 41,
                 Data: make([]uint32, 732),
             }
         }
         var loop14 int = 0;
         var loopLimit14 int = (50)/5 + 1;
         for ; loop14 < loopLimit14; loop14++ {
            for i := 0; i < array39.Size; i++ {
                array39.Data[i]--
            }
            for i := 0; i < array41.Size; i++ {
                if array41.Data[i] == 19 {
                    return array41
                }
            }
         }
         array41.RefC--
         if array41.RefC == 0 {
             array41.Data = nil
             array41 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array35
         params1.Data[1] = array39
         params1.Data[2] = array40
         var array42 *Array = Func40(&params1, loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array42.RefC--
         if array42.RefC == 0 {
             array42.Data = nil
             array42 = nil
         }
      }
      for i := 0; i < array39.Size; i++ {
          if array39.Data[i] == 15 {
              return array39
          }
      }
      array40.RefC--
      if array40.RefC == 0 {
          array40.Data = nil
          array40 = nil
      }
      array39.RefC--
      if array39.RefC == 0 {
          array39.Data = nil
          array39 = nil
      }
   }
   for i := 0; i < array35.Size; i++ {
       array35.Data[i]--
   }
   for i := 0; i < array35.Size; i++ {
       if array35.Data[i] == 96 {
           return array35
       }
   }
   return array35;
}

