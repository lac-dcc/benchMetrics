include("program_julia_head.jl")
function func29(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit5 = (50)/4 + 1
   for i in 1:loopLimit5 
      if (PATH0 & 1) != 0
         array8 = nothing
         if pCounter > 1
             array8 = vars.data[pCounter]
             pCounter -= 1
             array8.refC += 1
         else
             array8 = JArray(zeros(Int, 802), 802, 1, 8)
         end
         loopLimit6 = (50)/5 + 1
         for i in 1:loopLimit6 
            for i in 0:(array8.size-1) 
               array8.data[i+1] -= 1
            end
            for i in 1:array8.size
                if array8.data[i] == 69
                        return array8
               end
            end
         end
         array8.refC -= 1
         if array8.refC == 0
             empty!(array8.data)
             array8 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array9 = func40(params0, loopsFactor);
         array9.refC -= 1
         if array9.refC == 0
             empty!(array9.data)
             array9 = nothing
         end
      end
      array11 = nothing
      if pCounter > 1
          array11 = vars.data[pCounter]
          pCounter -= 1
          array11.refC += 1
      else
          array11 = JArray(zeros(Int, 784), 784, 1, 11)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array11)
      params0.size += 1
      array12 = func41(params0, loopsFactor);
      for i in 1:array11.size
          if array11.data[i] == 73
                  return array11
         end
      end
      array12.refC -= 1
      if array12.refC == 0
          empty!(array12.data)
          array12 = nothing
      end
      array11.refC -= 1
      if array11.refC == 0
          empty!(array11.data)
          array11 = nothing
      end
   end
   array14 = nothing
   if pCounter > 1
       array14 = vars.data[pCounter]
       pCounter -= 1
       array14.refC += 1
   else
       array14 = JArray(zeros(Int, 862), 862, 1, 14)
   end
   return array14;
end

