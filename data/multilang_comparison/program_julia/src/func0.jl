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
         array109 = func4(params0, get_path(), loopsFactor);
         array109.refC -= 1
         if array109.refC == 0
             empty!(array109.data)
             array109 = nothing
         end
      end
      array119 = nothing
      if pCounter > 1
          array119 = vars.data[pCounter]
          pCounter -= 1
          array119.refC += 1
      else
          array119 = JArray(zeros(Int, 326), 326, 1, 119)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array1)
      params0.size += 1
      push!(params0.data, array119)
      params0.size += 1
      array120 = func5(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array123 = nothing
         if pCounter > 1
             array123 = vars.data[pCounter]
             pCounter -= 1
             array123.refC += 1
         else
             array123 = JArray(zeros(Int, 872), 872, 1, 123)
         end
         loopLimit37 = (50)/3 + 1
         for i in 1:loopLimit37 
            for i in 0:(array1.size-1) 
               array1.data[i+1] -= 1
            end
            for i in 1:array120.size
                if array120.data[i] == 98
                        return array120
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 4
         push!(params1.data, array1)
         params1.size += 1
         push!(params1.data, array119)
         params1.size += 1
         push!(params1.data, array120)
         params1.size += 1
         push!(params1.data, array123)
         params1.size += 1
         array124 = func18(params1, get_path(), loopsFactor);
         array124.refC -= 1
         if array124.refC == 0
             empty!(array124.data)
             array124 = nothing
         end
         array123.refC -= 1
         if array123.refC == 0
             empty!(array123.data)
             array123 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array1)
         params1.size += 1
         push!(params1.data, array119)
         params1.size += 1
         push!(params1.data, array120)
         params1.size += 1
         array146 = func14(params1, get_path(), loopsFactor);
         array146.refC -= 1
         if array146.refC == 0
             empty!(array146.data)
             array146 = nothing
         end
      end
      for i in 1:array120.size
          if array120.data[i] == 32
                  return array120
         end
      end
      array120.refC -= 1
      if array120.refC == 0
          empty!(array120.data)
          array120 = nothing
      end
      array119.refC -= 1
      if array119.refC == 0
          empty!(array119.data)
          array119 = nothing
      end
   end
   return array1;
end

