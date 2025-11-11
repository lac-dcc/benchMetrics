package main
import "math/rand"
var _ = rand.Intn
func Func19(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop38 int = 0;
   var loopLimit38 int = (50)/3 + 1;
   for ; loop38 < loopLimit38; loop38++ {
      if (PATH0 & 1) != 0 {
         var array126 *Array
         if pCounter > 0 {
             array126 = vars.Data[pCounter-1]
             pCounter--
             array126.RefC++
         } else {
             array126 = &Array{
                 Size: 890,
                 RefC: 1,
                 Id: 126,
                 Data: make([]uint32, 890),
             }
         }
         var loop39 int = 0;
         var loopLimit39 int = (50)/4 + 1;
         for ; loop39 < loopLimit39; loop39++ {
            for i := 0; i < array126.Size; i++ {
                array126.Data[i]--
            }
            for i := 0; i < array126.Size; i++ {
                if array126.Data[i] == 46 {
                    return array126
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array126
         var array127 *Array = Func36(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array127.RefC--
         if array127.RefC == 0 {
             array127.Data = nil
             array127 = nil
         }
         array126.RefC--
         if array126.RefC == 0 {
             array126.Data = nil
             array126 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array128 *Array = Func32(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array128.RefC--
         if array128.RefC == 0 {
             array128.Data = nil
             array128 = nil
         }
      }
      var array129 *Array
      if pCounter > 0 {
          array129 = vars.Data[pCounter-1]
          pCounter--
          array129.RefC++
      } else {
          array129 = &Array{
              Size: 788,
              RefC: 1,
              Id: 129,
              Data: make([]uint32, 788),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array129
      var array130 *Array = Func33(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array131 *Array
         if pCounter > 0 {
             array131 = vars.Data[pCounter-1]
             pCounter--
             array131.RefC++
         } else {
             array131 = &Array{
                 Size: 990,
                 RefC: 1,
                 Id: 131,
                 Data: make([]uint32, 990),
             }
         }
         var loop40 int = 0;
         var loopLimit40 int = (50)/4 + 1;
         for ; loop40 < loopLimit40; loop40++ {
            for i := 0; i < array130.Size; i++ {
                array130.Data[i]--
            }
            for i := 0; i < array130.Size; i++ {
                if array130.Data[i] == 63 {
                    return array130
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array129
         params1.Data[1] = array130
         params1.Data[2] = array131
         var array132 *Array = Func42(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array132.RefC--
         if array132.RefC == 0 {
             array132.Data = nil
             array132 = nil
         }
         array131.RefC--
         if array131.RefC == 0 {
             array131.Data = nil
             array131 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array129
         params1.Data[1] = array130
         var array133 *Array = Func34(&params1, loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array133.RefC--
         if array133.RefC == 0 {
             array133.Data = nil
             array133 = nil
         }
      }
      for i := 0; i < array130.Size; i++ {
          if array130.Data[i] == 52 {
              return array130
          }
      }
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
   }
   var array134 *Array
   if pCounter > 0 {
       array134 = vars.Data[pCounter-1]
       pCounter--
       array134.RefC++
   } else {
       array134 = &Array{
           Size: 996,
           RefC: 1,
           Id: 134,
           Data: make([]uint32, 996),
       }
   }
   return array134;
}

