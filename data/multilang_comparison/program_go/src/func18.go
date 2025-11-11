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
      var array125 *Array = Func19(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array125.RefC--
      if array125.RefC == 0 {
          array125.Data = nil
          array125 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array135 *Array = Func20(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array135.RefC--
      if array135.RefC == 0 {
          array135.Data = nil
          array135 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array140 *Array = Func21(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array140;
}

