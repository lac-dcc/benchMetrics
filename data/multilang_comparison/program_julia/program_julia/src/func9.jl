include("program_julia_head.jl")
function func9(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array207 = nothing
   if pCounter > 1
       array207 = vars.data[pCounter]
       pCounter -= 1
       array207.refC += 1
   else
       array207 = JArray(zeros(Int, 176), 176, 1, 207)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array207)
   params0.size += 1
   array208 = func15(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array211 = nothing
      if pCounter > 1
          array211 = vars.data[pCounter]
          pCounter -= 1
          array211.refC += 1
      else
          array211 = JArray(zeros(Int, 818), 818, 1, 211)
      end
      loopLimit61 = (50)/2 + 1
      for i in 1:loopLimit61 
         for i in 0:(array211.size-1) 
            array211.data[i+1] -= 1
         end
         for i in 1:array207.size
             if array207.data[i] == 49
                     return array207
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array207)
      params1.size += 1
      push!(params1.data, array208)
      params1.size += 1
      push!(params1.data, array211)
      params1.size += 1
      array212 = func24(params1, get_path(), loopsFactor);
      array212.refC -= 1
      if array212.refC == 0
          empty!(array212.data)
          array212 = nothing
      end
      array211.refC -= 1
      if array211.refC == 0
          empty!(array211.data)
          array211 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array207)
      params1.size += 1
      push!(params1.data, array208)
      params1.size += 1
      array213 = func16(params1, get_path(), loopsFactor);
      array213.refC -= 1
      if array213.refC == 0
          empty!(array213.data)
          array213 = nothing
      end
   end
   array207.refC -= 1
   if array207.refC == 0
       empty!(array207.data)
       array207 = nothing
   end
   return array208;
end

