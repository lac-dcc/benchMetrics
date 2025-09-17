package main
import "math/rand"
var _ = rand.Intn
func Func42(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array29 *Array = Func43(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array29.RefC--
      if array29.RefC == 0 {
          array29.Data = nil
          array29 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array31 *Array = Func44(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array31.RefC--
      if array31.RefC == 0 {
          array31.Data = nil
          array31 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array35 *Array = Func45(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array35;
}

