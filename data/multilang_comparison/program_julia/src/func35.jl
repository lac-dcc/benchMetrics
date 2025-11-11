include("program_julia_head.jl")
function func35(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array30 = nothing
   if pCounter > 1
       array30 = vars.data[pCounter]
       pCounter -= 1
       array30.refC += 1
   else
       array30 = JArray(zeros(Int, 756), 756, 1, 30)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array30)
   params0.size += 1
   array31 = func42(params0, get_path(), loopsFactor);
   loopLimit10 = (50)/4 + 1
   for i in 1:loopLimit10 
      for i in 0:(array30.size-1) 
         array30.data[i+1] += 1
      end
   end
   for i in 1:array31.size
       if array31.data[i] == 65
               return array31
      end
   end
   array30.refC -= 1
   if array30.refC == 0
       empty!(array30.data)
       array30 = nothing
   end
   return array31;
end

