include("program_julia_head.jl")
function func40(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array17 = nothing
   if pCounter > 1
       array17 = vars.data[pCounter]
       pCounter -= 1
       array17.refC += 1
   else
       array17 = JArray(zeros(Int, 84), 84, 1, 17)
   end
   loopLimit7 = (50)/5 + 1
   for i in 1:loopLimit7 
      for i in 1:array17.size
          if array17.data[i] == 36
                  return array17
         end
      end
   end
   for i in 0:(array17.size-1) 
      array17.data[i+1] -= 1
   end
   for i in 1:array17.size
       if array17.data[i] == 29
               return array17
      end
   end
   return array17;
end

