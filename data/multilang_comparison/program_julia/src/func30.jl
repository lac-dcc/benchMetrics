include("program_julia_head.jl")
function func30(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array16 = nothing
      if pCounter > 1
          array16 = vars.data[pCounter]
          pCounter -= 1
          array16.refC += 1
      else
          array16 = JArray(zeros(Int, 84), 84, 1, 16)
      end
      loopLimit8 = (50)/4 + 1
      for i in 1:loopLimit8 
         for i in 0:(array16.size-1) 
            array16.data[i+1] -= 1
         end
         for i in 1:array16.size
             if array16.data[i] == 5
                     return array16
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array16)
      params0.size += 1
      array17 = func42(params0, get_path(), loopsFactor);
      array17.refC -= 1
      if array17.refC == 0
          empty!(array17.data)
          array17 = nothing
      end
      array16.refC -= 1
      if array16.refC == 0
          empty!(array16.data)
          array16 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array24 = func34(params0, loopsFactor);
      array24.refC -= 1
      if array24.refC == 0
          empty!(array24.data)
          array24 = nothing
      end
   end
   array26 = nothing
   if pCounter > 1
       array26 = vars.data[pCounter]
       pCounter -= 1
       array26.refC += 1
   else
       array26 = JArray(zeros(Int, 795), 795, 1, 26)
   end
   return array26;
end

