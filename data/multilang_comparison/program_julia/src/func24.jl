include("program_julia_head.jl")
function func24(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array68 = func25(params0, get_path(), loopsFactor);
      array68.refC -= 1
      if array68.refC == 0
          empty!(array68.data)
          array68 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array77 = func26(params0, get_path(), loopsFactor);
      array77.refC -= 1
      if array77.refC == 0
          empty!(array77.data)
          array77 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array82 = func27(params0, get_path(), loopsFactor);
   return array82;
end

