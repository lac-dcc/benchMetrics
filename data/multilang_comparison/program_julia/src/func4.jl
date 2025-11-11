include("program_julia_head.jl")
function func4(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array110 = nothing
   if pCounter > 1
       array110 = vars.data[pCounter]
       pCounter -= 1
       array110.refC += 1
   else
       array110 = JArray(zeros(Int, 209), 209, 1, 110)
   end
   loopLimit33 = (50)/3 + 1
   for i in 1:loopLimit33 
      if (PATH0 & 1) != 0
         array111 = nothing
         if pCounter > 1
             array111 = vars.data[pCounter]
             pCounter -= 1
             array111.refC += 1
         else
             array111 = JArray(zeros(Int, 581), 581, 1, 111)
         end
         loopLimit34 = (50)/4 + 1
         for i in 1:loopLimit34 
            for i in 0:(array111.size-1) 
               array111.data[i+1] -= 1
            end
            for i in 1:array110.size
                if array110.data[i] == 32
                        return array110
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array110)
         params0.size += 1
         push!(params0.data, array111)
         params0.size += 1
         array112 = func24(params0, get_path(), loopsFactor);
         array112.refC -= 1
         if array112.refC == 0
             empty!(array112.data)
             array112 = nothing
         end
         array111.refC -= 1
         if array111.refC == 0
             empty!(array111.data)
             array111 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array110)
         params0.size += 1
         array113 = func16(params0, get_path(), loopsFactor);
         array113.refC -= 1
         if array113.refC == 0
             empty!(array113.data)
             array113 = nothing
         end
      end
      array114 = nothing
      if pCounter > 1
          array114 = vars.data[pCounter]
          pCounter -= 1
          array114.refC += 1
      else
          array114 = JArray(zeros(Int, 769), 769, 1, 114)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array110)
      params0.size += 1
      push!(params0.data, array114)
      params0.size += 1
      array115 = func17(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array116 = nothing
         if pCounter > 1
             array116 = vars.data[pCounter]
             pCounter -= 1
             array116.refC += 1
         else
             array116 = JArray(zeros(Int, 850), 850, 1, 116)
         end
         loopLimit35 = (50)/4 + 1
         for i in 1:loopLimit35 
            for i in 0:(array116.size-1) 
               array116.data[i+1] -= 1
            end
            for i in 1:array110.size
                if array110.data[i] == 42
                        return array110
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array110)
         params1.size += 1
         push!(params1.data, array114)
         params1.size += 1
         push!(params1.data, array115)
         params1.size += 1
         push!(params1.data, array116)
         params1.size += 1
         array117 = func28(params1, get_path(), loopsFactor);
         array117.refC -= 1
         if array117.refC == 0
             empty!(array117.data)
             array117 = nothing
         end
         array116.refC -= 1
         if array116.refC == 0
             empty!(array116.data)
             array116 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array110)
         params1.size += 1
         push!(params1.data, array114)
         params1.size += 1
         push!(params1.data, array115)
         params1.size += 1
         array118 = func22(params1, get_path(), loopsFactor);
         array118.refC -= 1
         if array118.refC == 0
             empty!(array118.data)
             array118 = nothing
         end
      end
      for i in 1:array115.size
          if array115.data[i] == 67
                  return array115
         end
      end
      array115.refC -= 1
      if array115.refC == 0
          empty!(array115.data)
          array115 = nothing
      end
      array114.refC -= 1
      if array114.refC == 0
          empty!(array114.data)
          array114 = nothing
      end
   end
   for i in 0:(array110.size-1) 
      array110.data[i+1] -= 1
   end
   for i in 1:array110.size
       if array110.data[i] == 61
               return array110
      end
   end
   return array110;
end

