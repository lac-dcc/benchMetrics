include("program_julia_head.jl")
function func18(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array157 = func19(params0, get_path(), loopsFactor);
      array157.refC -= 1
      if array157.refC == 0
          empty!(array157.data)
          array157 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array167 = func20(params0, get_path(), loopsFactor);
      array167.refC -= 1
      if array167.refC == 0
          empty!(array167.data)
          array167 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array172 = func21(params0, get_path(), loopsFactor);
   return array172;
end

