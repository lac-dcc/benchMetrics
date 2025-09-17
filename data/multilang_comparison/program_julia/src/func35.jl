include("program_julia_head.jl")
function func35(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array49 = nothing
   if pCounter > 1
       array49 = vars.data[pCounter]
       pCounter -= 1
       array49.refC += 1
   else
       array49 = JArray(zeros(Int, 491), 491, 1, 49)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array49)
   params0.size += 1
   array50 = func42(params0, get_path(), loopsFactor);
   loopLimit16 = (50)/4 + 1
   for i in 1:loopLimit16 
      for i in 0:(array50.size-1) 
         array50.data[i+1] += 1
      end
   end
   for i in 1:array49.size
       if array49.data[i] == 32
               return array49
      end
   end
   array49.refC -= 1
   if array49.refC == 0
       empty!(array49.data)
       array49 = nothing
   end
   return array50;
end

