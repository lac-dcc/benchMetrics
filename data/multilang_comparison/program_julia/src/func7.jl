include("program_julia_head.jl")
function func7(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit56 = (50)/2 + 1
   for i in 1:loopLimit56 
      if (PATH0 & 1) != 0
         array192 = nothing
         if pCounter > 1
             array192 = vars.data[pCounter]
             pCounter -= 1
             array192.refC += 1
         else
             array192 = JArray(zeros(Int, 462), 462, 1, 192)
         end
         loopLimit57 = (50)/3 + 1
         for i in 1:loopLimit57 
            for i in 0:(array192.size-1) 
               array192.data[i+1] -= 1
            end
            for i in 1:array192.size
                if array192.data[i] == 92
                        return array192
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array192)
         params0.size += 1
         array193 = func24(params0, get_path(), loopsFactor);
         array193.refC -= 1
         if array193.refC == 0
             empty!(array193.data)
             array193 = nothing
         end
         array192.refC -= 1
         if array192.refC == 0
             empty!(array192.data)
             array192 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array194 = func16(params0, get_path(), loopsFactor);
         array194.refC -= 1
         if array194.refC == 0
             empty!(array194.data)
             array194 = nothing
         end
      end
      array195 = nothing
      if pCounter > 1
          array195 = vars.data[pCounter]
          pCounter -= 1
          array195.refC += 1
      else
          array195 = JArray(zeros(Int, 157), 157, 1, 195)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array195)
      params0.size += 1
      array196 = func17(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array197 = nothing
         if pCounter > 1
             array197 = vars.data[pCounter]
             pCounter -= 1
             array197.refC += 1
         else
             array197 = JArray(zeros(Int, 947), 947, 1, 197)
         end
         loopLimit58 = (50)/3 + 1
         for i in 1:loopLimit58 
            for i in 0:(array196.size-1) 
               array196.data[i+1] -= 1
            end
            for i in 1:array195.size
                if array195.data[i] == 21
                        return array195
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array195)
         params1.size += 1
         push!(params1.data, array196)
         params1.size += 1
         push!(params1.data, array197)
         params1.size += 1
         array198 = func28(params1, get_path(), loopsFactor);
         array198.refC -= 1
         if array198.refC == 0
             empty!(array198.data)
             array198 = nothing
         end
         array197.refC -= 1
         if array197.refC == 0
             empty!(array197.data)
             array197 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array195)
         params1.size += 1
         push!(params1.data, array196)
         params1.size += 1
         array199 = func22(params1, get_path(), loopsFactor);
         array199.refC -= 1
         if array199.refC == 0
             empty!(array199.data)
             array199 = nothing
         end
      end
      for i in 1:array195.size
          if array195.data[i] == 25
                  return array195
         end
      end
      array196.refC -= 1
      if array196.refC == 0
          empty!(array196.data)
          array196 = nothing
      end
      array195.refC -= 1
      if array195.refC == 0
          empty!(array195.data)
          array195 = nothing
      end
   end
   array200 = nothing
   if pCounter > 1
       array200 = vars.data[pCounter]
       pCounter -= 1
       array200.refC += 1
   else
       array200 = JArray(zeros(Int, 81), 81, 1, 200)
   end
   return array200;
end

