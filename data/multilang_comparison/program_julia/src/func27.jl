include("program_julia_head.jl")
function func27(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array83 = nothing
   if pCounter > 1
       array83 = vars.data[pCounter]
       pCounter -= 1
       array83.refC += 1
   else
       array83 = JArray(zeros(Int, 881), 881, 1, 83)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array83)
   params0.size += 1
   array84 = func33(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array87 = nothing
      if pCounter > 1
          array87 = vars.data[pCounter]
          pCounter -= 1
          array87.refC += 1
      else
          array87 = JArray(zeros(Int, 813), 813, 1, 87)
      end
      loopLimit27 = (50)/3 + 1
      for i in 1:loopLimit27 
         for i in 0:(array83.size-1) 
            array83.data[i+1] -= 1
         end
         for i in 1:array87.size
             if array87.data[i] == 95
                     return array87
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array83)
      params1.size += 1
      push!(params1.data, array84)
      params1.size += 1
      push!(params1.data, array87)
      params1.size += 1
      array88 = func42(params1, get_path(), loopsFactor);
      array88.refC -= 1
      if array88.refC == 0
          empty!(array88.data)
          array88 = nothing
      end
      array87.refC -= 1
      if array87.refC == 0
          empty!(array87.data)
          array87 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array83)
      params1.size += 1
      push!(params1.data, array84)
      params1.size += 1
      array89 = func34(params1, loopsFactor);
      array89.refC -= 1
      if array89.refC == 0
          empty!(array89.data)
          array89 = nothing
      end
   end
   array84.refC -= 1
   if array84.refC == 0
       empty!(array84.data)
       array84 = nothing
   end
   return array83;
end

