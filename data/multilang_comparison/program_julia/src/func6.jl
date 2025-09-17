include("program_julia_head.jl")
function func6(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array191 = func7(params0, get_path(), loopsFactor);
      array191.refC -= 1
      if array191.refC == 0
          empty!(array191.data)
          array191 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array201 = func8(params0, get_path(), loopsFactor);
      array201.refC -= 1
      if array201.refC == 0
          empty!(array201.data)
          array201 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array206 = func9(params0, get_path(), loopsFactor);
   return array206;
end

