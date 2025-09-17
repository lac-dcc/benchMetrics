package main
import "math/rand"
var _ = rand.Intn
func Func12(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var array97 *Array
      if pCounter > 0 {
          array97 = vars.Data[pCounter-1]
          pCounter--
          array97.RefC++
      } else {
          array97 = &Array{
              Size: 321,
              RefC: 1,
              Id: 97,
              Data: make([]uint32, 321),
          }
      }
      var loop30 int = 0;
      var loopLimit30 int = (50)/3 + 1;
      for ; loop30 < loopLimit30; loop30++ {
         for i := 0; i < array97.Size; i++ {
             array97.Data[i]--
         }
         for i := 0; i < array97.Size; i++ {
             if array97.Data[i] == 99 {
                 return array97
             }
         }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array97
      var array98 *Array = Func24(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array98.RefC--
      if array98.RefC == 0 {
          array98.Data = nil
          array98 = nil
      }
      array97.RefC--
      if array97.RefC == 0 {
          array97.Data = nil
          array97 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array122 *Array = Func16(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array122.RefC--
      if array122.RefC == 0 {
          array122.Data = nil
          array122 = nil
      }
   }
   var array132 *Array
   if pCounter > 0 {
       array132 = vars.Data[pCounter-1]
       pCounter--
       array132.RefC++
   } else {
       array132 = &Array{
           Size: 497,
           RefC: 1,
           Id: 132,
           Data: make([]uint32, 497),
       }
   }
   return array132;
}

