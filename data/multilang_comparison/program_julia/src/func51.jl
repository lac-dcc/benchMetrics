include("program_julia_head.jl")
function func51(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array38 = nothing
   if pCounter > 1
       array38 = vars.data[pCounter]
       pCounter -= 1
       array38.refC += 1
   else
       array38 = JArray(zeros(Int, 683), 683, 1, 38)
   end
   loopLimit13 = (50)/4 + 1
   for i in 1:loopLimit13 
      for i in 0:(array38.size-1) 
         array38.data[i+1] += 1
      end
   end
   for i in 1:array38.size
       if array38.data[i] == 28
               return array38
      end
   end
   return array38;
end

