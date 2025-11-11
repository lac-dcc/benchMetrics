include("program_julia_head.jl")
function func17(vars::JArray_param, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array104 = nothing
   if pCounter > 1
       array104 = vars.data[pCounter]
       pCounter -= 1
       array104.refC += 1
   else
       array104 = JArray(zeros(Int, 269), 269, 1, 104)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array104)
   params0.size += 1
   array105 = func24(params0, get_path(), loopsFactor);
   loopLimit31 = (50)/3 + 1
   for i in 1:loopLimit31 
      for i in 0:(array104.size-1) 
         array104.data[i+1] += 1
      end
   end
   for i in 1:array104.size
       if array104.data[i] == 92
               return array104
      end
   end
   array105.refC -= 1
   if array105.refC == 0
       empty!(array105.data)
       array105 = nothing
   end
   return array104;
end

