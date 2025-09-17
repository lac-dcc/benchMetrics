package main
import "math/rand"
var _ = rand.Intn
func Func46(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array10 *Array = Func47(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array10.RefC--
      if array10.RefC == 0 {
          array10.Data = nil
          array10 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array12 *Array = Func48(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array12.RefC--
      if array12.RefC == 0 {
          array12.Data = nil
          array12 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array14 *Array = Func49(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array14;
}

