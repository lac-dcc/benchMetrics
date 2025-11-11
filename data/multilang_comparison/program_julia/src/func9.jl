include("program_julia_head.jl")
function func9(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array175 = nothing
   if pCounter > 1
       array175 = vars.data[pCounter]
       pCounter -= 1
       array175.refC += 1
   else
       array175 = JArray(zeros(Int, 641), 641, 1, 175)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array175)
   params0.size += 1
   array176 = func15(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array179 = nothing
      if pCounter > 1
          array179 = vars.data[pCounter]
          pCounter -= 1
          array179.refC += 1
      else
          array179 = JArray(zeros(Int, 260), 260, 1, 179)
      end
      loopLimit52 = (50)/2 + 1
      for i in 1:loopLimit52 
         for i in 0:(array176.size-1) 
            array176.data[i+1] -= 1
         end
         for i in 1:array179.size
             if array179.data[i] == 5
                     return array179
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array175)
      params1.size += 1
      push!(params1.data, array176)
      params1.size += 1
      push!(params1.data, array179)
      params1.size += 1
      array180 = func24(params1, get_path(), loopsFactor);
      array180.refC -= 1
      if array180.refC == 0
          empty!(array180.data)
          array180 = nothing
      end
      array179.refC -= 1
      if array179.refC == 0
          empty!(array179.data)
          array179 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array175)
      params1.size += 1
      push!(params1.data, array176)
      params1.size += 1
      array181 = func16(params1, get_path(), loopsFactor);
      array181.refC -= 1
      if array181.refC == 0
          empty!(array181.data)
          array181 = nothing
      end
   end
   array175.refC -= 1
   if array175.refC == 0
       empty!(array175.data)
       array175 = nothing
   end
   return array176;
end

