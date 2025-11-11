include("program_julia_head.jl")
function func23(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array45 = nothing
   if pCounter > 1
       array45 = vars.data[pCounter]
       pCounter -= 1
       array45.refC += 1
   else
       array45 = JArray(zeros(Int, 555), 555, 1, 45)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array45)
   params0.size += 1
   array46 = func28(params0, get_path(), loopsFactor);
   loopLimit15 = (50)/4 + 1
   for i in 1:loopLimit15 
      for i in 0:(array45.size-1) 
         array45.data[i+1] += 1
      end
   end
   for i in 1:array45.size
       if array45.data[i] == 41
               return array45
      end
   end
   array46.refC -= 1
   if array46.refC == 0
       empty!(array46.data)
       array46 = nothing
   end
   return array45;
end

