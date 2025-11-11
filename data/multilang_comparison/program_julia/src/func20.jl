include("program_julia_head.jl")
function func20(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array136 = nothing
      if pCounter > 1
          array136 = vars.data[pCounter]
          pCounter -= 1
          array136.refC += 1
      else
          array136 = JArray(zeros(Int, 460), 460, 1, 136)
      end
      loopLimit41 = (50)/3 + 1
      for i in 1:loopLimit41 
         for i in 0:(array136.size-1) 
            array136.data[i+1] -= 1
         end
         for i in 1:array136.size
             if array136.data[i] == 60
                     return array136
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array136)
      params0.size += 1
      array137 = func28(params0, get_path(), loopsFactor);
      array137.refC -= 1
      if array137.refC == 0
          empty!(array137.data)
          array137 = nothing
      end
      array136.refC -= 1
      if array136.refC == 0
          empty!(array136.data)
          array136 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array138 = func22(params0, get_path(), loopsFactor);
      array138.refC -= 1
      if array138.refC == 0
          empty!(array138.data)
          array138 = nothing
      end
   end
   array139 = nothing
   if pCounter > 1
       array139 = vars.data[pCounter]
       pCounter -= 1
       array139.refC += 1
   else
       array139 = JArray(zeros(Int, 748), 748, 1, 139)
   end
   return array139;
end

