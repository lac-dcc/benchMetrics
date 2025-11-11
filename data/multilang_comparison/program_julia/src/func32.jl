include("program_julia_head.jl")
function func32(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array59 = nothing
   if pCounter > 1
       array59 = vars.data[pCounter]
       pCounter -= 1
       array59.refC += 1
   else
       array59 = JArray(zeros(Int, 538), 538, 1, 59)
   end
   loopLimit19 = (50)/4 + 1
   for i in 1:loopLimit19 
      if (PATH0 & 1) != 0
         array60 = nothing
         if pCounter > 1
             array60 = vars.data[pCounter]
             pCounter -= 1
             array60.refC += 1
         else
             array60 = JArray(zeros(Int, 606), 606, 1, 60)
         end
         loopLimit20 = (50)/5 + 1
         for i in 1:loopLimit20 
            for i in 0:(array59.size-1) 
               array59.data[i+1] -= 1
            end
            for i in 1:array59.size
                if array59.data[i] == 18
                        return array59
               end
            end
         end
         array60.refC -= 1
         if array60.refC == 0
             empty!(array60.data)
             array60 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array59)
         params0.size += 1
         array61 = func40(params0, loopsFactor);
         array61.refC -= 1
         if array61.refC == 0
             empty!(array61.data)
             array61 = nothing
         end
      end
      array62 = nothing
      if pCounter > 1
          array62 = vars.data[pCounter]
          pCounter -= 1
          array62.refC += 1
      else
          array62 = JArray(zeros(Int, 369), 369, 1, 62)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array59)
      params0.size += 1
      push!(params0.data, array62)
      params0.size += 1
      array63 = func41(params0, loopsFactor);
      for i in 1:array59.size
          if array59.data[i] == 24
                  return array59
         end
      end
      array63.refC -= 1
      if array63.refC == 0
          empty!(array63.data)
          array63 = nothing
      end
      array62.refC -= 1
      if array62.refC == 0
          empty!(array62.data)
          array62 = nothing
      end
   end
   for i in 0:(array59.size-1) 
      array59.data[i+1] -= 1
   end
   for i in 1:array59.size
       if array59.data[i] == 83
               return array59
      end
   end
   return array59;
end

