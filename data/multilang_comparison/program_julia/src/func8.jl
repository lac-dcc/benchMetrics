include("program_julia_head.jl")
function func8(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array170 = nothing
      if pCounter > 1
          array170 = vars.data[pCounter]
          pCounter -= 1
          array170.refC += 1
      else
          array170 = JArray(zeros(Int, 627), 627, 1, 170)
      end
      loopLimit50 = (50)/2 + 1
      for i in 1:loopLimit50 
         for i in 0:(array170.size-1) 
            array170.data[i+1] -= 1
         end
         for i in 1:array170.size
             if array170.data[i] == 14
                     return array170
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array170)
      params0.size += 1
      array171 = func18(params0, get_path(), loopsFactor);
      array171.refC -= 1
      if array171.refC == 0
          empty!(array171.data)
          array171 = nothing
      end
      array170.refC -= 1
      if array170.refC == 0
          empty!(array170.data)
          array170 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array172 = func14(params0, get_path(), loopsFactor);
      array172.refC -= 1
      if array172.refC == 0
          empty!(array172.data)
          array172 = nothing
      end
   end
   array173 = nothing
   if pCounter > 1
       array173 = vars.data[pCounter]
       pCounter -= 1
       array173.refC += 1
   else
       array173 = JArray(zeros(Int, 479), 479, 1, 173)
   end
   return array173;
end

