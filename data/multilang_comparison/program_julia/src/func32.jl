include("program_julia_head.jl")
function func32(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array87 = nothing
   if pCounter > 1
       array87 = vars.data[pCounter]
       pCounter -= 1
       array87.refC += 1
   else
       array87 = JArray(zeros(Int, 813), 813, 1, 87)
   end
   loopLimit27 = (50)/4 + 1
   for i in 1:loopLimit27 
      if (PATH0 & 1) != 0
         array88 = nothing
         if pCounter > 1
             array88 = vars.data[pCounter]
             pCounter -= 1
             array88.refC += 1
         else
             array88 = JArray(zeros(Int, 668), 668, 1, 88)
         end
         loopLimit28 = (50)/5 + 1
         for i in 1:loopLimit28 
            for i in 0:(array87.size-1) 
               array87.data[i+1] -= 1
            end
            for i in 1:array88.size
                if array88.data[i] == 26
                        return array88
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array87)
         params0.size += 1
         push!(params0.data, array88)
         params0.size += 1
         array89 = func46(params0, get_path(), loopsFactor);
         array89.refC -= 1
         if array89.refC == 0
             empty!(array89.data)
             array89 = nothing
         end
         array88.refC -= 1
         if array88.refC == 0
             empty!(array88.data)
             array88 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array87)
         params0.size += 1
         array90 = func40(params0, loopsFactor);
         array90.refC -= 1
         if array90.refC == 0
             empty!(array90.data)
             array90 = nothing
         end
      end
      array91 = nothing
      if pCounter > 1
          array91 = vars.data[pCounter]
          pCounter -= 1
          array91.refC += 1
      else
          array91 = JArray(zeros(Int, 684), 684, 1, 91)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array87)
      params0.size += 1
      push!(params0.data, array91)
      params0.size += 1
      array92 = func41(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array93 = nothing
         if pCounter > 1
             array93 = vars.data[pCounter]
             pCounter -= 1
             array93.refC += 1
         else
             array93 = JArray(zeros(Int, 936), 936, 1, 93)
         end
         loopLimit29 = (50)/5 + 1
         for i in 1:loopLimit29 
            for i in 0:(array93.size-1) 
               array93.data[i+1] -= 1
            end
            for i in 1:array91.size
                if array91.data[i] == 56
                        return array91
               end
            end
         end
         array93.refC -= 1
         if array93.refC == 0
             empty!(array93.data)
             array93 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array87)
         params1.size += 1
         push!(params1.data, array91)
         params1.size += 1
         push!(params1.data, array92)
         params1.size += 1
         array94 = func50(params1, loopsFactor);
         array94.refC -= 1
         if array94.refC == 0
             empty!(array94.data)
             array94 = nothing
         end
      end
      for i in 1:array92.size
          if array92.data[i] == 12
                  return array92
         end
      end
      array92.refC -= 1
      if array92.refC == 0
          empty!(array92.data)
          array92 = nothing
      end
      array91.refC -= 1
      if array91.refC == 0
          empty!(array91.data)
          array91 = nothing
      end
   end
   for i in 0:(array87.size-1) 
      array87.data[i+1] -= 1
   end
   for i in 1:array87.size
       if array87.data[i] == 59
               return array87
      end
   end
   return array87;
end

