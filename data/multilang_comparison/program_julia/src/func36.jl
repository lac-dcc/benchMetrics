include("program_julia_head.jl")
function func36(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array70 = func37(params0, get_path(), loopsFactor);
      array70.refC -= 1
      if array70.refC == 0
          empty!(array70.data)
          array70 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array76 = func38(params0, get_path(), loopsFactor);
      array76.refC -= 1
      if array76.refC == 0
          empty!(array76.data)
          array76 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array81 = func39(params0, get_path(), loopsFactor);
   return array81;
end

