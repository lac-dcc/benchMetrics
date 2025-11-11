include("program_julia_head.jl")
function func18(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array125 = func19(params0, get_path(), loopsFactor);
      array125.refC -= 1
      if array125.refC == 0
          empty!(array125.data)
          array125 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array135 = func20(params0, get_path(), loopsFactor);
      array135.refC -= 1
      if array135.refC == 0
          empty!(array135.data)
          array135 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array140 = func21(params0, get_path(), loopsFactor);
   return array140;
end

