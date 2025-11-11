include("program_julia_head.jl")
function func42(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array18 = func43(params0, loopsFactor);
      array18.refC -= 1
      if array18.refC == 0
          empty!(array18.data)
          array18 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array20 = func44(params0, loopsFactor);
      array20.refC -= 1
      if array20.refC == 0
          empty!(array20.data)
          array20 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array22 = func45(params0, loopsFactor);
   return array22;
end

