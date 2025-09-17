include("program_julia_head.jl")
function func21(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array173 = nothing
   if pCounter > 1
       array173 = vars.data[pCounter]
       pCounter -= 1
       array173.refC += 1
   else
       array173 = JArray(zeros(Int, 189), 189, 1, 173)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array173)
   params0.size += 1
   array174 = func23(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array175 = nothing
      if pCounter > 1
          array175 = vars.data[pCounter]
          pCounter -= 1
          array175.refC += 1
      else
          array175 = JArray(zeros(Int, 641), 641, 1, 175)
      end
      loopLimit51 = (50)/3 + 1
      for i in 1:loopLimit51 
         for i in 0:(array175.size-1) 
            array175.data[i+1] -= 1
         end
         for i in 1:array173.size
             if array173.data[i] == 87
                     return array173
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array173)
      params1.size += 1
      push!(params1.data, array174)
      params1.size += 1
      push!(params1.data, array175)
      params1.size += 1
      array176 = func36(params1, get_path(), loopsFactor);
      array176.refC -= 1
      if array176.refC == 0
          empty!(array176.data)
          array176 = nothing
      end
      array175.refC -= 1
      if array175.refC == 0
          empty!(array175.data)
          array175 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array173)
      params1.size += 1
      push!(params1.data, array174)
      params1.size += 1
      array177 = func32(params1, get_path(), loopsFactor);
      array177.refC -= 1
      if array177.refC == 0
          empty!(array177.data)
          array177 = nothing
      end
   end
   array174.refC -= 1
   if array174.refC == 0
       empty!(array174.data)
       array174 = nothing
   end
   return array173;
end

