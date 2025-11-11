include("program_julia_head.jl")
function func3(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array195 = nothing
   if pCounter > 1
       array195 = vars.data[pCounter]
       pCounter -= 1
       array195.refC += 1
   else
       array195 = JArray(zeros(Int, 57), 57, 1, 195)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array195)
   params0.size += 1
   array196 = func6(params0, get_path(), loopsFactor);
   loopLimit56 = (50)/2 + 1
   for i in 1:loopLimit56 
      for i in 0:(array196.size-1) 
         array196.data[i+1] += 1
      end
   end
   for i in 1:array195.size
       if array195.data[i] == 91
               return array195
      end
   end
   array195.refC -= 1
   if array195.refC == 0
       empty!(array195.data)
       array195 = nothing
   end
   return array196;
end

