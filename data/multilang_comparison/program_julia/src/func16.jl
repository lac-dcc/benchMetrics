include("program_julia_head.jl")
function func16(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array123 = nothing
   if pCounter > 1
       array123 = vars.data[pCounter]
       pCounter -= 1
       array123.refC += 1
   else
       array123 = JArray(zeros(Int, 908), 908, 1, 123)
   end
   loopLimit37 = (50)/3 + 1
   for i in 1:loopLimit37 
      if (PATH0 & 1) != 0
         array124 = nothing
         if pCounter > 1
             array124 = vars.data[pCounter]
             pCounter -= 1
             array124.refC += 1
         else
             array124 = JArray(zeros(Int, 958), 958, 1, 124)
         end
         loopLimit38 = (50)/4 + 1
         for i in 1:loopLimit38 
            for i in 0:(array123.size-1) 
               array123.data[i+1] -= 1
            end
            for i in 1:array123.size
                if array123.data[i] == 8
                        return array123
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array123)
         params0.size += 1
         push!(params0.data, array124)
         params0.size += 1
         array125 = func36(params0, get_path(), loopsFactor);
         array125.refC -= 1
         if array125.refC == 0
             empty!(array125.data)
             array125 = nothing
         end
         array124.refC -= 1
         if array124.refC == 0
             empty!(array124.data)
             array124 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array123)
         params0.size += 1
         array126 = func32(params0, get_path(), loopsFactor);
         array126.refC -= 1
         if array126.refC == 0
             empty!(array126.data)
             array126 = nothing
         end
      end
      array127 = nothing
      if pCounter > 1
          array127 = vars.data[pCounter]
          pCounter -= 1
          array127.refC += 1
      else
          array127 = JArray(zeros(Int, 133), 133, 1, 127)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array123)
      params0.size += 1
      push!(params0.data, array127)
      params0.size += 1
      array128 = func33(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array129 = nothing
         if pCounter > 1
             array129 = vars.data[pCounter]
             pCounter -= 1
             array129.refC += 1
         else
             array129 = JArray(zeros(Int, 754), 754, 1, 129)
         end
         loopLimit39 = (50)/4 + 1
         for i in 1:loopLimit39 
            for i in 0:(array129.size-1) 
               array129.data[i+1] -= 1
            end
            for i in 1:array128.size
                if array128.data[i] == 68
                        return array128
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array123)
         params1.size += 1
         push!(params1.data, array127)
         params1.size += 1
         push!(params1.data, array128)
         params1.size += 1
         push!(params1.data, array129)
         params1.size += 1
         array130 = func42(params1, get_path(), loopsFactor);
         array130.refC -= 1
         if array130.refC == 0
             empty!(array130.data)
             array130 = nothing
         end
         array129.refC -= 1
         if array129.refC == 0
             empty!(array129.data)
             array129 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array123)
         params1.size += 1
         push!(params1.data, array127)
         params1.size += 1
         push!(params1.data, array128)
         params1.size += 1
         array131 = func34(params1, get_path(), loopsFactor);
         array131.refC -= 1
         if array131.refC == 0
             empty!(array131.data)
             array131 = nothing
         end
      end
      for i in 1:array128.size
          if array128.data[i] == 49
                  return array128
         end
      end
      array128.refC -= 1
      if array128.refC == 0
          empty!(array128.data)
          array128 = nothing
      end
      array127.refC -= 1
      if array127.refC == 0
          empty!(array127.data)
          array127 = nothing
      end
   end
   for i in 0:(array123.size-1) 
      array123.data[i+1] -= 1
   end
   for i in 1:array123.size
       if array123.data[i] == 33
               return array123
      end
   end
   return array123;
end

