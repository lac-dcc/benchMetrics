include("program_julia_head.jl")
function func31(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array47 = nothing
   if pCounter > 1
       array47 = vars.data[pCounter]
       pCounter -= 1
       array47.refC += 1
   else
       array47 = JArray(zeros(Int, 124), 124, 1, 47)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array47)
   params0.size += 1
   array48 = func35(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array51 = nothing
      if pCounter > 1
          array51 = vars.data[pCounter]
          pCounter -= 1
          array51.refC += 1
      else
          array51 = JArray(zeros(Int, 437), 437, 1, 51)
      end
      loopLimit17 = (50)/4 + 1
      for i in 1:loopLimit17 
         for i in 0:(array48.size-1) 
            array48.data[i+1] -= 1
         end
         for i in 1:array51.size
             if array51.data[i] == 7
                     return array51
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array47)
      params1.size += 1
      push!(params1.data, array48)
      params1.size += 1
      push!(params1.data, array51)
      params1.size += 1
      array52 = func46(params1, get_path(), loopsFactor);
      array52.refC -= 1
      if array52.refC == 0
          empty!(array52.data)
          array52 = nothing
      end
      array51.refC -= 1
      if array51.refC == 0
          empty!(array51.data)
          array51 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array47)
      params1.size += 1
      push!(params1.data, array48)
      params1.size += 1
      array53 = func40(params1, loopsFactor);
      array53.refC -= 1
      if array53.refC == 0
          empty!(array53.data)
          array53 = nothing
      end
   end
   array47.refC -= 1
   if array47.refC == 0
       empty!(array47.data)
       array47 = nothing
   end
   return array48;
end

