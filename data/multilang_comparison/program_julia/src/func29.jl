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
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array8)
         params0.size += 1
         array9 = func46(params0, get_path(), loopsFactor);
         array9.refC -= 1
         if array9.refC == 0
             empty!(array9.data)
             array9 = nothing
         end
         array8.refC -= 1
         if array8.refC == 0
             empty!(array8.data)
             array8 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array16 = func40(params0, loopsFactor);
         array16.refC -= 1
         if array16.refC == 0
             empty!(array16.data)
             array16 = nothing
         end
      end
      array18 = nothing
      if pCounter > 1
          array18 = vars.data[pCounter]
          pCounter -= 1
          array18.refC += 1
      else
          array18 = JArray(zeros(Int, 857), 857, 1, 18)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array18)
      params0.size += 1
      array19 = func41(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array22 = nothing
         if pCounter > 1
             array22 = vars.data[pCounter]
             pCounter -= 1
             array22.refC += 1
         else
             array22 = JArray(zeros(Int, 808), 808, 1, 22)
         end
         loopLimit9 = (50)/5 + 1
         for i in 1:loopLimit9 
            for i in 0:(array18.size-1) 
               array18.data[i+1] -= 1
            end
            for i in 1:array22.size
                if array22.data[i] == 88
                        return array22
               end
            end
         end
         array22.refC -= 1
         if array22.refC == 0
             empty!(array22.data)
             array22 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array18)
         params1.size += 1
         push!(params1.data, array19)
         params1.size += 1
         array23 = func50(params1, loopsFactor);
         array23.refC -= 1
         if array23.refC == 0
             empty!(array23.data)
             array23 = nothing
         end
      end
      for i in 1:array19.size
          if array19.data[i] == 12
                  return array19
         end
      end
      array19.refC -= 1
      if array19.refC == 0
          empty!(array19.data)
          array19 = nothing
      end
      array18.refC -= 1
      if array18.refC == 0
          empty!(array18.data)
          array18 = nothing
      end
   end
   array25 = nothing
   if pCounter > 1
       array25 = vars.data[pCounter]
       pCounter -= 1
       array25.refC += 1
   else
       array25 = JArray(zeros(Int, 226), 226, 1, 25)
   end
   return array25;
end

