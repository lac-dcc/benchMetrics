include("program_julia_head.jl")
function func38(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array52 = nothing
      if pCounter > 1
          array52 = vars.data[pCounter]
          pCounter -= 1
          array52.refC += 1
      else
          array52 = JArray(zeros(Int, 275), 275, 1, 52)
      end
      loopLimit18 = (50)/4 + 1
      for i in 1:loopLimit18 
         for i in 0:(array52.size-1) 
            array52.data[i+1] -= 1
         end
         for i in 1:array52.size
             if array52.data[i] == 21
                     return array52
            end
         end
      end
      array52.refC -= 1
      if array52.refC == 0
          empty!(array52.data)
          array52 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array53 = func40(params0, loopsFactor);
      array53.refC -= 1
      if array53.refC == 0
          empty!(array53.data)
          array53 = nothing
      end
   end
   array54 = nothing
   if pCounter > 1
       array54 = vars.data[pCounter]
       pCounter -= 1
       array54.refC += 1
   else
       array54 = JArray(zeros(Int, 29), 29, 1, 54)
   end
   return array54;
end

