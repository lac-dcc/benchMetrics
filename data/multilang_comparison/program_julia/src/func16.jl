include("program_julia_head.jl")
function func16(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array91 = nothing
   if pCounter > 1
       array91 = vars.data[pCounter]
       pCounter -= 1
       array91.refC += 1
   else
       array91 = JArray(zeros(Int, 445), 445, 1, 91)
   end
   loopLimit28 = (50)/3 + 1
   for i in 1:loopLimit28 
      if (PATH0 & 1) != 0
         array92 = nothing
         if pCounter > 1
             array92 = vars.data[pCounter]
             pCounter -= 1
             array92.refC += 1
         else
             array92 = JArray(zeros(Int, 756), 756, 1, 92)
         end
         loopLimit29 = (50)/4 + 1
         for i in 1:loopLimit29 
            for i in 0:(array92.size-1) 
               array92.data[i+1] -= 1
            end
            for i in 1:array91.size
                if array91.data[i] == 87
                        return array91
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array91)
         params0.size += 1
         push!(params0.data, array92)
         params0.size += 1
         array93 = func36(params0, get_path(), loopsFactor);
         array93.refC -= 1
         if array93.refC == 0
             empty!(array93.data)
             array93 = nothing
         end
         array92.refC -= 1
         if array92.refC == 0
             empty!(array92.data)
             array92 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array91)
         params0.size += 1
         array94 = func32(params0, get_path(), loopsFactor);
         array94.refC -= 1
         if array94.refC == 0
             empty!(array94.data)
             array94 = nothing
         end
      end
      array95 = nothing
      if pCounter > 1
          array95 = vars.data[pCounter]
          pCounter -= 1
          array95.refC += 1
      else
          array95 = JArray(zeros(Int, 9), 9, 1, 95)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array91)
      params0.size += 1
      push!(params0.data, array95)
      params0.size += 1
      array96 = func33(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array97 = nothing
         if pCounter > 1
             array97 = vars.data[pCounter]
             pCounter -= 1
             array97.refC += 1
         else
             array97 = JArray(zeros(Int, 342), 342, 1, 97)
         end
         loopLimit30 = (50)/4 + 1
         for i in 1:loopLimit30 
            for i in 0:(array97.size-1) 
               array97.data[i+1] -= 1
            end
            for i in 1:array96.size
                if array96.data[i] == 1
                        return array96
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array91)
         params1.size += 1
         push!(params1.data, array95)
         params1.size += 1
         push!(params1.data, array96)
         params1.size += 1
         push!(params1.data, array97)
         params1.size += 1
         array98 = func42(params1, get_path(), loopsFactor);
         array98.refC -= 1
         if array98.refC == 0
             empty!(array98.data)
             array98 = nothing
         end
         array97.refC -= 1
         if array97.refC == 0
             empty!(array97.data)
             array97 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array91)
         params1.size += 1
         push!(params1.data, array95)
         params1.size += 1
         push!(params1.data, array96)
         params1.size += 1
         array99 = func34(params1, loopsFactor);
         array99.refC -= 1
         if array99.refC == 0
             empty!(array99.data)
             array99 = nothing
         end
      end
      for i in 1:array96.size
          if array96.data[i] == 99
                  return array96
         end
      end
      array96.refC -= 1
      if array96.refC == 0
          empty!(array96.data)
          array96 = nothing
      end
      array95.refC -= 1
      if array95.refC == 0
          empty!(array95.data)
          array95 = nothing
      end
   end
   for i in 0:(array91.size-1) 
      array91.data[i+1] -= 1
   end
   for i in 1:array91.size
       if array91.data[i] == 39
               return array91
      end
   end
   return array91;
end

