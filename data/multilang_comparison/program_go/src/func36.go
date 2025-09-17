package main
import "math/rand"
var _ = rand.Intn
func Func36(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array70 *Array = Func37(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array70.RefC--
      if array70.RefC == 0 {
          array70.Data = nil
          array70 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array76 *Array = Func38(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array76.RefC--
      if array76.RefC == 0 {
          array76.Data = nil
          array76 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array81 *Array = Func39(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array81;
}

