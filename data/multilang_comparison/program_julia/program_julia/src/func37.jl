include("program_julia_head.jl")
function func37(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit23 = (50)/4 + 1
   for i in 1:loopLimit23 
      if (PATH0 & 1) != 0
         array71 = nothing
         if pCounter > 1
             array71 = vars.data[pCounter]
             pCounter -= 1
             array71.refC += 1
         else
             array71 = JArray(zeros(Int, 340), 340, 1, 71)
         end
         loopLimit24 = (50)/5 + 1
         for i in 1:loopLimit24 
            for i in 0:(array71.size-1) 
               array71.data[i+1] -= 1
            end
            for i in 1:array71.size
                if array71.data[i] == 10
                        return array71
               end
            end
         end
         array71.refC -= 1
         if array71.refC == 0
             empty!(array71.data)
             array71 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array72 = func50(params0, loopsFactor);
         array72.refC -= 1
         if array72.refC == 0
             empty!(array72.data)
             array72 = nothing
         end
      end
      array73 = nothing
      if pCounter > 1
          array73 = vars.data[pCounter]
          pCounter -= 1
          array73.refC += 1
      else
          array73 = JArray(zeros(Int, 661), 661, 1, 73)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array73)
      params0.size += 1
      array74 = func51(params0, loopsFactor);
      for i in 1:array74.size
          if array74.data[i] == 20
                  return array74
         end
      end
      array74.refC -= 1
      if array74.refC == 0
          empty!(array74.data)
          array74 = nothing
      end
      array73.refC -= 1
      if array73.refC == 0
          empty!(array73.data)
          array73 = nothing
      end
   end
   array75 = nothing
   if pCounter > 1
       array75 = vars.data[pCounter]
       pCounter -= 1
       array75.refC += 1
   else
       array75 = JArray(zeros(Int, 736), 736, 1, 75)
   end
   return array75;
end

