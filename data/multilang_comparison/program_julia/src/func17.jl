include("program_julia_head.jl")
function func17(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array136 = nothing
   if pCounter > 1
       array136 = vars.data[pCounter]
       pCounter -= 1
       array136.refC += 1
   else
       array136 = JArray(zeros(Int, 436), 436, 1, 136)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array136)
   params0.size += 1
   array137 = func24(params0, get_path(), loopsFactor);
   loopLimit40 = (50)/3 + 1
   for i in 1:loopLimit40 
      for i in 0:(array137.size-1) 
         array137.data[i+1] += 1
      end
   end
   for i in 1:array136.size
       if array136.data[i] == 4
               return array136
      end
   end
   array137.refC -= 1
   if array137.refC == 0
       empty!(array137.data)
       array137 = nothing
   end
   return array136;
end

