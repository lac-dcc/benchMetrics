include("program_julia_head.jl")
function func10(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      params0 = JArray_param{Int}()
      params0.size = 0
      array4 = func11(params0, get_path(), loopsFactor);
      array4.refC -= 1
      if array4.refC == 0
          empty!(array4.data)
          array4 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array96 = func12(params0, get_path(), loopsFactor);
      array96.refC -= 1
      if array96.refC == 0
          empty!(array96.data)
          array96 = nothing
      end
   end
   params0 = JArray_param{Int}()
   params0.size = 0
   array133 = func13(params0, get_path(), loopsFactor);
   return array133;
end

