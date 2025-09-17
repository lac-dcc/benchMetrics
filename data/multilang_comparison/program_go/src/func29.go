package main
import "math/rand"
var _ = rand.Intn
func Func29(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop5 int = 0;
   var loopLimit5 int = (50)/4 + 1;
   for ; loop5 < loopLimit5; loop5++ {
      if (PATH0 & 1) != 0 {
         var array8 *Array
         if pCounter > 0 {
             array8 = vars.Data[pCounter-1]
             pCounter--
             array8.RefC++
         } else {
             array8 = &Array{
                 Size: 802,
                 RefC: 1,
                 Id: 8,
                 Data: make([]uint32, 802),
             }
         }
         var loop6 int = 0;
         var loopLimit6 int = (50)/5 + 1;
         for ; loop6 < loopLimit6; loop6++ {
            for i := 0; i < array8.Size; i++ {
                array8.Data[i]--
            }
            for i := 0; i < array8.Size; i++ {
                if array8.Data[i] == 69 {
                    return array8
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array8
         var array9 *Array = Func46(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array9.RefC--
         if array9.RefC == 0 {
             array9.Data = nil
             array9 = nil
         }
         array8.RefC--
         if array8.RefC == 0 {
             array8.Data = nil
             array8 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array16 *Array = Func40(&params0, loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array16.RefC--
         if array16.RefC == 0 {
             array16.Data = nil
             array16 = nil
         }
      }
      var array18 *Array
      if pCounter > 0 {
          array18 = vars.Data[pCounter-1]
          pCounter--
          array18.RefC++
      } else {
          array18 = &Array{
              Size: 857,
              RefC: 1,
              Id: 18,
              Data: make([]uint32, 857),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array18
      var array19 *Array = Func41(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array22 *Array
         if pCounter > 0 {
             array22 = vars.Data[pCounter-1]
             pCounter--
             array22.RefC++
         } else {
             array22 = &Array{
                 Size: 808,
                 RefC: 1,
                 Id: 22,
                 Data: make([]uint32, 808),
             }
         }
         var loop9 int = 0;
         var loopLimit9 int = (50)/5 + 1;
         for ; loop9 < loopLimit9; loop9++ {
            for i := 0; i < array18.Size; i++ {
                array18.Data[i]--
            }
            for i := 0; i < array22.Size; i++ {
                if array22.Data[i] == 88 {
                    return array22
                }
            }
         }
         array22.RefC--
         if array22.RefC == 0 {
             array22.Data = nil
             array22 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array18
         params1.Data[1] = array19
         var array23 *Array = Func50(&params1, loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array23.RefC--
         if array23.RefC == 0 {
             array23.Data = nil
             array23 = nil
         }
      }
      for i := 0; i < array19.Size; i++ {
          if array19.Data[i] == 12 {
              return array19
          }
      }
      array19.RefC--
      if array19.RefC == 0 {
          array19.Data = nil
          array19 = nil
      }
      array18.RefC--
      if array18.RefC == 0 {
          array18.Data = nil
          array18 = nil
      }
   }
   var array25 *Array
   if pCounter > 0 {
       array25 = vars.Data[pCounter-1]
       pCounter--
       array25.RefC++
   } else {
       array25 = &Array{
           Size: 226,
           RefC: 1,
           Id: 25,
           Data: make([]uint32, 226),
       }
   }
   return array25;
}

