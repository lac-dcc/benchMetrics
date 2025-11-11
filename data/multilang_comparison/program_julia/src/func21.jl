include("program_julia_head.jl")
function func21(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array141 = nothing
   if pCounter > 1
       array141 = vars.data[pCounter]
       pCounter -= 1
       array141.refC += 1
   else
       array141 = JArray(zeros(Int, 43), 43, 1, 141)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array141)
   params0.size += 1
   array142 = func23(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array143 = nothing
      if pCounter > 1
          array143 = vars.data[pCounter]
          pCounter -= 1
          array143.refC += 1
      else
          array143 = JArray(zeros(Int, 428), 428, 1, 143)
      end
      loopLimit42 = (50)/3 + 1
      for i in 1:loopLimit42 
         for i in 0:(array141.size-1) 
            array141.data[i+1] -= 1
         end
         for i in 1:array143.size
             if array143.data[i] == 81
                     return array143
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array141)
      params1.size += 1
      push!(params1.data, array142)
      params1.size += 1
      push!(params1.data, array143)
      params1.size += 1
      array144 = func36(params1, get_path(), loopsFactor);
      array144.refC -= 1
      if array144.refC == 0
          empty!(array144.data)
          array144 = nothing
      end
      array143.refC -= 1
      if array143.refC == 0
          empty!(array143.data)
          array143 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array141)
      params1.size += 1
      push!(params1.data, array142)
      params1.size += 1
      array145 = func32(params1, get_path(), loopsFactor);
      array145.refC -= 1
      if array145.refC == 0
          empty!(array145.data)
          array145 = nothing
      end
   end
   array141.refC -= 1
   if array141.refC == 0
       empty!(array141.data)
       array141 = nothing
   end
   return array142;
end

