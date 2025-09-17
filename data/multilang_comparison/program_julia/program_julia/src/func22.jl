include("program_julia_head.jl")
function func22(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array55 = nothing
   if pCounter > 1
       array55 = vars.data[pCounter]
       pCounter -= 1
       array55.refC += 1
   else
       array55 = JArray(zeros(Int, 143), 143, 1, 55)
   end
   loopLimit18 = (50)/4 + 1
   for i in 1:loopLimit18 
      if (PATH0 & 1) != 0
         array56 = nothing
         if pCounter > 1
             array56 = vars.data[pCounter]
             pCounter -= 1
             array56.refC += 1
         else
             array56 = JArray(zeros(Int, 11), 11, 1, 56)
         end
         loopLimit19 = (50)/5 + 1
         for i in 1:loopLimit19 
            for i in 0:(array55.size-1) 
               array55.data[i+1] -= 1
            end
            for i in 1:array56.size
                if array56.data[i] == 76
                        return array56
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array55)
         params0.size += 1
         push!(params0.data, array56)
         params0.size += 1
         array57 = func42(params0, get_path(), loopsFactor);
         array57.refC -= 1
         if array57.refC == 0
             empty!(array57.data)
             array57 = nothing
         end
         array56.refC -= 1
         if array56.refC == 0
             empty!(array56.data)
             array56 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array55)
         params0.size += 1
         array58 = func34(params0, get_path(), loopsFactor);
         array58.refC -= 1
         if array58.refC == 0
             empty!(array58.data)
             array58 = nothing
         end
      end
      array59 = nothing
      if pCounter > 1
          array59 = vars.data[pCounter]
          pCounter -= 1
          array59.refC += 1
      else
          array59 = JArray(zeros(Int, 538), 538, 1, 59)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array55)
      params0.size += 1
      push!(params0.data, array59)
      params0.size += 1
      array60 = func35(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array61 = nothing
         if pCounter > 1
             array61 = vars.data[pCounter]
             pCounter -= 1
             array61.refC += 1
         else
             array61 = JArray(zeros(Int, 904), 904, 1, 61)
         end
         loopLimit20 = (50)/5 + 1
         for i in 1:loopLimit20 
            for i in 0:(array60.size-1) 
               array60.data[i+1] -= 1
            end
            for i in 1:array55.size
                if array55.data[i] == 88
                        return array55
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array55)
         params1.size += 1
         push!(params1.data, array59)
         params1.size += 1
         push!(params1.data, array60)
         params1.size += 1
         push!(params1.data, array61)
         params1.size += 1
         array62 = func46(params1, get_path(), loopsFactor);
         array62.refC -= 1
         if array62.refC == 0
             empty!(array62.data)
             array62 = nothing
         end
         array61.refC -= 1
         if array61.refC == 0
             empty!(array61.data)
             array61 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array55)
         params1.size += 1
         push!(params1.data, array59)
         params1.size += 1
         push!(params1.data, array60)
         params1.size += 1
         array63 = func40(params1, loopsFactor);
         array63.refC -= 1
         if array63.refC == 0
             empty!(array63.data)
             array63 = nothing
         end
      end
      for i in 1:array60.size
          if array60.data[i] == 43
                  return array60
         end
      end
      array60.refC -= 1
      if array60.refC == 0
          empty!(array60.data)
          array60 = nothing
      end
      array59.refC -= 1
      if array59.refC == 0
          empty!(array59.data)
          array59 = nothing
      end
   end
   for i in 0:(array55.size-1) 
      array55.data[i+1] -= 1
   end
   for i in 1:array55.size
       if array55.data[i] == 90
               return array55
      end
   end
   return array55;
end

