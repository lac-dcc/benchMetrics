include("program_julia_head.jl")
function func41(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array20 = nothing
   if pCounter > 1
       array20 = vars.data[pCounter]
       pCounter -= 1
       array20.refC += 1
   else
       array20 = JArray(zeros(Int, 814), 814, 1, 20)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array20)
   params0.size += 1
   array21 = func46(params0, get_path(), loopsFactor);
   loopLimit8 = (50)/5 + 1
   for i in 1:loopLimit8 
      for i in 0:(array20.size-1) 
         array20.data[i+1] += 1
      end
   end
   for i in 1:array21.size
       if array21.data[i] == 50
               return array21
      end
   end
   array20.refC -= 1
   if array20.refC == 0
       empty!(array20.data)
       array20 = nothing
   end
   return array21;
end

