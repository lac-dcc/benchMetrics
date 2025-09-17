include("program_julia_head.jl")
function func34(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array40 = nothing
   if pCounter > 1
       array40 = vars.data[pCounter]
       pCounter -= 1
       array40.refC += 1
   else
       array40 = JArray(zeros(Int, 708), 708, 1, 40)
   end
   loopLimit14 = (50)/4 + 1
   for i in 1:loopLimit14 
      if (PATH0 & 1) != 0
         array41 = nothing
         if pCounter > 1
             array41 = vars.data[pCounter]
             pCounter -= 1
             array41.refC += 1
         else
             array41 = JArray(zeros(Int, 715), 715, 1, 41)
         end
         loopLimit15 = (50)/5 + 1
         for i in 1:loopLimit15 
            for i in 0:(array40.size-1) 
               array40.data[i+1] -= 1
            end
            for i in 1:array41.size
                if array41.data[i] == 96
                        return array41
               end
            end
         end
         array41.refC -= 1
         if array41.refC == 0
             empty!(array41.data)
             array41 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array40)
         params0.size += 1
         array42 = func50(params0, loopsFactor);
         array42.refC -= 1
         if array42.refC == 0
             empty!(array42.data)
             array42 = nothing
         end
      end
      array43 = nothing
      if pCounter > 1
          array43 = vars.data[pCounter]
          pCounter -= 1
          array43.refC += 1
      else
          array43 = JArray(zeros(Int, 245), 245, 1, 43)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array40)
      params0.size += 1
      push!(params0.data, array43)
      params0.size += 1
      array44 = func51(params0, loopsFactor);
      for i in 1:array43.size
          if array43.data[i] == 55
                  return array43
         end
      end
      array44.refC -= 1
      if array44.refC == 0
          empty!(array44.data)
          array44 = nothing
      end
      array43.refC -= 1
      if array43.refC == 0
          empty!(array43.data)
          array43 = nothing
      end
   end
   for i in 0:(array40.size-1) 
      array40.data[i+1] -= 1
   end
   for i in 1:array40.size
       if array40.data[i] == 64
               return array40
      end
   end
   return array40;
end

