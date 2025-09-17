include("program_julia_head.jl")
function func23(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array66 = nothing
   if pCounter > 1
       array66 = vars.data[pCounter]
       pCounter -= 1
       array66.refC += 1
   else
       array66 = JArray(zeros(Int, 139), 139, 1, 66)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array66)
   params0.size += 1
   array67 = func28(params0, get_path(), loopsFactor);
   loopLimit21 = (50)/4 + 1
   for i in 1:loopLimit21 
      for i in 0:(array67.size-1) 
         array67.data[i+1] += 1
      end
   end
   for i in 1:array66.size
       if array66.data[i] == 42
               return array66
      end
   end
   array67.refC -= 1
   if array67.refC == 0
       empty!(array67.data)
       array67 = nothing
   end
   return array66;
end

