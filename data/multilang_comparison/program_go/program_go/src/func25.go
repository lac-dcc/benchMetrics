package main
import "math/rand"
var _ = rand.Intn
func Func25(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var loop31 int = 0;
   var loopLimit31 int = (50)/3 + 1;
   for ; loop31 < loopLimit31; loop31++ {
      if (PATH0 & 1) != 0 {
         var array100 *Array
         if pCounter > 0 {
             array100 = vars.Data[pCounter-1]
             pCounter--
             array100.RefC++
         } else {
             array100 = &Array{
                 Size: 127,
                 RefC: 1,
                 Id: 100,
                 Data: make([]uint32, 127),
             }
         }
         var loop32 int = 0;
         var loopLimit32 int = (50)/4 + 1;
         for ; loop32 < loopLimit32; loop32++ {
            for i := 0; i < array100.Size; i++ {
                array100.Data[i]--
            }
            for i := 0; i < array100.Size; i++ {
                if array100.Data[i] == 58 {
                    return array100
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array100
         var array101 *Array = Func42(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array101.RefC--
         if array101.RefC == 0 {
             array101.Data = nil
             array101 = nil
         }
         array100.RefC--
         if array100.RefC == 0 {
             array100.Data = nil
             array100 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 0
         params0.Data = make([]*Array, params0.Size)
         var array102 *Array = Func34(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array102.RefC--
         if array102.RefC == 0 {
             array102.Data = nil
             array102 = nil
         }
      }
      var array103 *Array
      if pCounter > 0 {
          array103 = vars.Data[pCounter-1]
          pCounter--
          array103.RefC++
      } else {
          array103 = &Array{
              Size: 396,
              RefC: 1,
              Id: 103,
              Data: make([]uint32, 396),
          }
      }
      var params0 ArrayParam
      params0.Size = 1
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array103
      var array104 *Array = Func35(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array105 *Array
         if pCounter > 0 {
             array105 = vars.Data[pCounter-1]
             pCounter--
             array105.RefC++
         } else {
             array105 = &Array{
                 Size: 84,
                 RefC: 1,
                 Id: 105,
                 Data: make([]uint32, 84),
             }
         }
         var loop33 int = 0;
         var loopLimit33 int = (50)/4 + 1;
         for ; loop33 < loopLimit33; loop33++ {
            for i := 0; i < array104.Size; i++ {
                array104.Data[i]--
            }
            for i := 0; i < array103.Size; i++ {
                if array103.Data[i] == 72 {
                    return array103
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array103
         params1.Data[1] = array104
         params1.Data[2] = array105
         var array106 *Array = Func46(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array106.RefC--
         if array106.RefC == 0 {
             array106.Data = nil
             array106 = nil
         }
         array105.RefC--
         if array105.RefC == 0 {
             array105.Data = nil
             array105 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 2
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array103
         params1.Data[1] = array104
         var array107 *Array = Func40(&params1, loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array107.RefC--
         if array107.RefC == 0 {
             array107.Data = nil
             array107 = nil
         }
      }
      for i := 0; i < array104.Size; i++ {
          if array104.Data[i] == 40 {
              return array104
          }
      }
      array104.RefC--
      if array104.RefC == 0 {
          array104.Data = nil
          array104 = nil
      }
      array103.RefC--
      if array103.RefC == 0 {
          array103.Data = nil
          array103 = nil
      }
   }
   var array108 *Array
   if pCounter > 0 {
       array108 = vars.Data[pCounter-1]
       pCounter--
       array108.RefC++
   } else {
       array108 = &Array{
           Size: 42,
           RefC: 1,
           Id: 108,
           Data: make([]uint32, 42),
       }
   }
   return array108;
}

