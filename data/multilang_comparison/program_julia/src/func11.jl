include("program_julia_head.jl")
function func11(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit3 = (50)/3 + 1
   for i in 1:loopLimit3 
      if (PATH0 & 1) != 0
         array5 = nothing
         if pCounter > 1
             array5 = vars.data[pCounter]
             pCounter -= 1
             array5.refC += 1
         else
             array5 = JArray(zeros(Int, 736), 736, 1, 5)
         end
         loopLimit4 = (50)/4 + 1
         for i in 1:loopLimit4 
            for i in 0:(array5.size-1) 
               array5.data[i+1] -= 1
            end
            for i in 1:array5.size
                if array5.data[i] == 67
                        return array5
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array5)
         params0.size += 1
         array6 = func28(params0, get_path(), loopsFactor);
         array6.refC -= 1
         if array6.refC == 0
             empty!(array6.data)
             array6 = nothing
         end
         array5.refC -= 1
         if array5.refC == 0
             empty!(array5.data)
             array5 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array34 = func22(params0, get_path(), loopsFactor);
         array34.refC -= 1
         if array34.refC == 0
             empty!(array34.data)
             array34 = nothing
         end
      end
      array43 = nothing
      if pCounter > 1
          array43 = vars.data[pCounter]
          pCounter -= 1
          array43.refC += 1
      else
          array43 = JArray(zeros(Int, 618), 618, 1, 43)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array43)
      params0.size += 1
      array44 = func23(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array47 = nothing
         if pCounter > 1
             array47 = vars.data[pCounter]
             pCounter -= 1
             array47.refC += 1
         else
             array47 = JArray(zeros(Int, 193), 193, 1, 47)
         end
         loopLimit16 = (50)/4 + 1
         for i in 1:loopLimit16 
            for i in 0:(array44.size-1) 
               array44.data[i+1] -= 1
            end
            for i in 1:array47.size
                if array47.data[i] == 64
                        return array47
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array43)
         params1.size += 1
         push!(params1.data, array44)
         params1.size += 1
         push!(params1.data, array47)
         params1.size += 1
         array48 = func36(params1, get_path(), loopsFactor);
         array48.refC -= 1
         if array48.refC == 0
             empty!(array48.data)
             array48 = nothing
         end
         array47.refC -= 1
         if array47.refC == 0
             empty!(array47.data)
             array47 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array43)
         params1.size += 1
         push!(params1.data, array44)
         params1.size += 1
         array58 = func32(params1, get_path(), loopsFactor);
         array58.refC -= 1
         if array58.refC == 0
             empty!(array58.data)
             array58 = nothing
         end
      end
      for i in 1:array44.size
          if array44.data[i] == 72
                  return array44
         end
      end
      array44.refC -= 1
      if array44.refC == 0
          empty!(array44.data)
          array44 = nothing
      end
      array43.refC -= 1
      if array43.refC == 0
          empty!(array43.data)
          array43 = nothing
      end
   end
   array64 = nothing
   if pCounter > 1
       array64 = vars.data[pCounter]
       pCounter -= 1
       array64.refC += 1
   else
       array64 = JArray(zeros(Int, 725), 725, 1, 64)
   end
   return array64;
end

