include("program_julia_head.jl")
function func26(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array78 = nothing
      if pCounter > 1
          array78 = vars.data[pCounter]
          pCounter -= 1
          array78.refC += 1
      else
          array78 = JArray(zeros(Int, 924), 924, 1, 78)
      end
      loopLimit25 = (50)/3 + 1
      for i in 1:loopLimit25 
         for i in 0:(array78.size-1) 
            array78.data[i+1] -= 1
         end
         for i in 1:array78.size
             if array78.data[i] == 24
                     return array78
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array78)
      params0.size += 1
      array79 = func36(params0, get_path(), loopsFactor);
      array79.refC -= 1
      if array79.refC == 0
          empty!(array79.data)
          array79 = nothing
      end
      array78.refC -= 1
      if array78.refC == 0
          empty!(array78.data)
          array78 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array80 = func32(params0, get_path(), loopsFactor);
      array80.refC -= 1
      if array80.refC == 0
          empty!(array80.data)
          array80 = nothing
      end
   end
   array81 = nothing
   if pCounter > 1
       array81 = vars.data[pCounter]
       pCounter -= 1
       array81.refC += 1
   else
       array81 = JArray(zeros(Int, 379), 379, 1, 81)
   end
   return array81;
end

