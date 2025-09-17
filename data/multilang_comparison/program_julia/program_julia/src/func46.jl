include("program_julia_head.jl")
function func46(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array10 = func47(params0, loopsFactor);
      array10.refC -= 1
      if array10.refC == 0
          empty!(array10.data)
          array10 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array12 = func48(params0, loopsFactor);
      array12.refC -= 1
      if array12.refC == 0
          empty!(array12.data)
          array12 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array14 = func49(params0, loopsFactor);
   return array14;
end

