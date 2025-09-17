include("program_julia_head.jl")
function func19(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit47 = (50)/3 + 1
   for i in 1:loopLimit47 
      if (PATH0 & 1) != 0
         array158 = nothing
         if pCounter > 1
             array158 = vars.data[pCounter]
             pCounter -= 1
             array158.refC += 1
         else
             array158 = JArray(zeros(Int, 367), 367, 1, 158)
         end
         loopLimit48 = (50)/4 + 1
         for i in 1:loopLimit48 
            for i in 0:(array158.size-1) 
               array158.data[i+1] -= 1
            end
            for i in 1:array158.size
                if array158.data[i] == 90
                        return array158
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array158)
         params0.size += 1
         array159 = func36(params0, get_path(), loopsFactor);
         array159.refC -= 1
         if array159.refC == 0
             empty!(array159.data)
             array159 = nothing
         end
         array158.refC -= 1
         if array158.refC == 0
             empty!(array158.data)
             array158 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array160 = func32(params0, get_path(), loopsFactor);
         array160.refC -= 1
         if array160.refC == 0
             empty!(array160.data)
             array160 = nothing
         end
      end
      array161 = nothing
      if pCounter > 1
          array161 = vars.data[pCounter]
          pCounter -= 1
          array161.refC += 1
      else
          array161 = JArray(zeros(Int, 168), 168, 1, 161)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array161)
      params0.size += 1
      array162 = func33(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array163 = nothing
         if pCounter > 1
             array163 = vars.data[pCounter]
             pCounter -= 1
             array163.refC += 1
         else
             array163 = JArray(zeros(Int, 312), 312, 1, 163)
         end
         loopLimit49 = (50)/4 + 1
         for i in 1:loopLimit49 
            for i in 0:(array162.size-1) 
               array162.data[i+1] -= 1
            end
            for i in 1:array162.size
                if array162.data[i] == 46
                        return array162
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array161)
         params1.size += 1
         push!(params1.data, array162)
         params1.size += 1
         push!(params1.data, array163)
         params1.size += 1
         array164 = func42(params1, get_path(), loopsFactor);
         array164.refC -= 1
         if array164.refC == 0
             empty!(array164.data)
             array164 = nothing
         end
         array163.refC -= 1
         if array163.refC == 0
             empty!(array163.data)
             array163 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array161)
         params1.size += 1
         push!(params1.data, array162)
         params1.size += 1
         array165 = func34(params1, get_path(), loopsFactor);
         array165.refC -= 1
         if array165.refC == 0
             empty!(array165.data)
             array165 = nothing
         end
      end
      for i in 1:array161.size
          if array161.data[i] == 29
                  return array161
         end
      end
      array162.refC -= 1
      if array162.refC == 0
          empty!(array162.data)
          array162 = nothing
      end
      array161.refC -= 1
      if array161.refC == 0
          empty!(array161.data)
          array161 = nothing
      end
   end
   array166 = nothing
   if pCounter > 1
       array166 = vars.data[pCounter]
       pCounter -= 1
       array166.refC += 1
   else
       array166 = JArray(zeros(Int, 946), 946, 1, 166)
   end
   return array166;
end

