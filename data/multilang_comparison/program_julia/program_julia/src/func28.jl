include("program_julia_head.jl")
function func28(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array7 = func29(params0, get_path(), loopsFactor);
      array7.refC -= 1
      if array7.refC == 0
          empty!(array7.data)
          array7 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array26 = func30(params0, get_path(), loopsFactor);
      array26.refC -= 1
      if array26.refC == 0
          empty!(array26.data)
          array26 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array46 = func31(params0, get_path(), loopsFactor);
   return array46;
end

