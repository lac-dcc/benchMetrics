package main
import "math/rand"
var _ = rand.Intn
func Func10(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array4 *Array = Func11(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array4.RefC--
      if array4.RefC == 0 {
          array4.Data = nil
          array4 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array96 *Array = Func12(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array96.RefC--
      if array96.RefC == 0 {
          array96.Data = nil
          array96 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array133 *Array = Func13(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array133;
}

