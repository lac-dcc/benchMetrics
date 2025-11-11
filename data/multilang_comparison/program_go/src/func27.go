package main
import "math/rand"
var _ = rand.Intn
func Func27(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array83 *Array
   if pCounter > 0 {
       array83 = vars.Data[pCounter-1]
       pCounter--
       array83.RefC++
   } else {
       array83 = &Array{
           Size: 881,
           RefC: 1,
           Id: 83,
           Data: make([]uint32, 881),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array83
   var array84 *Array = Func33(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array87 *Array
      if pCounter > 0 {
          array87 = vars.Data[pCounter-1]
          pCounter--
          array87.RefC++
      } else {
          array87 = &Array{
              Size: 813,
              RefC: 1,
              Id: 87,
              Data: make([]uint32, 813),
          }
      }
      var loop27 int = 0;
      var loopLimit27 int = (50)/3 + 1;
      for ; loop27 < loopLimit27; loop27++ {
         for i := 0; i < array83.Size; i++ {
             array83.Data[i]--
         }
         for i := 0; i < array87.Size; i++ {
             if array87.Data[i] == 95 {
                 return array87
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array83
      params1.Data[1] = array84
      params1.Data[2] = array87
      var array88 *Array = Func42(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array88.RefC--
      if array88.RefC == 0 {
          array88.Data = nil
          array88 = nil
      }
      array87.RefC--
      if array87.RefC == 0 {
          array87.Data = nil
          array87 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array83
      params1.Data[1] = array84
      var array89 *Array = Func34(&params1, loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array89.RefC--
      if array89.RefC == 0 {
          array89.Data = nil
          array89 = nil
      }
   }
   array84.RefC--
   if array84.RefC == 0 {
       array84.Data = nil
       array84 = nil
   }
   return array83;
}

