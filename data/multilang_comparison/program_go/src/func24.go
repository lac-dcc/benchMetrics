package main
import "math/rand"
var _ = rand.Intn
func Func24(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   if (PATH0 & 1) != 0 {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array68 *Array = Func25(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array68.RefC--
      if array68.RefC == 0 {
          array68.Data = nil
          array68 = nil
      }
   
   } else {
      var params0 ArrayParam
      params0.Size = 0
      params0.Data = make([]*Array, params0.Size)
      var array77 *Array = Func26(&params0, getPath(), loopsFactor);
      params0.Data = nil
      params0.Size = 0
      array77.RefC--
      if array77.RefC == 0 {
          array77.Data = nil
          array77 = nil
      }
   }
   var params0 ArrayParam
   params0.Size = 0
   params0.Data = make([]*Array, params0.Size)
   var array82 *Array = Func27(&params0, getPath(), loopsFactor);
   params0.Data = nil
   params0.Size = 0
   return array82;
}

