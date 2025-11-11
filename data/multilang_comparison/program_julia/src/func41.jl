include("program_julia_head.jl")
function func41(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array13 = nothing
   if pCounter > 1
       array13 = vars.data[pCounter]
       pCounter -= 1
       array13.refC += 1
   else
       array13 = JArray(zeros(Int, 370), 370, 1, 13)
   end
   loopLimit7 = (50)/5 + 1
   for i in 1:loopLimit7 
      for i in 0:(array13.size-1) 
         array13.data[i+1] += 1
      end
   end
   for i in 1:array13.size
       if array13.data[i] == 91
               return array13
      end
   end
   return array13;
end

