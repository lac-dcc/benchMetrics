package main
import "math/rand"
var _ = rand.Intn
func Func2(vars *ArrayParam, PATH0 uint64 , loopsFactor int) *Array{
   var pCounter int = vars.Size;
   _ = pCounter
   var array183 *Array
   if pCounter > 0 {
       array183 = vars.Data[pCounter-1]
       pCounter--
       array183.RefC++
   } else {
       array183 = &Array{
           Size: 483,
           RefC: 1,
           Id: 183,
           Data: make([]uint32, 483),
       }
   }
   var loop53 int = 0;
   var loopLimit53 int = (50)/2 + 1;
   for ; loop53 < loopLimit53; loop53++ {
      if (PATH0 & 1) != 0 {
         var array184 *Array
         if pCounter > 0 {
             array184 = vars.Data[pCounter-1]
             pCounter--
             array184.RefC++
         } else {
             array184 = &Array{
                 Size: 607,
                 RefC: 1,
                 Id: 184,
                 Data: make([]uint32, 607),
             }
         }
         var loop54 int = 0;
         var loopLimit54 int = (50)/3 + 1;
         for ; loop54 < loopLimit54; loop54++ {
            for i := 0; i < array183.Size; i++ {
                array183.Data[i]--
            }
            for i := 0; i < array184.Size; i++ {
                if array184.Data[i] == 14 {
                    return array184
                }
            }
         }
         var params0 ArrayParam
         params0.Size = 2
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array183
         params0.Data[1] = array184
         var array185 *Array = Func18(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array185.RefC--
         if array185.RefC == 0 {
             array185.Data = nil
             array185 = nil
         }
         array184.RefC--
         if array184.RefC == 0 {
             array184.Data = nil
             array184 = nil
         }
      
      } else {
         var params0 ArrayParam
         params0.Size = 1
         params0.Data = make([]*Array, params0.Size)
         params0.Data[0] = array183
         var array186 *Array = Func14(&params0, getPath(), loopsFactor);
         params0.Data = nil
         params0.Size = 0
         array186.RefC--
         if array186.RefC == 0 {
             array186.Data = nil
             array186 = nil
         }
      }
      var array187 *Array
      if pCounter > 0 {
          array187 = vars.Data[pCounter-1]
          pCounter--
          array187.RefC++
      } else {
          array187 = &Array{
              Size: 618,
              RefC: 1,
              Id: 187,
              Data: make([]uint32, 618),
          }
      }
      var params0 ArrayParam
      params0.Size = 2
      params0.Data = make([]*Array, params0.Size)
      params0.Data[0] = array183
      params0.Data[1] = array187
      var array188 *Array = Func15(&params0, loopsFactor);
      params0.Data = nil
      params0.Size = 0
      if (PATH0 & 2) != 0 {
         var array189 *Array
         if pCounter > 0 {
             array189 = vars.Data[pCounter-1]
             pCounter--
             array189.RefC++
         } else {
             array189 = &Array{
                 Size: 388,
                 RefC: 1,
                 Id: 189,
                 Data: make([]uint32, 388),
             }
         }
         var loop55 int = 0;
         var loopLimit55 int = (50)/3 + 1;
         for ; loop55 < loopLimit55; loop55++ {
            for i := 0; i < array188.Size; i++ {
                array188.Data[i]--
            }
            for i := 0; i < array187.Size; i++ {
                if array187.Data[i] == 57 {
                    return array187
                }
            }
         }
         var params1 ArrayParam
         params1.Size = 4
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array183
         params1.Data[1] = array187
         params1.Data[2] = array188
         params1.Data[3] = array189
         var array190 *Array = Func24(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array190.RefC--
         if array190.RefC == 0 {
             array190.Data = nil
             array190 = nil
         }
         array189.RefC--
         if array189.RefC == 0 {
             array189.Data = nil
             array189 = nil
         }
      
      } else {
         var params1 ArrayParam
         params1.Size = 3
         params1.Data = make([]*Array, params1.Size)
         params1.Data[0] = array183
         params1.Data[1] = array187
         params1.Data[2] = array188
         var array191 *Array = Func16(&params1, getPath(), loopsFactor);
         params1.Data = nil
         params1.Size = 0
         array191.RefC--
         if array191.RefC == 0 {
             array191.Data = nil
             array191 = nil
         }
      }
      for i := 0; i < array187.Size; i++ {
          if array187.Data[i] == 17 {
              return array187
          }
      }
      array188.RefC--
      if array188.RefC == 0 {
          array188.Data = nil
          array188 = nil
      }
      array187.RefC--
      if array187.RefC == 0 {
          array187.Data = nil
          array187 = nil
      }
   }
   for i := 0; i < array183.Size; i++ {
       array183.Data[i]--
   }
   for i := 0; i < array183.Size; i++ {
       if array183.Data[i] == 63 {
           return array183
       }
   }
   return array183;
}

