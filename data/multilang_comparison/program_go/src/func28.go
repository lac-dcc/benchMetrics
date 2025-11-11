package main
import "math/rand"
var _ = rand.Intn
func Func28(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array7 *Array = Func29(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array7.RefC--
      if array7.RefC == 0 {
          array7.Data = nil
          array7 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array15 *Array = Func30(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array15.RefC--
      if array15.RefC == 0 {
          array15.Data = nil
          array15 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array27 *Array = Func31(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array27;
}

