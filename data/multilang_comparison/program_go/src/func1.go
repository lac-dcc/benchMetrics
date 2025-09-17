package main
import "math/rand"
var _ = rand.Intn
func Func1(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array225 *Array
   if pCounter > 0 {
       array225 = vars.Data[pCounter-1]
       pCounter--
       array225.RefC++
   } else {
       array225 = &Array{
           Size: 137,
           RefC: 1,
           Id: 225,
           Data: make([]uint32, 137),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array225
   var array226 *Array = Func3(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array229 *Array
      if pCounter > 0 {
          array229 = vars.Data[pCounter-1]
          pCounter--
          array229.RefC++
      } else {
          array229 = &Array{
              Size: 963,
              RefC: 1,
              Id: 229,
              Data: make([]uint32, 963),
          }
      }
      var loop66 int = 0;
      var loopLimit66 int = (50)/2 + 1;
      for ; loop66 < loopLimit66; loop66++ {
         for i := 0; i < array229.Size; i++ {
             array229.Data[i]--
         }
         for i := 0; i < array226.Size; i++ {
             if array226.Data[i] == 58 {
                 return array226
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array225
      params1.Data[1] = array226
      params1.Data[2] = array229
      var array230 *Array = Func10(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array230.RefC--
      if array230.RefC == 0 {
          array230.Data = nil
          array230 = nil
      }
      array229.RefC--
      if array229.RefC == 0 {
          array229.Data = nil
          array229 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array225
      params1.Data[1] = array226
      var array231 *Array = Func4(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array231.RefC--
      if array231.RefC == 0 {
          array231.Data = nil
          array231 = nil
      }
   }
   array225.RefC--
   if array225.RefC == 0 {
       array225.Data = nil
       array225 = nil
   }
   return array226;
}

