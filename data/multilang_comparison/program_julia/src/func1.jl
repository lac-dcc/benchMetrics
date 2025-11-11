include("program_julia_head.jl")
function func1(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array193 = nothing
   if pCounter > 1
       array193 = vars.data[pCounter]
       pCounter -= 1
       array193.refC += 1
   else
       array193 = JArray(zeros(Int, 462), 462, 1, 193)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array193)
   params0.size += 1
   array194 = func3(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array197 = nothing
      if pCounter > 1
          array197 = vars.data[pCounter]
          pCounter -= 1
          array197.refC += 1
      else
          array197 = JArray(zeros(Int, 951), 951, 1, 197)
      end
      loopLimit57 = (50)/2 + 1
      for i in 1:loopLimit57 
         for i in 0:(array193.size-1) 
            array193.data[i+1] -= 1
         end
         for i in 1:array194.size
             if array194.data[i] == 37
                     return array194
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array193)
      params1.size += 1
      push!(params1.data, array194)
      params1.size += 1
      push!(params1.data, array197)
      params1.size += 1
      array198 = func10(params1, get_path(), loopsFactor);
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
      push!(params1.data, array193)
      params1.size += 1
      push!(params1.data, array194)
      params1.size += 1
      array199 = func4(params1, get_path(), loopsFactor);
      array199.refC -= 1
      if array199.refC == 0
          empty!(array199.data)
          array199 = nothing
      end
   end
   array193.refC -= 1
   if array193.refC == 0
       empty!(array193.data)
       array193 = nothing
   end
   return array194;
end

