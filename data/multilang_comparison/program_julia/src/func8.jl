include("program_julia_head.jl")
function func8(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array202 = nothing
      if pCounter > 1
          array202 = vars.data[pCounter]
          pCounter -= 1
          array202.refC += 1
      else
          array202 = JArray(zeros(Int, 796), 796, 1, 202)
      end
      loopLimit59 = (50)/2 + 1
      for i in 1:loopLimit59 
         for i in 0:(array202.size-1) 
            array202.data[i+1] -= 1
         end
         for i in 1:array202.size
             if array202.data[i] == 80
                     return array202
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array202)
      params0.size += 1
      array203 = func18(params0, get_path(), loopsFactor);
      array203.refC -= 1
      if array203.refC == 0
          empty!(array203.data)
          array203 = nothing
      end
      array202.refC -= 1
      if array202.refC == 0
          empty!(array202.data)
          array202 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array204 = func14(params0, get_path(), loopsFactor);
      array204.refC -= 1
      if array204.refC == 0
          empty!(array204.data)
          array204 = nothing
      end
   end
   array205 = nothing
   if pCounter > 1
       array205 = vars.data[pCounter]
       pCounter -= 1
       array205.refC += 1
   else
       array205 = JArray(zeros(Int, 812), 812, 1, 205)
   end
   return array205;
end

