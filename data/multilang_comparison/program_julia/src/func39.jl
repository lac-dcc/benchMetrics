include("program_julia_head.jl")
function func39(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array56 = nothing
   if pCounter > 1
       array56 = vars.data[pCounter]
       pCounter -= 1
       array56.refC += 1
   else
       array56 = JArray(zeros(Int, 143), 143, 1, 56)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array56)
   params0.size += 1
   array57 = func41(params0, loopsFactor);
   array56.refC -= 1
   if array56.refC == 0
       empty!(array56.data)
       array56 = nothing
   end
   return array57;
end

