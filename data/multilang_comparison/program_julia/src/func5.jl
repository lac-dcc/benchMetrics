include("program_julia_head.jl")
function func5(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array153 = nothing
   if pCounter > 1
       array153 = vars.data[pCounter]
       pCounter -= 1
       array153.refC += 1
   else
       array153 = JArray(zeros(Int, 829), 829, 1, 153)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array153)
   params0.size += 1
   array154 = func10(params0, get_path(), loopsFactor);
   loopLimit45 = (50)/3 + 1
   for i in 1:loopLimit45 
      for i in 0:(array153.size-1) 
         array153.data[i+1] += 1
      end
   end
   for i in 1:array154.size
       if array154.data[i] == 69
               return array154
      end
   end
   array154.refC -= 1
   if array154.refC == 0
       empty!(array154.data)
       array154 = nothing
   end
   return array153;
end

