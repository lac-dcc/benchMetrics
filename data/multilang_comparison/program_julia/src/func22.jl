include("program_julia_head.jl")
function func22(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array35 = nothing
   if pCounter > 1
       array35 = vars.data[pCounter]
       pCounter -= 1
       array35.refC += 1
   else
       array35 = JArray(zeros(Int, 567), 567, 1, 35)
   end
   loopLimit12 = (50)/4 + 1
   for i in 1:loopLimit12 
      if (PATH0 & 1) != 0
         array36 = nothing
         if pCounter > 1
             array36 = vars.data[pCounter]
             pCounter -= 1
             array36.refC += 1
         else
             array36 = JArray(zeros(Int, 856), 856, 1, 36)
         end
         loopLimit13 = (50)/5 + 1
         for i in 1:loopLimit13 
            for i in 0:(array36.size-1) 
               array36.data[i+1] -= 1
            end
            for i in 1:array36.size
                if array36.data[i] == 86
                        return array36
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 2
         push!(params0.data, array35)
         params0.size += 1
         push!(params0.data, array36)
         params0.size += 1
         array37 = func42(params0, get_path(), loopsFactor);
         array37.refC -= 1
         if array37.refC == 0
             empty!(array37.data)
             array37 = nothing
         end
         array36.refC -= 1
         if array36.refC == 0
             empty!(array36.data)
             array36 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array35)
         params0.size += 1
         array38 = func34(params0, loopsFactor);
         array38.refC -= 1
         if array38.refC == 0
             empty!(array38.data)
             array38 = nothing
         end
      end
      array39 = nothing
      if pCounter > 1
          array39 = vars.data[pCounter]
          pCounter -= 1
          array39.refC += 1
      else
          array39 = JArray(zeros(Int, 624), 624, 1, 39)
      end
      params0 = JArray_param{Int}()
      params0.size = 2
      push!(params0.data, array35)
      params0.size += 1
      push!(params0.data, array39)
      params0.size += 1
      array40 = func35(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array41 = nothing
         if pCounter > 1
             array41 = vars.data[pCounter]
             pCounter -= 1
             array41.refC += 1
         else
             array41 = JArray(zeros(Int, 732), 732, 1, 41)
         end
         loopLimit14 = (50)/5 + 1
         for i in 1:loopLimit14 
            for i in 0:(array39.size-1) 
               array39.data[i+1] -= 1
            end
            for i in 1:array41.size
                if array41.data[i] == 19
                        return array41
               end
            end
         end
         array41.refC -= 1
         if array41.refC == 0
             empty!(array41.data)
             array41 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array35)
         params1.size += 1
         push!(params1.data, array39)
         params1.size += 1
         push!(params1.data, array40)
         params1.size += 1
         array42 = func40(params1, loopsFactor);
         array42.refC -= 1
         if array42.refC == 0
             empty!(array42.data)
             array42 = nothing
         end
      end
      for i in 1:array39.size
          if array39.data[i] == 15
                  return array39
         end
      end
      array40.refC -= 1
      if array40.refC == 0
          empty!(array40.data)
          array40 = nothing
      end
      array39.refC -= 1
      if array39.refC == 0
          empty!(array39.data)
          array39 = nothing
      end
   end
   for i in 0:(array35.size-1) 
      array35.data[i+1] -= 1
   end
   for i in 1:array35.size
       if array35.data[i] == 96
               return array35
      end
   end
   return array35;
end

