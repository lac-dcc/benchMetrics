include("program_julia_head.jl")
function func34(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array25 = nothing
   if pCounter > 1
       array25 = vars.data[pCounter]
       pCounter -= 1
       array25.refC += 1
   else
       array25 = JArray(zeros(Int, 368), 368, 1, 25)
   end
   loopLimit9 = (50)/4 + 1
   for i in 1:loopLimit9 
      for i in 1:array25.size
          if array25.data[i] == 12
                  return array25
         end
      end
   end
   for i in 0:(array25.size-1) 
      array25.data[i+1] -= 1
   end
   for i in 1:array25.size
       if array25.data[i] == 94
               return array25
      end
   end
   return array25;
end

