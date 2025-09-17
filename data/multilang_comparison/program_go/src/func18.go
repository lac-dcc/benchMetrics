package main
import "math/rand"
var _ = rand.Intn
func Func18(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array157 *Array = Func19(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array157.RefC--
      if array157.RefC == 0 {
          array157.Data = nil
          array157 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array167 *Array = Func20(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array167.RefC--
      if array167.RefC == 0 {
          array167.Data = nil
          array167 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array172 *Array = Func21(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array172;
}

