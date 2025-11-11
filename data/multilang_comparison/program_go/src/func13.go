package main
import "math/rand"
var _ = rand.Intn
func Func13(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array102 *Array
   if pCounter > 0 {
       array102 = vars.Data[pCounter-1]
       pCounter--
       array102.RefC++
   } else {
       array102 = &Array{
           Size: 984,
           RefC: 1,
           Id: 102,
           Data: make([]uint32, 984),
       }
   }
   var params0 ArrayParam
   params0.Size = 1
   params0.Data = make([]*Array, params0.Size)
   params0.Data[0] = array102
   var array103 *Array = Func17(&params0, loopsFactor);
   params0.Data = nil
   params0.Size = 0
   if (PATH0 & 1) != 0 {
      var array106 *Array
      if pCounter > 0 {
          array106 = vars.Data[pCounter-1]
          pCounter--
          array106.RefC++
      } else {
          array106 = &Array{
              Size: 672,
              RefC: 1,
              Id: 106,
              Data: make([]uint32, 672),
          }
      }
      var loop32 int = 0;
      var loopLimit32 int = (50)/3 + 1;
      for ; loop32 < loopLimit32; loop32++ {
         for i := 0; i < array106.Size; i++ {
             array106.Data[i]--
         }
         for i := 0; i < array103.Size; i++ {
             if array103.Data[i] == 85 {
                 return array103
             }
         }
      }
      var params1 ArrayParam
      params1.Size = 3
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array102
      params1.Data[1] = array103
      params1.Data[2] = array106
      var array107 *Array = Func28(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array107.RefC--
      if array107.RefC == 0 {
          array107.Data = nil
          array107 = nil
      }
      array106.RefC--
      if array106.RefC == 0 {
          array106.Data = nil
          array106 = nil
      }
   
   } else {
      var params1 ArrayParam
      params1.Size = 2
      params1.Data = make([]*Array, params1.Size)
      params1.Data[0] = array102
      params1.Data[1] = array103
      var array108 *Array = Func22(&params1, getPath(), loopsFactor);
      params1.Data = nil
      params1.Size = 0
      array108.RefC--
      if array108.RefC == 0 {
          array108.Data = nil
          array108 = nil
      }
   }
   array103.RefC--
   if array103.RefC == 0 {
       array103.Data = nil
       array103 = nil
   }
   return array102;
}

