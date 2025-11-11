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
      var array159 *Array = Func7(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array159.RefC--
      if array159.RefC == 0 {
          array159.Data = nil
          array159 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array169 *Array = Func8(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array169.RefC--
      if array169.RefC == 0 {
          array169.Data = nil
          array169 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array174 *Array = Func9(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array174;
}

