include("program_julia_head.jl")
function func47(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array11 = nothing
   if pCounter > 1
       array11 = vars.data[pCounter]
       pCounter -= 1
       array11.refC += 1
   else
       array11 = JArray(zeros(Int, 919), 919, 1, 11)
   end
   return array11;
end

