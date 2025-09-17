include("program_julia_head.jl")
function func4(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array142 = nothing
   if pCounter > 1
       array142 = vars.data[pCounter]
       pCounter -= 1
       array142.refC += 1
   else
       array142 = JArray(zeros(Int, 681), 681, 1, 142)
   end
   loopLimit42 = (50)/3 + 1
   for i in 1:loopLimit42 
      if (PATH0 & 1) != 0
         array143 = nothing
         if pCounter > 1
             array143 = vars.data[pCounter]
             pCounter -= 1
             array143.refC += 1
         else
             array143 = JArray(zeros(Int, 647), 647, 1, 143)
         end
         loopLimit43 = (50)/4 + 1
         for i in 1:loopLimit43 
            for i in 0:(array142.size-1) 
               array142.data[i+1] -= 1
            end
            for i in 1:array143.size
                if array143.data[i] == 51
                        return array143
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array142)
         params0.size += 1
         push!(params0.data, array143)
         params0.size += 1
         array144 = func24(params0, get_path(), loopsFactor);
         array144.refC -= 1
         if array144.refC == 0
             empty!(array144.data)
             array144 = nothing
         end
         array143.refC -= 1
         if array143.refC == 0
             empty!(array143.data)
             array143 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array142)
         params0.size += 1
         array145 = func16(params0, get_path(), loopsFactor);
         array145.refC -= 1
         if array145.refC == 0
             empty!(array145.data)
             array145 = nothing
         end
      end
      array146 = nothing
      if pCounter > 1
          array146 = vars.data[pCounter]
          pCounter -= 1
          array146.refC += 1
      else
          array146 = JArray(zeros(Int, 215), 215, 1, 146)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array142)
      params0.size += 1
      push!(params0.data, array146)
      params0.size += 1
      array147 = func17(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array148 = nothing
         if pCounter > 1
             array148 = vars.data[pCounter]
             pCounter -= 1
             array148.refC += 1
         else
             array148 = JArray(zeros(Int, 629), 629, 1, 148)
         end
         loopLimit44 = (50)/4 + 1
         for i in 1:loopLimit44 
            for i in 0:(array146.size-1) 
               array146.data[i+1] -= 1
            end
            for i in 1:array142.size
                if array142.data[i] == 85
                        return array142
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array142)
         params1.size += 1
         push!(params1.data, array146)
         params1.size += 1
         push!(params1.data, array147)
         params1.size += 1
         push!(params1.data, array148)
         params1.size += 1
         array149 = func28(params1, get_path(), loopsFactor);
         array149.refC -= 1
         if array149.refC == 0
             empty!(array149.data)
             array149 = nothing
         end
         array148.refC -= 1
         if array148.refC == 0
             empty!(array148.data)
             array148 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array142)
         params1.size += 1
         push!(params1.data, array146)
         params1.size += 1
         push!(params1.data, array147)
         params1.size += 1
         array150 = func22(params1, get_path(), loopsFactor);
         array150.refC -= 1
         if array150.refC == 0
             empty!(array150.data)
             array150 = nothing
         end
      end
      for i in 1:array146.size
          if array146.data[i] == 38
                  return array146
         end
      end
      array147.refC -= 1
      if array147.refC == 0
          empty!(array147.data)
          array147 = nothing
      end
      array146.refC -= 1
      if array146.refC == 0
          empty!(array146.data)
          array146 = nothing
      end
   end
   for i in 0:(array142.size-1) 
      array142.data[i+1] -= 1
   end
   for i in 1:array142.size
       if array142.data[i] == 89
               return array142
      end
   end
   return array142;
end

