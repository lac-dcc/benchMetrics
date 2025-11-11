include("program_julia_head.jl")
function func33(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array85 = nothing
   if pCounter > 1
       array85 = vars.data[pCounter]
       pCounter -= 1
       array85.refC += 1
   else
       array85 = JArray(zeros(Int, 163), 163, 1, 85)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array85)
   params0.size += 1
   array86 = func36(params0, get_path(), loopsFactor);
   loopLimit26 = (50)/3 + 1
   for i in 1:loopLimit26 
      for i in 0:(array86.size-1) 
         array86.data[i+1] += 1
      end
   end
   for i in 1:array85.size
       if array85.data[i] == 59
               return array85
      end
   end
   array85.refC -= 1
   if array85.refC == 0
       empty!(array85.data)
       array85 = nothing
   end
   return array86;
end

