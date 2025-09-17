package main
import "math/rand"
var _ = rand.Intn
func Func16(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array123 *Array
   if pCounter > 0 {
       array123 = vars.Data[pCounter-1]
       pCounter--
       array123.RefC++
   } else {
       array123 = &Array{
           Size: 908,
           RefC: 1,
           Id: 123,
           Data: make([]uint32, 908),
       }
   }
   var loop37 int = 0;
   var loopLimit37 int = (50)/3 + 1;
   for ; loop37 < loopLimit37; loop37++ {
      if (PATH0 & 1) != 0 {
         var array124 *Array
         if pCounter > 0 {
             array124 = vars.Data[pCounter-1]
             pCounter--
             array124.RefC++
         } else {
             array124 = &Array{
                 Size: 958,
                 RefC: 1,
                 Id: 124,
                 Data: make([]uint32, 958),
             }
         }
         var loop38 int = 0;
         var loopLimit38 int = (50)/4 + 1;
         for ; loop38 < loopLimit38; loop38++ {
            for i := 0; i < array123.Size; i++ {
                array123.Data[i]--
            }
            for i := 0; i < array123.Size; i++ {
                if array123.Data[i] == 8 {
                    return array123
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array123
         params0.Data[1] = array124
         var array125 *Array = Func36(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array125.RefC--
         if array125.RefC == 0 {
             array125.Data = nil
             array125 = nil
         }
         array124.RefC--
         if array124.RefC == 0 {
             array124.Data = nil
             array124 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array123
         var array126 *Array = Func32(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array126.RefC--
         if array126.RefC == 0 {
             array126.Data = nil
             array126 = nil
         }
      }
      var array127 *Array
      if pCounter > 0 {
          array127 = vars.Data[pCounter-1]
          pCounter--
          array127.RefC++
      } else {
          array127 = &Array{
              Size: 133,
              RefC: 1,
              Id: 127,
              Data: make([]uint32, 133),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array123
      params0.Data[1] = array127
      var array128 *Array = Func33(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array129 *Array
         if pCounter > 0 {
             array129 = vars.Data[pCounter-1]
             pCounter--
             array129.RefC++
         } else {
             array129 = &Array{
                 Size: 754,
                 RefC: 1,
                 Id: 129,
                 Data: make([]uint32, 754),
             }
         }
         var loop39 int = 0;
         var loopLimit39 int = (50)/4 + 1;
         for ; loop39 < loopLimit39; loop39++ {
            for i := 0; i < array129.Size; i++ {
                array129.Data[i]--
            }
            for i := 0; i < array128.Size; i++ {
                if array128.Data[i] == 68 {
                    return array128
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array123
         params1.Data[1] = array127
         params1.Data[2] = array128
         params1.Data[3] = array129
         var array130 *Array = Func42(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array130.RefC--
         if array130.RefC == 0 {
             array130.Data = nil
             array130 = nil
         }
         array129.RefC--
         if array129.RefC == 0 {
             array129.Data = nil
             array129 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array123
         params1.Data[1] = array127
         params1.Data[2] = array128
         var array131 *Array = Func34(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array131.RefC--
         if array131.RefC == 0 {
             array131.Data = nil
             array131 = nil
         }
      }
      for i := 0; i < array128.Size; i++ {
          if array128.Data[i] == 49 {
              return array128
          }
      }
      array128.RefC--
      if array128.RefC == 0 {
          array128.Data = nil
          array128 = nil
      }
      array127.RefC--
      if array127.RefC == 0 {
          array127.Data = nil
          array127 = nil
      }
   }
   for i := 0; i < array123.Size; i++ {
       array123.Data[i]--
   }
   for i := 0; i < array123.Size; i++ {
       if array123.Data[i] == 33 {
           return array123
       }
   }
   return array123;
}

