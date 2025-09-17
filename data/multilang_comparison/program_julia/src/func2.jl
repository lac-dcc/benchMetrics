include("program_julia_head.jl")
function func2(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array215 = nothing
   if pCounter > 1
       array215 = vars.data[pCounter]
       pCounter -= 1
       array215.refC += 1
   else
       array215 = JArray(zeros(Int, 993), 993, 1, 215)
   end
   loopLimit62 = (50)/2 + 1
   for i in 1:loopLimit62 
      if (PATH0 & 1) != 0
         array216 = nothing
         if pCounter > 1
             array216 = vars.data[pCounter]
             pCounter -= 1
             array216.refC += 1
         else
             array216 = JArray(zeros(Int, 918), 918, 1, 216)
         end
         loopLimit63 = (50)/3 + 1
         for i in 1:loopLimit63 
            for i in 0:(array216.size-1) 
               array216.data[i+1] -= 1
            end
            for i in 1:array215.size
                if array215.data[i] == 22
                        return array215
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array215)
         params0.size += 1
         push!(params0.data, array216)
         params0.size += 1
         array217 = func18(params0, get_path(), loopsFactor);
         array217.refC -= 1
         if array217.refC == 0
             empty!(array217.data)
             array217 = nothing
         end
         array216.refC -= 1
         if array216.refC == 0
             empty!(array216.data)
             array216 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array215)
         params0.size += 1
         array218 = func14(params0, get_path(), loopsFactor);
         array218.refC -= 1
         if array218.refC == 0
             empty!(array218.data)
             array218 = nothing
         end
      end
      array219 = nothing
      if pCounter > 1
          array219 = vars.data[pCounter]
          pCounter -= 1
          array219.refC += 1
      else
          array219 = JArray(zeros(Int, 574), 574, 1, 219)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array215)
      params0.size += 1
      push!(params0.data, array219)
      params0.size += 1
      array220 = func15(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array221 = nothing
         if pCounter > 1
             array221 = vars.data[pCounter]
             pCounter -= 1
             array221.refC += 1
         else
             array221 = JArray(zeros(Int, 486), 486, 1, 221)
         end
         loopLimit64 = (50)/3 + 1
         for i in 1:loopLimit64 
            for i in 0:(array219.size-1) 
               array219.data[i+1] -= 1
            end
            for i in 1:array221.size
                if array221.data[i] == 74
                        return array221
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array215)
         params1.size += 1
         push!(params1.data, array219)
         params1.size += 1
         push!(params1.data, array220)
         params1.size += 1
         push!(params1.data, array221)
         params1.size += 1
         array222 = func24(params1, get_path(), loopsFactor);
         array222.refC -= 1
         if array222.refC == 0
             empty!(array222.data)
             array222 = nothing
         end
         array221.refC -= 1
         if array221.refC == 0
             empty!(array221.data)
             array221 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array215)
         params1.size += 1
         push!(params1.data, array219)
         params1.size += 1
         push!(params1.data, array220)
         params1.size += 1
         array223 = func16(params1, get_path(), loopsFactor);
         array223.refC -= 1
         if array223.refC == 0
             empty!(array223.data)
             array223 = nothing
         end
      end
      for i in 1:array215.size
          if array215.data[i] == 75
                  return array215
         end
      end
      array220.refC -= 1
      if array220.refC == 0
          empty!(array220.data)
          array220 = nothing
      end
      array219.refC -= 1
      if array219.refC == 0
          empty!(array219.data)
          array219 = nothing
      end
   end
   for i in 0:(array215.size-1) 
      array215.data[i+1] -= 1
   end
   for i in 1:array215.size
       if array215.data[i] == 10
               return array215
      end
   end
   return array215;
end

