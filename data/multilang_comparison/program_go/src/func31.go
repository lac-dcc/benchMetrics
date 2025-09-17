package main
import "math/rand"
var _ = rand.Intn
func Func31(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array47 *Array
   if pCounter > 0 {
       array47 = vars.Data[pCounter-1]
       pCounter--
       array47.RefC++
   } else {
       array47 = &Array{
           Size: 124,
           RefC: 1,
           Id: 47,
           Data: make([]uint32, 124),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array47
   var array48 *Array = Func35(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array51 *Array
      if pCounter > 0 {
          array51 = vars.Data[pCounter-1]
          pCounter--
          array51.RefC++
      } else {
          array51 = &Array{
              Size: 437,
              RefC: 1,
              Id: 51,
              Data: make([]uint32, 437),
          }
      }
      var loop17 int = 0;
      var loopLimit17 int = (50)/4 + 1;
      for ; loop17 < loopLimit17; loop17++ {
         for i := 0; i < array48.Size; i++ {
             array48.Data[i]--
         }
         for i := 0; i < array51.Size; i++ {
             if array51.Data[i] == 7 {
                 return array51
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array47
      params1.Data[1] = array48
      params1.Data[2] = array51
      var array52 *Array = Func46(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array52.RefC--
      if array52.RefC == 0 {
          array52.Data = nil
          array52 = nil
      }
      array51.RefC--
      if array51.RefC == 0 {
          array51.Data = nil
          array51 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array47
      params1.Data[1] = array48
      var array53 *Array = Func40(&params1, loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array53.RefC--
      if array53.RefC == 0 {
          array53.Data = nil
          array53 = nil
      }
   }
   array47.RefC--
   if array47.RefC == 0 {
       array47.Data = nil
       array47 = nil
   }
   return array48;
}

