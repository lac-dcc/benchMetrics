package main
import "math/rand"
var _ = rand.Intn
func Func0(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array1 *Array
   if pCounter > 0 {
       array1 = vars.Data[pCounter-1]
       pCounter--
       array1.RefC++
   } else {
       array1 = &Array{
           Size: 386,
           RefC: 1,
           Id: 1,
           Data: make([]uint32, 386),
       }
   }
   var loop1 int = 0;
   var loopLimit1 int = (50)/2 + 1;
   for ; loop1 < loopLimit1; loop1++ {
      if (PATH0 & 1) != 0 {
         var array2 *Array
         if pCounter > 0 {
             array2 = vars.Data[pCounter-1]
             pCounter--
             array2.RefC++
         } else {
             array2 = &Array{
                 Size: 492,
                 RefC: 1,
                 Id: 2,
                 Data: make([]uint32, 492),
             }
         }
         var loop2 int = 0;
         var loopLimit2 int = (50)/3 + 1;
         for ; loop2 < loopLimit2; loop2++ {
            for i := 0; i < array2.Size; i++ {
                array2.Data[i]--
            }
            for i := 0; i < array2.Size; i++ {
                if array2.Data[i] == 62 {
                    return array2
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array1
         params0.Data[1] = array2
         var array3 *Array = Func10(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array3.RefC--
         if array3.RefC == 0 {
             array3.Data = nil
             array3 = nil
         }
         array2.RefC--
         if array2.RefC == 0 {
             array2.Data = nil
             array2 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array1
         var array109 *Array = Func4(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array109.RefC--
         if array109.RefC == 0 {
             array109.Data = nil
             array109 = nil
         }
      }
      var array119 *Array
      if pCounter > 0 {
          array119 = vars.Data[pCounter-1]
          pCounter--
          array119.RefC++
      } else {
          array119 = &Array{
              Size: 326,
              RefC: 1,
              Id: 119,
              Data: make([]uint32, 326),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array1
      params0.Data[1] = array119
      var array120 *Array = Func5(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array123 *Array
         if pCounter > 0 {
             array123 = vars.Data[pCounter-1]
             pCounter--
             array123.RefC++
         } else {
             array123 = &Array{
                 Size: 872,
                 RefC: 1,
                 Id: 123,
                 Data: make([]uint32, 872),
             }
         }
         var loop37 int = 0;
         var loopLimit37 int = (50)/3 + 1;
         for ; loop37 < loopLimit37; loop37++ {
            for i := 0; i < array1.Size; i++ {
                array1.Data[i]--
            }
            for i := 0; i < array120.Size; i++ {
                if array120.Data[i] == 98 {
                    return array120
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array1
         params1.Data[1] = array119
         params1.Data[2] = array120
         params1.Data[3] = array123
         var array124 *Array = Func18(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array124.RefC--
         if array124.RefC == 0 {
             array124.Data = nil
             array124 = nil
         }
         array123.RefC--
         if array123.RefC == 0 {
             array123.Data = nil
             array123 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array1
         params1.Data[1] = array119
         params1.Data[2] = array120
         var array146 *Array = Func14(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array146.RefC--
         if array146.RefC == 0 {
             array146.Data = nil
             array146 = nil
         }
      }
      for i := 0; i < array120.Size; i++ {
          if array120.Data[i] == 32 {
              return array120
          }
      }
      array120.RefC--
      if array120.RefC == 0 {
          array120.Data = nil
          array120 = nil
      }
      array119.RefC--
      if array119.RefC == 0 {
          array119.Data = nil
          array119 = nil
      }
   }
   return array1;
}

