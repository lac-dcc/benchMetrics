include("program_julia_head.jl")
function func27(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array115 = nothing
   if pCounter > 1
       array115 = vars.data[pCounter]
       pCounter -= 1
       array115.refC += 1
   else
       array115 = JArray(zeros(Int, 255), 255, 1, 115)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array115)
   params0.size += 1
   array116 = func33(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array119 = nothing
      if pCounter > 1
          array119 = vars.data[pCounter]
          pCounter -= 1
          array119.refC += 1
      else
          array119 = JArray(zeros(Int, 754), 754, 1, 119)
      end
      loopLimit36 = (50)/3 + 1
      for i in 1:loopLimit36 
         for i in 0:(array115.size-1) 
            array115.data[i+1] -= 1
         end
         for i in 1:array115.size
             if array115.data[i] == 44
                     return array115
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array115)
      params1.size += 1
      push!(params1.data, array116)
      params1.size += 1
      push!(params1.data, array119)
      params1.size += 1
      array120 = func42(params1, get_path(), loopsFactor);
      array120.refC -= 1
      if array120.refC == 0
          empty!(array120.data)
          array120 = nothing
      end
      array119.refC -= 1
      if array119.refC == 0
          empty!(array119.data)
          array119 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array115)
      params1.size += 1
      push!(params1.data, array116)
      params1.size += 1
      array121 = func34(params1, get_path(), loopsFactor);
      array121.refC -= 1
      if array121.refC == 0
          empty!(array121.data)
          array121 = nothing
      end
   end
   array115.refC -= 1
   if array115.refC == 0
       empty!(array115.data)
       array115 = nothing
   end
   return array116;
end

