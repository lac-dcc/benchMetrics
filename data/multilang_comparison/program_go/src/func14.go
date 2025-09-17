package main
import "math/rand"
var _ = rand.Intn
func Func14(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array179 *Array
   if pCounter > 0 {
       array179 = vars.Data[pCounter-1]
       pCounter--
       array179.RefC++
   } else {
       array179 = &Array{
           Size: 237,
           RefC: 1,
           Id: 179,
           Data: make([]uint32, 237),
       }
   }
   var loop52 int = 0;
   var loopLimit52 int = (50)/3 + 1;
   for ; loop52 < loopLimit52; loop52++ {
      if (PATH0 & 1) != 0 {
         var array180 *Array
         if pCounter > 0 {
             array180 = vars.Data[pCounter-1]
             pCounter--
             array180.RefC++
         } else {
             array180 = &Array{
                 Size: 205,
                 RefC: 1,
                 Id: 180,
                 Data: make([]uint32, 205),
             }
         }
         var loop53 int = 0;
         var loopLimit53 int = (50)/4 + 1;
         for ; loop53 < loopLimit53; loop53++ {
            for i := 0; i < array180.Size; i++ {
                array180.Data[i]--
            }
            for i := 0; i < array180.Size; i++ {
                if array180.Data[i] == 18 {
                    return array180
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array179
         params0.Data[1] = array180
         var array181 *Array = Func28(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array181.RefC--
         if array181.RefC == 0 {
             array181.Data = nil
             array181 = nil
         }
         array180.RefC--
         if array180.RefC == 0 {
             array180.Data = nil
             array180 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array179
         var array182 *Array = Func22(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array182.RefC--
         if array182.RefC == 0 {
             array182.Data = nil
             array182 = nil
         }
      }
      var array183 *Array
      if pCounter > 0 {
          array183 = vars.Data[pCounter-1]
          pCounter--
          array183.RefC++
      } else {
          array183 = &Array{
              Size: 873,
              RefC: 1,
              Id: 183,
              Data: make([]uint32, 873),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array179
      params0.Data[1] = array183
      var array184 *Array = Func23(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array185 *Array
         if pCounter > 0 {
             array185 = vars.Data[pCounter-1]
             pCounter--
             array185.RefC++
         } else {
             array185 = &Array{
                 Size: 483,
                 RefC: 1,
                 Id: 185,
                 Data: make([]uint32, 483),
             }
         }
         var loop54 int = 0;
         var loopLimit54 int = (50)/4 + 1;
         for ; loop54 < loopLimit54; loop54++ {
            for i := 0; i < array185.Size; i++ {
                array185.Data[i]--
            }
            for i := 0; i < array184.Size; i++ {
                if array184.Data[i] == 57 {
                    return array184
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array179
         params1.Data[1] = array183
         params1.Data[2] = array184
         params1.Data[3] = array185
         var array186 *Array = Func36(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array186.RefC--
         if array186.RefC == 0 {
             array186.Data = nil
             array186 = nil
         }
         array185.RefC--
         if array185.RefC == 0 {
             array185.Data = nil
             array185 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array179
         params1.Data[1] = array183
         params1.Data[2] = array184
         var array187 *Array = Func32(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array187.RefC--
         if array187.RefC == 0 {
             array187.Data = nil
             array187 = nil
         }
      }
      for i := 0; i < array183.Size; i++ {
          if array183.Data[i] == 18 {
              return array183
          }
      }
      array184.RefC--
      if array184.RefC == 0 {
          array184.Data = nil
          array184 = nil
      }
      array183.RefC--
      if array183.RefC == 0 {
          array183.Data = nil
          array183 = nil
      }
   }
   for i := 0; i < array179.Size; i++ {
       array179.Data[i]--
   }
   for i := 0; i < array179.Size; i++ {
       if array179.Data[i] == 88 {
           return array179
       }
   }
   return array179;
}

