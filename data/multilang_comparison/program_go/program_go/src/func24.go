package main
import "math/rand"
var _ = rand.Intn
func Func24(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array99 *Array = Func25(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array99.RefC--
      if array99.RefC == 0 {
          array99.Data = nil
          array99 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array109 *Array = Func26(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array109.RefC--
      if array109.RefC == 0 {
          array109.Data = nil
          array109 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array114 *Array = Func27(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array114;
}

