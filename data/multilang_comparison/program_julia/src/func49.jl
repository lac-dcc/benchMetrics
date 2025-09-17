include("program_julia_head.jl")
function func49(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array15 = nothing
   if pCounter > 1
       array15 = vars.data[pCounter]
       pCounter -= 1
       array15.refC += 1
   else
       array15 = JArray(zeros(Int, 873), 873, 1, 15)
   end
   return array15;
end

