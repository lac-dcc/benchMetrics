include("program_julia_head.jl")
function func36(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array49 = func37(params0, loopsFactor);
      array49.refC -= 1
      if array49.refC == 0
          empty!(array49.data)
          array49 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array51 = func38(params0, get_path(), loopsFactor);
      array51.refC -= 1
      if array51.refC == 0
          empty!(array51.data)
          array51 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array55 = func39(params0, loopsFactor);
   return array55;
end

