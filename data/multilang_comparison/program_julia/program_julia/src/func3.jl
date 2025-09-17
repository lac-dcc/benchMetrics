include("program_julia_head.jl")
function func3(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array227 = nothing
   if pCounter > 1
       array227 = vars.data[pCounter]
       pCounter -= 1
       array227.refC += 1
   else
       array227 = JArray(zeros(Int, 328), 328, 1, 227)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array227)
   params0.size += 1
   array228 = func6(params0, get_path(), loopsFactor);
   loopLimit65 = (50)/2 + 1
   for i in 1:loopLimit65 
      for i in 0:(array227.size-1) 
         array227.data[i+1] += 1
      end
   end
   for i in 1:array227.size
       if array227.data[i] == 17
               return array227
      end
   end
   array228.refC -= 1
   if array228.refC == 0
       empty!(array228.data)
       array228 = nothing
   end
   return array227;
end

