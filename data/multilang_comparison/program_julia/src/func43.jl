include("program_julia_head.jl")
function func43(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array19 = nothing
   if pCounter > 1
       array19 = vars.data[pCounter]
       pCounter -= 1
       array19.refC += 1
   else
       array19 = JArray(zeros(Int, 814), 814, 1, 19)
   end
   return array19;
end

