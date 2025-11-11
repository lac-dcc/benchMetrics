include("program_julia_head.jl")
function func15(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array177 = nothing
   if pCounter > 1
       array177 = vars.data[pCounter]
       pCounter -= 1
       array177.refC += 1
   else
       array177 = JArray(zeros(Int, 338), 338, 1, 177)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array177)
   params0.size += 1
   array178 = func18(params0, get_path(), loopsFactor);
   loopLimit51 = (50)/2 + 1
   for i in 1:loopLimit51 
      for i in 0:(array177.size-1) 
         array177.data[i+1] += 1
      end
   end
   for i in 1:array177.size
       if array177.data[i] == 17
               return array177
      end
   end
   array178.refC -= 1
   if array178.refC == 0
       empty!(array178.data)
       array178 = nothing
   end
   return array177;
end

