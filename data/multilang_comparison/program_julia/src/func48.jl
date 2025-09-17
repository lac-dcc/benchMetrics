include("program_julia_head.jl")
function func48(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array13 = nothing
   if pCounter > 1
       array13 = vars.data[pCounter]
       pCounter -= 1
       array13.refC += 1
   else
       array13 = JArray(zeros(Int, 370), 370, 1, 13)
   end
   return array13;
end

