include("program_julia_head.jl")
function func30(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array27 = nothing
      if pCounter > 1
          array27 = vars.data[pCounter]
          pCounter -= 1
          array27.refC += 1
      else
          array27 = JArray(zeros(Int, 434), 434, 1, 27)
      end
      loopLimit10 = (50)/4 + 1
      for i in 1:loopLimit10 
         for i in 0:(array27.size-1) 
            array27.data[i+1] -= 1
         end
         for i in 1:array27.size
             if array27.data[i] == 1
                     return array27
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array27)
      params0.size += 1
      array28 = func42(params0, get_path(), loopsFactor);
      array28.refC -= 1
      if array28.refC == 0
          empty!(array28.data)
          array28 = nothing
      end
      array27.refC -= 1
      if array27.refC == 0
          empty!(array27.data)
          array27 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array39 = func34(params0, get_path(), loopsFactor);
      array39.refC -= 1
      if array39.refC == 0
          empty!(array39.data)
          array39 = nothing
      end
   end
   array45 = nothing
   if pCounter > 1
       array45 = vars.data[pCounter]
       pCounter -= 1
       array45.refC += 1
   else
       array45 = JArray(zeros(Int, 841), 841, 1, 45)
   end
   return array45;
end

