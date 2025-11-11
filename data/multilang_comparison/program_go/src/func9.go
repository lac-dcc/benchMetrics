package main
import "math/rand"
var _ = rand.Intn
func Func9(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array175 *Array
   if pCounter > 0 {
       array175 = vars.Data[pCounter-1]
       pCounter--
       array175.RefC++
   } else {
       array175 = &Array{
           Size: 641,
           RefC: 1,
           Id: 175,
           Data: make([]uint32, 641),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array175
   var array176 *Array = Func15(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array179 *Array
      if pCounter > 0 {
          array179 = vars.Data[pCounter-1]
          pCounter--
          array179.RefC++
      } else {
          array179 = &Array{
              Size: 260,
              RefC: 1,
              Id: 179,
              Data: make([]uint32, 260),
          }
      }
      var loop52 int = 0;
      var loopLimit52 int = (50)/2 + 1;
      for ; loop52 < loopLimit52; loop52++ {
         for i := 0; i < array176.Size; i++ {
             array176.Data[i]--
         }
         for i := 0; i < array179.Size; i++ {
             if array179.Data[i] == 5 {
                 return array179
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array175
      params1.Data[1] = array176
      params1.Data[2] = array179
      var array180 *Array = Func24(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array180.RefC--
      if array180.RefC == 0 {
          array180.Data = nil
          array180 = nil
      }
      array179.RefC--
      if array179.RefC == 0 {
          array179.Data = nil
          array179 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array175
      params1.Data[1] = array176
      var array181 *Array = Func16(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array181.RefC--
      if array181.RefC == 0 {
          array181.Data = nil
          array181 = nil
      }
   }
   array175.RefC--
   if array175.RefC == 0 {
       array175.Data = nil
       array175 = nil
   }
   return array176;
}

