package main
import "math/rand"
var _ = rand.Intn
func Func4(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array110 *Array
   if pCounter > 0 {
       array110 = vars.Data[pCounter-1]
       pCounter--
       array110.RefC++
   } else {
       array110 = &Array{
           Size: 209,
           RefC: 1,
           Id: 110,
           Data: make([]uint32, 209),
       }
   }
   var loop33 int = 0;
   var loopLimit33 int = (50)/3 + 1;
   for ; loop33 < loopLimit33; loop33++ {
      if (PATH0 & 1) != 0 {
         var array111 *Array
         if pCounter > 0 {
             array111 = vars.Data[pCounter-1]
             pCounter--
             array111.RefC++
         } else {
             array111 = &Array{
                 Size: 581,
                 RefC: 1,
                 Id: 111,
                 Data: make([]uint32, 581),
             }
         }
         var loop34 int = 0;
         var loopLimit34 int = (50)/4 + 1;
         for ; loop34 < loopLimit34; loop34++ {
            for i := 0; i < array111.Size; i++ {
                array111.Data[i]--
            }
            for i := 0; i < array110.Size; i++ {
                if array110.Data[i] == 32 {
                    return array110
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array110
         params0.Data[1] = array111
         var array112 *Array = Func24(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array112.RefC--
         if array112.RefC == 0 {
             array112.Data = nil
             array112 = nil
         }
         array111.RefC--
         if array111.RefC == 0 {
             array111.Data = nil
             array111 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array110
         var array113 *Array = Func16(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array113.RefC--
         if array113.RefC == 0 {
             array113.Data = nil
             array113 = nil
         }
      }
      var array114 *Array
      if pCounter > 0 {
          array114 = vars.Data[pCounter-1]
          pCounter--
          array114.RefC++
      } else {
          array114 = &Array{
              Size: 769,
              RefC: 1,
              Id: 114,
              Data: make([]uint32, 769),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array110
      params0.Data[1] = array114
      var array115 *Array = Func17(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array116 *Array
         if pCounter > 0 {
             array116 = vars.Data[pCounter-1]
             pCounter--
             array116.RefC++
         } else {
             array116 = &Array{
                 Size: 850,
                 RefC: 1,
                 Id: 116,
                 Data: make([]uint32, 850),
             }
         }
         var loop35 int = 0;
         var loopLimit35 int = (50)/4 + 1;
         for ; loop35 < loopLimit35; loop35++ {
            for i := 0; i < array116.Size; i++ {
                array116.Data[i]--
            }
            for i := 0; i < array110.Size; i++ {
                if array110.Data[i] == 42 {
                    return array110
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array110
         params1.Data[1] = array114
         params1.Data[2] = array115
         params1.Data[3] = array116
         var array117 *Array = Func28(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array117.RefC--
         if array117.RefC == 0 {
             array117.Data = nil
             array117 = nil
         }
         array116.RefC--
         if array116.RefC == 0 {
             array116.Data = nil
             array116 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array110
         params1.Data[1] = array114
         params1.Data[2] = array115
         var array118 *Array = Func22(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array118.RefC--
         if array118.RefC == 0 {
             array118.Data = nil
             array118 = nil
         }
      }
      for i := 0; i < array115.Size; i++ {
          if array115.Data[i] == 67 {
              return array115
          }
      }
      array115.RefC--
      if array115.RefC == 0 {
          array115.Data = nil
          array115 = nil
      }
      array114.RefC--
      if array114.RefC == 0 {
          array114.Data = nil
          array114 = nil
      }
   }
   for i := 0; i < array110.Size; i++ {
       array110.Data[i]--
   }
   for i := 0; i < array110.Size; i++ {
       if array110.Data[i] == 61 {
           return array110
       }
   }
   return array110;
}

