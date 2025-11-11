include("program_julia_head.jl")
function func14(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array147 = nothing
   if pCounter > 1
       array147 = vars.data[pCounter]
       pCounter -= 1
       array147.refC += 1
   else
       array147 = JArray(zeros(Int, 504), 504, 1, 147)
   end
   loopLimit43 = (50)/3 + 1
   for i in 1:loopLimit43 
      if (PATH0 & 1) != 0
         array148 = nothing
         if pCounter > 1
             array148 = vars.data[pCounter]
             pCounter -= 1
             array148.refC += 1
         else
             array148 = JArray(zeros(Int, 629), 629, 1, 148)
         end
         loopLimit44 = (50)/4 + 1
         for i in 1:loopLimit44 
            for i in 0:(array148.size-1) 
               array148.data[i+1] -= 1
            end
            for i in 1:array147.size
                if array147.data[i] == 85
                        return array147
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array147)
         params0.size += 1
         push!(params0.data, array148)
         params0.size += 1
         array149 = func28(params0, get_path(), loopsFactor);
         array149.refC -= 1
         if array149.refC == 0
             empty!(array149.data)
             array149 = nothing
         end
         array148.refC -= 1
         if array148.refC == 0
             empty!(array148.data)
             array148 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array147)
         params0.size += 1
         array150 = func22(params0, get_path(), loopsFactor);
         array150.refC -= 1
         if array150.refC == 0
             empty!(array150.data)
             array150 = nothing
         end
      end
      array151 = nothing
      if pCounter > 1
          array151 = vars.data[pCounter]
          pCounter -= 1
          array151.refC += 1
      else
          array151 = JArray(zeros(Int, 900), 900, 1, 151)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array147)
      params0.size += 1
      push!(params0.data, array151)
      params0.size += 1
      array152 = func23(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array153 = nothing
         if pCounter > 1
             array153 = vars.data[pCounter]
             pCounter -= 1
             array153.refC += 1
         else
             array153 = JArray(zeros(Int, 949), 949, 1, 153)
         end
         loopLimit45 = (50)/4 + 1
         for i in 1:loopLimit45 
            for i in 0:(array151.size-1) 
               array151.data[i+1] -= 1
            end
            for i in 1:array153.size
                if array153.data[i] == 88
                        return array153
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array147)
         params1.size += 1
         push!(params1.data, array151)
         params1.size += 1
         push!(params1.data, array152)
         params1.size += 1
         push!(params1.data, array153)
         params1.size += 1
         array154 = func36(params1, get_path(), loopsFactor);
         array154.refC -= 1
         if array154.refC == 0
             empty!(array154.data)
             array154 = nothing
         end
         array153.refC -= 1
         if array153.refC == 0
             empty!(array153.data)
             array153 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array147)
         params1.size += 1
         push!(params1.data, array151)
         params1.size += 1
         push!(params1.data, array152)
         params1.size += 1
         array155 = func32(params1, get_path(), loopsFactor);
         array155.refC -= 1
         if array155.refC == 0
             empty!(array155.data)
             array155 = nothing
         end
      end
      for i in 1:array147.size
          if array147.data[i] == 90
                  return array147
         end
      end
      array152.refC -= 1
      if array152.refC == 0
          empty!(array152.data)
          array152 = nothing
      end
      array151.refC -= 1
      if array151.refC == 0
          empty!(array151.data)
          array151 = nothing
      end
   end
   for i in 0:(array147.size-1) 
      array147.data[i+1] -= 1
   end
   for i in 1:array147.size
       if array147.data[i] == 41
               return array147
      end
   end
   return array147;
end

