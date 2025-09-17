include("program_julia_head.jl")
function func38(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array77 = nothing
      if pCounter > 1
          array77 = vars.data[pCounter]
          pCounter -= 1
          array77.refC += 1
      else
          array77 = JArray(zeros(Int, 416), 416, 1, 77)
      end
      loopLimit25 = (50)/4 + 1
      for i in 1:loopLimit25 
         for i in 0:(array77.size-1) 
            array77.data[i+1] -= 1
         end
         for i in 1:array77.size
             if array77.data[i] == 24
                     return array77
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array77)
      params0.size += 1
      array78 = func46(params0, get_path(), loopsFactor);
      array78.refC -= 1
      if array78.refC == 0
          empty!(array78.data)
          array78 = nothing
      end
      array77.refC -= 1
      if array77.refC == 0
          empty!(array77.data)
          array77 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array79 = func40(params0, loopsFactor);
      array79.refC -= 1
      if array79.refC == 0
          empty!(array79.data)
          array79 = nothing
      end
   end
   array80 = nothing
   if pCounter > 1
       array80 = vars.data[pCounter]
       pCounter -= 1
       array80.refC += 1
   else
       array80 = JArray(zeros(Int, 36), 36, 1, 80)
   end
   return array80;
end

