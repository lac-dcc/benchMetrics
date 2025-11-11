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
      var array49 *Array = Func37(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array49.RefC--
      if array49.RefC == 0 {
          array49.Data = nil
          array49 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array51 *Array = Func38(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array51.RefC--
      if array51.RefC == 0 {
          array51.Data = nil
          array51 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array55 *Array = Func39(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array55;
}

