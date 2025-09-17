include("program_julia_head.jl")
function func43(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit11 = (50)/4 + 1
   for i in 1:loopLimit11 
   end
   array30 = nothing
   if pCounter > 1
       array30 = vars.data[pCounter]
       pCounter -= 1
       array30.refC += 1
   else
       array30 = JArray(zeros(Int, 286), 286, 1, 30)
   end
   return array30;
end

