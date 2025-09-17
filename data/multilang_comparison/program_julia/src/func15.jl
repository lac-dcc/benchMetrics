include("program_julia_head.jl")
function func15(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array209 = nothing
   if pCounter > 1
       array209 = vars.data[pCounter]
       pCounter -= 1
       array209.refC += 1
   else
       array209 = JArray(zeros(Int, 744), 744, 1, 209)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array209)
   params0.size += 1
   array210 = func18(params0, get_path(), loopsFactor);
   loopLimit60 = (50)/2 + 1
   for i in 1:loopLimit60 
      for i in 0:(array210.size-1) 
         array210.data[i+1] += 1
      end
   end
   for i in 1:array209.size
       if array209.data[i] == 36
               return array209
      end
   end
   array210.refC -= 1
   if array210.refC == 0
       empty!(array210.data)
       array210 = nothing
   end
   return array209;
end

