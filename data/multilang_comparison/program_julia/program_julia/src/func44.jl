include("program_julia_head.jl")
function func44(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array32 = nothing
      if pCounter > 1
          array32 = vars.data[pCounter]
          pCounter -= 1
          array32.refC += 1
      else
          array32 = JArray(zeros(Int, 440), 440, 1, 32)
      end
      loopLimit12 = (50)/4 + 1
      for i in 1:loopLimit12 
         for i in 0:(array32.size-1) 
            array32.data[i+1] -= 1
         end
         for i in 1:array32.size
             if array32.data[i] == 17
                     return array32
            end
         end
      end
      array32.refC -= 1
      if array32.refC == 0
          empty!(array32.data)
          array32 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array33 = func50(params0, loopsFactor);
      array33.refC -= 1
      if array33.refC == 0
          empty!(array33.data)
          array33 = nothing
      end
   end
   array34 = nothing
   if pCounter > 1
       array34 = vars.data[pCounter]
       pCounter -= 1
       array34.refC += 1
   else
       array34 = JArray(zeros(Int, 481), 481, 1, 34)
   end
   return array34;
end

