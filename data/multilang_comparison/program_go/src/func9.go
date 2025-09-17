package main
import "math/rand"
var _ = rand.Intn
func Func9(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array207 *Array
   if pCounter > 0 {
       array207 = vars.Data[pCounter-1]
       pCounter--
       array207.RefC++
   } else {
       array207 = &Array{
           Size: 176,
           RefC: 1,
           Id: 207,
           Data: make([]uint32, 176),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array207
   var array208 *Array = Func15(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array211 *Array
      if pCounter > 0 {
          array211 = vars.Data[pCounter-1]
          pCounter--
          array211.RefC++
      } else {
          array211 = &Array{
              Size: 818,
              RefC: 1,
              Id: 211,
              Data: make([]uint32, 818),
          }
      }
      var loop61 int = 0;
      var loopLimit61 int = (50)/2 + 1;
      for ; loop61 < loopLimit61; loop61++ {
         for i := 0; i < array211.Size; i++ {
             array211.Data[i]--
         }
         for i := 0; i < array207.Size; i++ {
             if array207.Data[i] == 49 {
                 return array207
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array207
      params1.Data[1] = array208
      params1.Data[2] = array211
      var array212 *Array = Func24(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array212.RefC--
      if array212.RefC == 0 {
          array212.Data = nil
          array212 = nil
      }
      array211.RefC--
      if array211.RefC == 0 {
          array211.Data = nil
          array211 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array207
      params1.Data[1] = array208
      var array213 *Array = Func16(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array213.RefC--
      if array213.RefC == 0 {
          array213.Data = nil
          array213 = nil
      }
   }
   array207.RefC--
   if array207.RefC == 0 {
       array207.Data = nil
       array207 = nil
   }
   return array208;
}

