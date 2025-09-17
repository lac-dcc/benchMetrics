include("program_julia_head.jl")
function func45(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array36 = nothing
   if pCounter > 1
       array36 = vars.data[pCounter]
       pCounter -= 1
       array36.refC += 1
   else
       array36 = JArray(zeros(Int, 497), 497, 1, 36)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array36)
   params0.size += 1
   array37 = func51(params0, loopsFactor);
   array37.refC -= 1
   if array37.refC == 0
       empty!(array37.data)
       array37 = nothing
   end
   return array36;
end

