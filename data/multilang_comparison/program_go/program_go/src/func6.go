package main
import "math/rand"
var _ = rand.Intn
func Func6(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array191 *Array = Func7(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array191.RefC--
      if array191.RefC == 0 {
          array191.Data = nil
          array191 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array201 *Array = Func8(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array201.RefC--
      if array201.RefC == 0 {
          array201.Data = nil
          array201 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array206 *Array = Func9(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array206;
}

