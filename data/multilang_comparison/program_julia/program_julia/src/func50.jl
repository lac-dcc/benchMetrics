include("program_julia_head.jl")
function func50(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array24 = nothing
   if pCounter > 1
       array24 = vars.data[pCounter]
       pCounter -= 1
       array24.refC += 1
   else
       array24 = JArray(zeros(Int, 399), 399, 1, 24)
   end
   for i in 0:(array24.size-1) 
      array24.data[i+1] -= 1
   end
   for i in 1:array24.size
       if array24.data[i] == 76
               return array24
      end
   end
   return array24;
end

