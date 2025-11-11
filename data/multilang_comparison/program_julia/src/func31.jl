include("program_julia_head.jl")
function func31(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array28 = nothing
   if pCounter > 1
       array28 = vars.data[pCounter]
       pCounter -= 1
       array28.refC += 1
   else
       array28 = JArray(zeros(Int, 97), 97, 1, 28)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array28)
   params0.size += 1
   array29 = func35(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array32 = nothing
      if pCounter > 1
          array32 = vars.data[pCounter]
          pCounter -= 1
          array32.refC += 1
      else
          array32 = JArray(zeros(Int, 444), 444, 1, 32)
      end
      loopLimit11 = (50)/4 + 1
      for i in 1:loopLimit11 
         for i in 0:(array32.size-1) 
            array32.data[i+1] -= 1
         end
         for i in 1:array29.size
             if array29.data[i] == 29
                     return array29
            end
         end
      end
      array32.refC -= 1
      if array32.refC == 0
          empty!(array32.data)
          array32 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array28)
      params1.size += 1
      push!(params1.data, array29)
      params1.size += 1
      array33 = func40(params1, loopsFactor);
      array33.refC -= 1
      if array33.refC == 0
          empty!(array33.data)
          array33 = nothing
      end
   end
   array28.refC -= 1
   if array28.refC == 0
       empty!(array28.data)
       array28 = nothing
   end
   return array29;
end

