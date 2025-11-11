include("program_julia_head.jl")
function func45(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array23 = nothing
   if pCounter > 1
       array23 = vars.data[pCounter]
       pCounter -= 1
       array23.refC += 1
   else
       array23 = JArray(zeros(Int, 403), 403, 1, 23)
   end
   return array23;
end

