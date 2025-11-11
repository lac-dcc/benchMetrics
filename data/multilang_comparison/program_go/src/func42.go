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
      var array18 *Array = Func43(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array18.RefC--
      if array18.RefC == 0 {
          array18.Data = nil
          array18 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array20 *Array = Func44(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array20.RefC--
      if array20.RefC == 0 {
          array20.Data = nil
          array20 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array22 *Array = Func45(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array22;
}

