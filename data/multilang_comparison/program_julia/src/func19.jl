include("program_julia_head.jl")
function func19(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit38 = (50)/3 + 1
   for i in 1:loopLimit38 
      if (PATH0 & 1) != 0
         array126 = nothing
         if pCounter > 1
             array126 = vars.data[pCounter]
             pCounter -= 1
             array126.refC += 1
         else
             array126 = JArray(zeros(Int, 890), 890, 1, 126)
         end
         loopLimit39 = (50)/4 + 1
         for i in 1:loopLimit39 
            for i in 0:(array126.size-1) 
               array126.data[i+1] -= 1
            end
            for i in 1:array126.size
                if array126.data[i] == 46
                        return array126
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array126)
         params0.size += 1
         array127 = func36(params0, get_path(), loopsFactor);
         array127.refC -= 1
         if array127.refC == 0
             empty!(array127.data)
             array127 = nothing
         end
         array126.refC -= 1
         if array126.refC == 0
             empty!(array126.data)
             array126 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array128 = func32(params0, get_path(), loopsFactor);
         array128.refC -= 1
         if array128.refC == 0
             empty!(array128.data)
             array128 = nothing
         end
      end
      array129 = nothing
      if pCounter > 1
          array129 = vars.data[pCounter]
          pCounter -= 1
          array129.refC += 1
      else
          array129 = JArray(zeros(Int, 788), 788, 1, 129)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array129)
      params0.size += 1
      array130 = func33(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array131 = nothing
         if pCounter > 1
             array131 = vars.data[pCounter]
             pCounter -= 1
             array131.refC += 1
         else
             array131 = JArray(zeros(Int, 990), 990, 1, 131)
         end
         loopLimit40 = (50)/4 + 1
         for i in 1:loopLimit40 
            for i in 0:(array130.size-1) 
               array130.data[i+1] -= 1
            end
            for i in 1:array130.size
                if array130.data[i] == 63
                        return array130
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array129)
         params1.size += 1
         push!(params1.data, array130)
         params1.size += 1
         push!(params1.data, array131)
         params1.size += 1
         array132 = func42(params1, get_path(), loopsFactor);
         array132.refC -= 1
         if array132.refC == 0
             empty!(array132.data)
             array132 = nothing
         end
         array131.refC -= 1
         if array131.refC == 0
             empty!(array131.data)
             array131 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array129)
         params1.size += 1
         push!(params1.data, array130)
         params1.size += 1
         array133 = func34(params1, loopsFactor);
         array133.refC -= 1
         if array133.refC == 0
             empty!(array133.data)
             array133 = nothing
         end
      end
      for i in 1:array130.size
          if array130.data[i] == 52
                  return array130
         end
      end
      array130.refC -= 1
      if array130.refC == 0
          empty!(array130.data)
          array130 = nothing
      end
      array129.refC -= 1
      if array129.refC == 0
          empty!(array129.data)
          array129 = nothing
      end
   end
   array134 = nothing
   if pCounter > 1
       array134 = vars.data[pCounter]
       pCounter -= 1
       array134.refC += 1
   else
       array134 = JArray(zeros(Int, 996), 996, 1, 134)
   end
   return array134;
end

