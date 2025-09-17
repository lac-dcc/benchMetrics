include("program_julia_head.jl")
function func11(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit3 = (50)/3 + 1
   for i in 1:loopLimit3 
      if (PATH0 & 1) != 0
         array5 = nothing
         if pCounter > 1
             array5 = vars.data[pCounter]
             pCounter -= 1
             array5.refC += 1
         else
             array5 = JArray(zeros(Int, 736), 736, 1, 5)
         end
         loopLimit4 = (50)/4 + 1
         for i in 1:loopLimit4 
            for i in 0:(array5.size-1) 
               array5.data[i+1] -= 1
            end
            for i in 1:array5.size
                if array5.data[i] == 67
                        return array5
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array5)
         params0.size += 1
         array6 = func28(params0, get_path(), loopsFactor);
         array6.refC -= 1
         if array6.refC == 0
             empty!(array6.data)
             array6 = nothing
         end
         array5.refC -= 1
         if array5.refC == 0
             empty!(array5.data)
             array5 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array54 = func22(params0, get_path(), loopsFactor);
         array54.refC -= 1
         if array54.refC == 0
             empty!(array54.data)
             array54 = nothing
         end
      end
      array64 = nothing
      if pCounter > 1
          array64 = vars.data[pCounter]
          pCounter -= 1
          array64.refC += 1
      else
          array64 = JArray(zeros(Int, 772), 772, 1, 64)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array64)
      params0.size += 1
      array65 = func23(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array68 = nothing
         if pCounter > 1
             array68 = vars.data[pCounter]
             pCounter -= 1
             array68.refC += 1
         else
             array68 = JArray(zeros(Int, 197), 197, 1, 68)
         end
         loopLimit22 = (50)/4 + 1
         for i in 1:loopLimit22 
            for i in 0:(array64.size-1) 
               array64.data[i+1] -= 1
            end
            for i in 1:array64.size
                if array64.data[i] == 4
                        return array64
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array64)
         params1.size += 1
         push!(params1.data, array65)
         params1.size += 1
         push!(params1.data, array68)
         params1.size += 1
         array69 = func36(params1, get_path(), loopsFactor);
         array69.refC -= 1
         if array69.refC == 0
             empty!(array69.data)
             array69 = nothing
         end
         array68.refC -= 1
         if array68.refC == 0
             empty!(array68.data)
             array68 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array64)
         params1.size += 1
         push!(params1.data, array65)
         params1.size += 1
         array86 = func32(params1, get_path(), loopsFactor);
         array86.refC -= 1
         if array86.refC == 0
             empty!(array86.data)
             array86 = nothing
         end
      end
      for i in 1:array64.size
          if array64.data[i] == 10
                  return array64
         end
      end
      array65.refC -= 1
      if array65.refC == 0
          empty!(array65.data)
          array65 = nothing
      end
      array64.refC -= 1
      if array64.refC == 0
          empty!(array64.data)
          array64 = nothing
      end
   end
   array95 = nothing
   if pCounter > 1
       array95 = vars.data[pCounter]
       pCounter -= 1
       array95.refC += 1
   else
       array95 = JArray(zeros(Int, 342), 342, 1, 95)
   end
   return array95;
end

