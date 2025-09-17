include("program_julia_head.jl")
function func26(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array110 = nothing
      if pCounter > 1
          array110 = vars.data[pCounter]
          pCounter -= 1
          array110.refC += 1
      else
          array110 = JArray(zeros(Int, 590), 590, 1, 110)
      end
      loopLimit34 = (50)/3 + 1
      for i in 1:loopLimit34 
         for i in 0:(array110.size-1) 
            array110.data[i+1] -= 1
         end
         for i in 1:array110.size
             if array110.data[i] == 19
                     return array110
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array110)
      params0.size += 1
      array111 = func36(params0, get_path(), loopsFactor);
      array111.refC -= 1
      if array111.refC == 0
          empty!(array111.data)
          array111 = nothing
      end
      array110.refC -= 1
      if array110.refC == 0
          empty!(array110.data)
          array110 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array112 = func32(params0, get_path(), loopsFactor);
      array112.refC -= 1
      if array112.refC == 0
          empty!(array112.data)
          array112 = nothing
      end
   end
   array113 = nothing
   if pCounter > 1
       array113 = vars.data[pCounter]
       pCounter -= 1
       array113.refC += 1
   else
       array113 = JArray(zeros(Int, 4), 4, 1, 113)
   end
   return array113;
end

