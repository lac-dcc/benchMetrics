include("program_julia_head.jl")
function func37(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit17 = (50)/4 + 1
   for i in 1:loopLimit17 
   end
   array50 = nothing
   if pCounter > 1
       array50 = vars.data[pCounter]
       pCounter -= 1
       array50.refC += 1
   else
       array50 = JArray(zeros(Int, 859), 859, 1, 50)
   end
   return array50;
end

