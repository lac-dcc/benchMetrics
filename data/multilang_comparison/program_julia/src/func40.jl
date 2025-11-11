include("program_julia_head.jl")
function func40(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array10 = nothing
   if pCounter > 1
       array10 = vars.data[pCounter]
       pCounter -= 1
       array10.refC += 1
   else
       array10 = JArray(zeros(Int, 42), 42, 1, 10)
   end
   for i in 0:(array10.size-1) 
      array10.data[i+1] -= 1
   end
   for i in 1:array10.size
       if array10.data[i] == 21
               return array10
      end
   end
   return array10;
end

