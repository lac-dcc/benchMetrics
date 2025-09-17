include("program_julia_head.jl")
function func20(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array168 = nothing
      if pCounter > 1
          array168 = vars.data[pCounter]
          pCounter -= 1
          array168.refC += 1
      else
          array168 = JArray(zeros(Int, 631), 631, 1, 168)
      end
      loopLimit50 = (50)/3 + 1
      for i in 1:loopLimit50 
         for i in 0:(array168.size-1) 
            array168.data[i+1] -= 1
         end
         for i in 1:array168.size
             if array168.data[i] == 27
                     return array168
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array168)
      params0.size += 1
      array169 = func28(params0, get_path(), loopsFactor);
      array169.refC -= 1
      if array169.refC == 0
          empty!(array169.data)
          array169 = nothing
      end
      array168.refC -= 1
      if array168.refC == 0
          empty!(array168.data)
          array168 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array170 = func22(params0, get_path(), loopsFactor);
      array170.refC -= 1
      if array170.refC == 0
          empty!(array170.data)
          array170 = nothing
      end
   end
   array171 = nothing
   if pCounter > 1
       array171 = vars.data[pCounter]
       pCounter -= 1
       array171.refC += 1
   else
       array171 = JArray(zeros(Int, 512), 512, 1, 171)
   end
   return array171;
end

