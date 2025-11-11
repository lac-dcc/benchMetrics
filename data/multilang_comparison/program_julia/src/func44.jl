include("program_julia_head.jl")
function func44(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array21 = nothing
   if pCounter > 1
       array21 = vars.data[pCounter]
       pCounter -= 1
       array21.refC += 1
   else
       array21 = JArray(zeros(Int, 87), 87, 1, 21)
   end
   return array21;
end

