include("program_julia_head.jl")
function func7(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit47 = (50)/2 + 1
   for i in 1:loopLimit47 
      if (PATH0 & 1) != 0
         array160 = nothing
         if pCounter > 1
             array160 = vars.data[pCounter]
             pCounter -= 1
             array160.refC += 1
         else
             array160 = JArray(zeros(Int, 690), 690, 1, 160)
         end
         loopLimit48 = (50)/3 + 1
         for i in 1:loopLimit48 
            for i in 0:(array160.size-1) 
               array160.data[i+1] -= 1
            end
            for i in 1:array160.size
                if array160.data[i] == 57
                        return array160
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array160)
         params0.size += 1
         array161 = func24(params0, get_path(), loopsFactor);
         array161.refC -= 1
         if array161.refC == 0
             empty!(array161.data)
             array161 = nothing
         end
         array160.refC -= 1
         if array160.refC == 0
             empty!(array160.data)
             array160 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array162 = func16(params0, get_path(), loopsFactor);
         array162.refC -= 1
         if array162.refC == 0
             empty!(array162.data)
             array162 = nothing
         end
      end
      array163 = nothing
      if pCounter > 1
          array163 = vars.data[pCounter]
          pCounter -= 1
          array163.refC += 1
      else
          array163 = JArray(zeros(Int, 312), 312, 1, 163)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array163)
      params0.size += 1
      array164 = func17(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array165 = nothing
         if pCounter > 1
             array165 = vars.data[pCounter]
             pCounter -= 1
             array165.refC += 1
         else
             array165 = JArray(zeros(Int, 346), 346, 1, 165)
         end
         loopLimit49 = (50)/3 + 1
         for i in 1:loopLimit49 
            for i in 0:(array163.size-1) 
               array163.data[i+1] -= 1
            end
            for i in 1:array163.size
                if array163.data[i] == 16
                        return array163
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array163)
         params1.size += 1
         push!(params1.data, array164)
         params1.size += 1
         push!(params1.data, array165)
         params1.size += 1
         array166 = func28(params1, get_path(), loopsFactor);
         array166.refC -= 1
         if array166.refC == 0
             empty!(array166.data)
             array166 = nothing
         end
         array165.refC -= 1
         if array165.refC == 0
             empty!(array165.data)
             array165 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array163)
         params1.size += 1
         push!(params1.data, array164)
         params1.size += 1
         array167 = func22(params1, get_path(), loopsFactor);
         array167.refC -= 1
         if array167.refC == 0
             empty!(array167.data)
             array167 = nothing
         end
      end
      for i in 1:array163.size
          if array163.data[i] == 47
                  return array163
         end
      end
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
   end
   array168 = nothing
   if pCounter > 1
       array168 = vars.data[pCounter]
       pCounter -= 1
       array168.refC += 1
   else
       array168 = JArray(zeros(Int, 970), 970, 1, 168)
   end
   return array168;
end

