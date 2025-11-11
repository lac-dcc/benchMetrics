include("program_julia_head.jl")
function func13(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array102 = nothing
   if pCounter > 1
       array102 = vars.data[pCounter]
       pCounter -= 1
       array102.refC += 1
   else
       array102 = JArray(zeros(Int, 984), 984, 1, 102)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array102)
   params0.size += 1
   array103 = func17(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array106 = nothing
      if pCounter > 1
          array106 = vars.data[pCounter]
          pCounter -= 1
          array106.refC += 1
      else
          array106 = JArray(zeros(Int, 672), 672, 1, 106)
      end
      loopLimit32 = (50)/3 + 1
      for i in 1:loopLimit32 
         for i in 0:(array106.size-1) 
            array106.data[i+1] -= 1
         end
         for i in 1:array103.size
             if array103.data[i] == 85
                     return array103
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array102)
      params1.size += 1
      push!(params1.data, array103)
      params1.size += 1
      push!(params1.data, array106)
      params1.size += 1
      array107 = func28(params1, get_path(), loopsFactor);
      array107.refC -= 1
      if array107.refC == 0
          empty!(array107.data)
          array107 = nothing
      end
      array106.refC -= 1
      if array106.refC == 0
          empty!(array106.data)
          array106 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array102)
      params1.size += 1
      push!(params1.data, array103)
      params1.size += 1
      array108 = func22(params1, get_path(), loopsFactor);
      array108.refC -= 1
      if array108.refC == 0
          empty!(array108.data)
          array108 = nothing
      end
   end
   array103.refC -= 1
   if array103.refC == 0
       empty!(array103.data)
       array103 = nothing
   end
   return array102;
end

