package main
import "math/rand"
var _ = rand.Intn
func Func7(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop56 int = 0;
   var loopLimit56 int = (50)/2 + 1;
   for ; loop56 < loopLimit56; loop56++ {
      if (PATH0 & 1) != 0 {
         var array192 *Array
         if pCounter > 0 {
             array192 = vars.Data[pCounter-1]
             pCounter--
             array192.RefC++
         } else {
             array192 = &Array{
                 Size: 462,
                 RefC: 1,
                 Id: 192,
                 Data: make([]uint32, 462),
             }
         }
         var loop57 int = 0;
         var loopLimit57 int = (50)/3 + 1;
         for ; loop57 < loopLimit57; loop57++ {
            for i := 0; i < array192.Size; i++ {
                array192.Data[i]--
            }
            for i := 0; i < array192.Size; i++ {
                if array192.Data[i] == 92 {
                    return array192
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array192
         var array193 *Array = Func24(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array193.RefC--
         if array193.RefC == 0 {
             array193.Data = nil
             array193 = nil
         }
         array192.RefC--
         if array192.RefC == 0 {
             array192.Data = nil
             array192 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array194 *Array = Func16(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array194.RefC--
         if array194.RefC == 0 {
             array194.Data = nil
             array194 = nil
         }
      }
      var array195 *Array
      if pCounter > 0 {
          array195 = vars.Data[pCounter-1]
          pCounter--
          array195.RefC++
      } else {
          array195 = &Array{
              Size: 157,
              RefC: 1,
              Id: 195,
              Data: make([]uint32, 157),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array195
      var array196 *Array = Func17(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array197 *Array
         if pCounter > 0 {
             array197 = vars.Data[pCounter-1]
             pCounter--
             array197.RefC++
         } else {
             array197 = &Array{
                 Size: 947,
                 RefC: 1,
                 Id: 197,
                 Data: make([]uint32, 947),
             }
         }
         var loop58 int = 0;
         var loopLimit58 int = (50)/3 + 1;
         for ; loop58 < loopLimit58; loop58++ {
            for i := 0; i < array196.Size; i++ {
                array196.Data[i]--
            }
            for i := 0; i < array195.Size; i++ {
                if array195.Data[i] == 21 {
                    return array195
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array195
         params1.Data[1] = array196
         params1.Data[2] = array197
         var array198 *Array = Func28(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array198.RefC--
         if array198.RefC == 0 {
             array198.Data = nil
             array198 = nil
         }
         array197.RefC--
         if array197.RefC == 0 {
             array197.Data = nil
             array197 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array195
         params1.Data[1] = array196
         var array199 *Array = Func22(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array199.RefC--
         if array199.RefC == 0 {
             array199.Data = nil
             array199 = nil
         }
      }
      for i := 0; i < array195.Size; i++ {
          if array195.Data[i] == 25 {
              return array195
          }
      }
      array196.RefC--
      if array196.RefC == 0 {
          array196.Data = nil
          array196 = nil
      }
      array195.RefC--
      if array195.RefC == 0 {
          array195.Data = nil
          array195 = nil
      }
   }
   var array200 *Array
   if pCounter > 0 {
       array200 = vars.Data[pCounter-1]
       pCounter--
       array200.RefC++
   } else {
       array200 = &Array{
           Size: 81,
           RefC: 1,
           Id: 200,
           Data: make([]uint32, 81),
       }
   }
   return array200;
}

