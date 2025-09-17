include("program_julia_head.jl")
function func33(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array117 = nothing
   if pCounter > 1
       array117 = vars.data[pCounter]
       pCounter -= 1
       array117.refC += 1
   else
       array117 = JArray(zeros(Int, 993), 993, 1, 117)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array117)
   params0.size += 1
   array118 = func36(params0, get_path(), loopsFactor);
   loopLimit35 = (50)/3 + 1
   for i in 1:loopLimit35 
      for i in 0:(array118.size-1) 
         array118.data[i+1] += 1
      end
   end
   for i in 1:array117.size
       if array117.data[i] == 13
               return array117
      end
   end
   array117.refC -= 1
   if array117.refC == 0
       empty!(array117.data)
       array117 = nothing
   end
   return array118;
end

