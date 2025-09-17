include("program_julia_head.jl")
function func13(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array134 = nothing
   if pCounter > 1
       array134 = vars.data[pCounter]
       pCounter -= 1
       array134.refC += 1
   else
       array134 = JArray(zeros(Int, 996), 996, 1, 134)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array134)
   params0.size += 1
   array135 = func17(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array138 = nothing
      if pCounter > 1
          array138 = vars.data[pCounter]
          pCounter -= 1
          array138.refC += 1
      else
          array138 = JArray(zeros(Int, 27), 27, 1, 138)
      end
      loopLimit41 = (50)/3 + 1
      for i in 1:loopLimit41 
         for i in 0:(array138.size-1) 
            array138.data[i+1] -= 1
         end
         for i in 1:array138.size
             if array138.data[i] == 56
                     return array138
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array134)
      params1.size += 1
      push!(params1.data, array135)
      params1.size += 1
      push!(params1.data, array138)
      params1.size += 1
      array139 = func28(params1, get_path(), loopsFactor);
      array139.refC -= 1
      if array139.refC == 0
          empty!(array139.data)
          array139 = nothing
      end
      array138.refC -= 1
      if array138.refC == 0
          empty!(array138.data)
          array138 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array134)
      params1.size += 1
      push!(params1.data, array135)
      params1.size += 1
      array140 = func22(params1, get_path(), loopsFactor);
      array140.refC -= 1
      if array140.refC == 0
          empty!(array140.data)
          array140 = nothing
      end
   end
   array134.refC -= 1
   if array134.refC == 0
       empty!(array134.data)
       array134 = nothing
   end
   return array135;
end

