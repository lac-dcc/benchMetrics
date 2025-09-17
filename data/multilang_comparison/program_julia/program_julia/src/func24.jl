include("program_julia_head.jl")
function func24(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array99 = func25(params0, get_path(), loopsFactor);
      array99.refC -= 1
      if array99.refC == 0
          empty!(array99.data)
          array99 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array109 = func26(params0, get_path(), loopsFactor);
      array109.refC -= 1
      if array109.refC == 0
          empty!(array109.data)
          array109 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array114 = func27(params0, get_path(), loopsFactor);
   return array114;
end

