include("program_julia_head.jl")
function func0(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array1 = nothing
   if pCounter > 1
       array1 = vars.data[pCounter]
       pCounter -= 1
       array1.refC += 1
   else
       array1 = JArray(zeros(Int, 386), 386, 1, 1)
   end
   loopLimit1 = (50)/2 + 1
   for i in 1:loopLimit1 
      if (PATH0 & 1) != 0
         array2 = nothing
         if pCounter > 1
             array2 = vars.data[pCounter]
             pCounter -= 1
             array2.refC += 1
         else
             array2 = JArray(zeros(Int, 492), 492, 1, 2)
         end
         loopLimit2 = (50)/3 + 1
         for i in 1:loopLimit2 
            for i in 0:(array2.size-1) 
               array2.data[i+1] -= 1
            end
            for i in 1:array2.size
                if array2.data[i] == 62
                        return array2
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array1)
         params0.size += 1
         push!(params0.data, array2)
         params0.size += 1
         array3 = func10(params0, get_path(), loopsFactor);
         array3.refC -= 1
         if array3.refC == 0
             empty!(array3.data)
             array3 = nothing
         end
         array2.refC -= 1
         if array2.refC == 0
             empty!(array2.data)
             array2 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array1)
         params0.size += 1
         array141 = func4(params0, get_path(), loopsFactor);
         array141.refC -= 1
         if array141.refC == 0
             empty!(array141.data)
             array141 = nothing
         end
      end
      array151 = nothing
      if pCounter > 1
          array151 = vars.data[pCounter]
          pCounter -= 1
          array151.refC += 1
      else
          array151 = JArray(zeros(Int, 988), 988, 1, 151)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array1)
      params0.size += 1
      push!(params0.data, array151)
      params0.size += 1
      array152 = func5(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array155 = nothing
         if pCounter > 1
             array155 = vars.data[pCounter]
             pCounter -= 1
             array155.refC += 1
         else
             array155 = JArray(zeros(Int, 232), 232, 1, 155)
         end
         loopLimit46 = (50)/3 + 1
         for i in 1:loopLimit46 
            for i in 0:(array151.size-1) 
               array151.data[i+1] -= 1
            end
            for i in 1:array152.size
                if array152.data[i] == 60
                        return array152
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array1)
         params1.size += 1
         push!(params1.data, array151)
         params1.size += 1
         push!(params1.data, array152)
         params1.size += 1
         push!(params1.data, array155)
         params1.size += 1
         array156 = func18(params1, get_path(), loopsFactor);
         array156.refC -= 1
         if array156.refC == 0
             empty!(array156.data)
             array156 = nothing
         end
         array155.refC -= 1
         if array155.refC == 0
             empty!(array155.data)
             array155 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array1)
         params1.size += 1
         push!(params1.data, array151)
         params1.size += 1
         push!(params1.data, array152)
         params1.size += 1
         array178 = func14(params1, get_path(), loopsFactor);
         array178.refC -= 1
         if array178.refC == 0
             empty!(array178.data)
             array178 = nothing
         end
      end
      for i in 1:array152.size
          if array152.data[i] == 57
                  return array152
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
   return array1;
end

