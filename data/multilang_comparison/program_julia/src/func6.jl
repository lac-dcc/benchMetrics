include("program_julia_head.jl")
function func6(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array159 = func7(params0, get_path(), loopsFactor);
      array159.refC -= 1
      if array159.refC == 0
          empty!(array159.data)
          array159 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array169 = func8(params0, get_path(), loopsFactor);
      array169.refC -= 1
      if array169.refC == 0
          empty!(array169.data)
          array169 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array174 = func9(params0, get_path(), loopsFactor);
   return array174;
end

