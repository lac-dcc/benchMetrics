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
         var array141 *Array = Func4(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array141.RefC--
         if array141.RefC == 0 {
             array141.Data = nil
             array141 = nil
         }
      }
      var array151 *Array
      if pCounter > 0 {
          array151 = vars.Data[pCounter-1]
          pCounter--
          array151.RefC++
      } else {
          array151 = &Array{
              Size: 988,
              RefC: 1,
              Id: 151,
              Data: make([]uint32, 988),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array1
      params0.Data[1] = array151
      var array152 *Array = Func5(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array155 *Array
         if pCounter > 0 {
             array155 = vars.Data[pCounter-1]
             pCounter--
             array155.RefC++
         } else {
             array155 = &Array{
                 Size: 232,
                 RefC: 1,
                 Id: 155,
                 Data: make([]uint32, 232),
             }
         }
         var loop46 int = 0;
         var loopLimit46 int = (50)/3 + 1;
         for ; loop46 < loopLimit46; loop46++ {
            for i := 0; i < array151.Size; i++ {
                array151.Data[i]--
            }
            for i := 0; i < array152.Size; i++ {
                if array152.Data[i] == 60 {
                    return array152
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array1
         params1.Data[1] = array151
         params1.Data[2] = array152
         params1.Data[3] = array155
         var array156 *Array = Func18(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array156.RefC--
         if array156.RefC == 0 {
             array156.Data = nil
             array156 = nil
         }
         array155.RefC--
         if array155.RefC == 0 {
             array155.Data = nil
             array155 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array1
         params1.Data[1] = array151
         params1.Data[2] = array152
         var array178 *Array = Func14(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array178.RefC--
         if array178.RefC == 0 {
             array178.Data = nil
             array178 = nil
         }
      }
      for i := 0; i < array152.Size; i++ {
          if array152.Data[i] == 57 {
              return array152
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
   return array1;
}

