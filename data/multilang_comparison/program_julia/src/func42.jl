include("program_julia_head.jl")
function func42(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array29 = func43(params0, loopsFactor);
      array29.refC -= 1
      if array29.refC == 0
          empty!(array29.data)
          array29 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array31 = func44(params0, get_path(), loopsFactor);
      array31.refC -= 1
      if array31.refC == 0
          empty!(array31.data)
          array31 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array35 = func45(params0, loopsFactor);
   return array35;
end

