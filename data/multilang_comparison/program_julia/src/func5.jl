include("program_julia_head.jl")
function func5(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array121 = nothing
   if pCounter > 1
       array121 = vars.data[pCounter]
       pCounter -= 1
       array121.refC += 1
   else
       array121 = JArray(zeros(Int, 506), 506, 1, 121)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array121)
   params0.size += 1
   array122 = func10(params0, get_path(), loopsFactor);
   loopLimit36 = (50)/3 + 1
   for i in 1:loopLimit36 
      for i in 0:(array121.size-1) 
         array121.data[i+1] += 1
      end
   end
   for i in 1:array121.size
       if array121.data[i] == 28
               return array121
      end
   end
   array121.refC -= 1
   if array121.refC == 0
       empty!(array121.data)
       array121 = nothing
   end
   return array122;
end

