include("program_julia_head.jl")
function func2(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array183 = nothing
   if pCounter > 1
       array183 = vars.data[pCounter]
       pCounter -= 1
       array183.refC += 1
   else
       array183 = JArray(zeros(Int, 483), 483, 1, 183)
   end
   loopLimit53 = (50)/2 + 1
   for i in 1:loopLimit53 
      if (PATH0 & 1) != 0
         array184 = nothing
         if pCounter > 1
             array184 = vars.data[pCounter]
             pCounter -= 1
             array184.refC += 1
         else
             array184 = JArray(zeros(Int, 607), 607, 1, 184)
         end
         loopLimit54 = (50)/3 + 1
         for i in 1:loopLimit54 
            for i in 0:(array183.size-1) 
               array183.data[i+1] -= 1
            end
            for i in 1:array184.size
                if array184.data[i] == 14
                        return array184
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array183)
         params0.size += 1
         push!(params0.data, array184)
         params0.size += 1
         array185 = func18(params0, get_path(), loopsFactor);
         array185.refC -= 1
         if array185.refC == 0
             empty!(array185.data)
             array185 = nothing
         end
         array184.refC -= 1
         if array184.refC == 0
             empty!(array184.data)
             array184 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array183)
         params0.size += 1
         array186 = func14(params0, get_path(), loopsFactor);
         array186.refC -= 1
         if array186.refC == 0
             empty!(array186.data)
             array186 = nothing
         end
      end
      array187 = nothing
      if pCounter > 1
          array187 = vars.data[pCounter]
          pCounter -= 1
          array187.refC += 1
      else
          array187 = JArray(zeros(Int, 618), 618, 1, 187)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array183)
      params0.size += 1
      push!(params0.data, array187)
      params0.size += 1
      array188 = func15(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array189 = nothing
         if pCounter > 1
             array189 = vars.data[pCounter]
             pCounter -= 1
             array189.refC += 1
         else
             array189 = JArray(zeros(Int, 388), 388, 1, 189)
         end
         loopLimit55 = (50)/3 + 1
         for i in 1:loopLimit55 
            for i in 0:(array188.size-1) 
               array188.data[i+1] -= 1
            end
            for i in 1:array187.size
                if array187.data[i] == 57
                        return array187
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array183)
         params1.size += 1
         push!(params1.data, array187)
         params1.size += 1
         push!(params1.data, array188)
         params1.size += 1
         push!(params1.data, array189)
         params1.size += 1
         array190 = func24(params1, get_path(), loopsFactor);
         array190.refC -= 1
         if array190.refC == 0
             empty!(array190.data)
             array190 = nothing
         end
         array189.refC -= 1
         if array189.refC == 0
             empty!(array189.data)
             array189 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array183)
         params1.size += 1
         push!(params1.data, array187)
         params1.size += 1
         push!(params1.data, array188)
         params1.size += 1
         array191 = func16(params1, get_path(), loopsFactor);
         array191.refC -= 1
         if array191.refC == 0
             empty!(array191.data)
             array191 = nothing
         end
      end
      for i in 1:array187.size
          if array187.data[i] == 17
                  return array187
         end
      end
      array188.refC -= 1
      if array188.refC == 0
          empty!(array188.data)
          array188 = nothing
      end
      array187.refC -= 1
      if array187.refC == 0
          empty!(array187.data)
          array187 = nothing
      end
   end
   for i in 0:(array183.size-1) 
      array183.data[i+1] -= 1
   end
   for i in 1:array183.size
       if array183.data[i] == 63
               return array183
      end
   end
   return array183;
end

