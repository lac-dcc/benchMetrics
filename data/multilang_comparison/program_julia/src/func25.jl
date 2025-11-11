include("program_julia_head.jl")
function func25(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit22 = (50)/3 + 1
   for i in 1:loopLimit22 
      if (PATH0 & 1) != 0
         array69 = nothing
         if pCounter > 1
             array69 = vars.data[pCounter]
             pCounter -= 1
             array69.refC += 1
         else
             array69 = JArray(zeros(Int, 828), 828, 1, 69)
         end
         loopLimit23 = (50)/4 + 1
         for i in 1:loopLimit23 
            for i in 0:(array69.size-1) 
               array69.data[i+1] -= 1
            end
            for i in 1:array69.size
                if array69.data[i] == 46
                        return array69
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array69)
         params0.size += 1
         array70 = func42(params0, get_path(), loopsFactor);
         array70.refC -= 1
         if array70.refC == 0
             empty!(array70.data)
             array70 = nothing
         end
         array69.refC -= 1
         if array69.refC == 0
             empty!(array69.data)
             array69 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array71 = func34(params0, loopsFactor);
         array71.refC -= 1
         if array71.refC == 0
             empty!(array71.data)
             array71 = nothing
         end
      end
      array72 = nothing
      if pCounter > 1
          array72 = vars.data[pCounter]
          pCounter -= 1
          array72.refC += 1
      else
          array72 = JArray(zeros(Int, 810), 810, 1, 72)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array72)
      params0.size += 1
      array73 = func35(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array74 = nothing
         if pCounter > 1
             array74 = vars.data[pCounter]
             pCounter -= 1
             array74.refC += 1
         else
             array74 = JArray(zeros(Int, 661), 661, 1, 74)
         end
         loopLimit24 = (50)/4 + 1
         for i in 1:loopLimit24 
            for i in 0:(array72.size-1) 
               array72.data[i+1] -= 1
            end
            for i in 1:array73.size
                if array73.data[i] == 5
                        return array73
               end
            end
         end
         array74.refC -= 1
         if array74.refC == 0
             empty!(array74.data)
             array74 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array72)
         params1.size += 1
         push!(params1.data, array73)
         params1.size += 1
         array75 = func40(params1, loopsFactor);
         array75.refC -= 1
         if array75.refC == 0
             empty!(array75.data)
             array75 = nothing
         end
      end
      for i in 1:array72.size
          if array72.data[i] == 26
                  return array72
         end
      end
      array73.refC -= 1
      if array73.refC == 0
          empty!(array73.data)
          array73 = nothing
      end
      array72.refC -= 1
      if array72.refC == 0
          empty!(array72.data)
          array72 = nothing
      end
   end
   array76 = nothing
   if pCounter > 1
       array76 = vars.data[pCounter]
       pCounter -= 1
       array76.refC += 1
   else
       array76 = JArray(zeros(Int, 522), 522, 1, 76)
   end
   return array76;
end

