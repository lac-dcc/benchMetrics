include("program_julia_head.jl")
function func14(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array179 = nothing
   if pCounter > 1
       array179 = vars.data[pCounter]
       pCounter -= 1
       array179.refC += 1
   else
       array179 = JArray(zeros(Int, 237), 237, 1, 179)
   end
   loopLimit52 = (50)/3 + 1
   for i in 1:loopLimit52 
      if (PATH0 & 1) != 0
         array180 = nothing
         if pCounter > 1
             array180 = vars.data[pCounter]
             pCounter -= 1
             array180.refC += 1
         else
             array180 = JArray(zeros(Int, 205), 205, 1, 180)
         end
         loopLimit53 = (50)/4 + 1
         for i in 1:loopLimit53 
            for i in 0:(array180.size-1) 
               array180.data[i+1] -= 1
            end
            for i in 1:array180.size
                if array180.data[i] == 18
                        return array180
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array179)
         params0.size += 1
         push!(params0.data, array180)
         params0.size += 1
         array181 = func28(params0, get_path(), loopsFactor);
         array181.refC -= 1
         if array181.refC == 0
             empty!(array181.data)
             array181 = nothing
         end
         array180.refC -= 1
         if array180.refC == 0
             empty!(array180.data)
             array180 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array179)
         params0.size += 1
         array182 = func22(params0, get_path(), loopsFactor);
         array182.refC -= 1
         if array182.refC == 0
             empty!(array182.data)
             array182 = nothing
         end
      end
      array183 = nothing
      if pCounter > 1
          array183 = vars.data[pCounter]
          pCounter -= 1
          array183.refC += 1
      else
          array183 = JArray(zeros(Int, 873), 873, 1, 183)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array179)
      params0.size += 1
      push!(params0.data, array183)
      params0.size += 1
      array184 = func23(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array185 = nothing
         if pCounter > 1
             array185 = vars.data[pCounter]
             pCounter -= 1
             array185.refC += 1
         else
             array185 = JArray(zeros(Int, 483), 483, 1, 185)
         end
         loopLimit54 = (50)/4 + 1
         for i in 1:loopLimit54 
            for i in 0:(array185.size-1) 
               array185.data[i+1] -= 1
            end
            for i in 1:array184.size
                if array184.data[i] == 57
                        return array184
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array179)
         params1.size += 1
         push!(params1.data, array183)
         params1.size += 1
         push!(params1.data, array184)
         params1.size += 1
         push!(params1.data, array185)
         params1.size += 1
         array186 = func36(params1, get_path(), loopsFactor);
         array186.refC -= 1
         if array186.refC == 0
             empty!(array186.data)
             array186 = nothing
         end
         array185.refC -= 1
         if array185.refC == 0
             empty!(array185.data)
             array185 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array179)
         params1.size += 1
         push!(params1.data, array183)
         params1.size += 1
         push!(params1.data, array184)
         params1.size += 1
         array187 = func32(params1, get_path(), loopsFactor);
         array187.refC -= 1
         if array187.refC == 0
             empty!(array187.data)
             array187 = nothing
         end
      end
      for i in 1:array183.size
          if array183.data[i] == 18
                  return array183
         end
      end
      array184.refC -= 1
      if array184.refC == 0
          empty!(array184.data)
          array184 = nothing
      end
      array183.refC -= 1
      if array183.refC == 0
          empty!(array183.data)
          array183 = nothing
      end
   end
   for i in 0:(array179.size-1) 
      array179.data[i+1] -= 1
   end
   for i in 1:array179.size
       if array179.data[i] == 88
               return array179
      end
   end
   return array179;
end

