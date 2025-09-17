include("program_julia_head.jl")
function func39(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array82 = nothing
   if pCounter > 1
       array82 = vars.data[pCounter]
       pCounter -= 1
       array82.refC += 1
   else
       array82 = JArray(zeros(Int, 71), 71, 1, 82)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array82)
   params0.size += 1
   array83 = func41(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array84 = nothing
      if pCounter > 1
          array84 = vars.data[pCounter]
          pCounter -= 1
          array84.refC += 1
      else
          array84 = JArray(zeros(Int, 881), 881, 1, 84)
      end
      loopLimit26 = (50)/4 + 1
      for i in 1:loopLimit26 
         for i in 0:(array83.size-1) 
            array83.data[i+1] -= 1
         end
         for i in 1:array83.size
             if array83.data[i] == 94
                     return array83
            end
         end
      end
      array84.refC -= 1
      if array84.refC == 0
          empty!(array84.data)
          array84 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array82)
      params1.size += 1
      push!(params1.data, array83)
      params1.size += 1
      array85 = func50(params1, loopsFactor);
      array85.refC -= 1
      if array85.refC == 0
          empty!(array85.data)
          array85 = nothing
      end
   end
   array82.refC -= 1
   if array82.refC == 0
       empty!(array82.data)
       array82 = nothing
   end
   return array83;
end

