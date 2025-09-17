include("program_julia_head.jl")
function func25(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   loopLimit31 = (50)/3 + 1
   for i in 1:loopLimit31 
      if (PATH0 & 1) != 0
         array100 = nothing
         if pCounter > 1
             array100 = vars.data[pCounter]
             pCounter -= 1
             array100.refC += 1
         else
             array100 = JArray(zeros(Int, 127), 127, 1, 100)
         end
         loopLimit32 = (50)/4 + 1
         for i in 1:loopLimit32 
            for i in 0:(array100.size-1) 
               array100.data[i+1] -= 1
            end
            for i in 1:array100.size
                if array100.data[i] == 58
                        return array100
               end
            end
         end
         params0 = JArray_param{Int}()
         params0.size = 1
         push!(params0.data, array100)
         params0.size += 1
         array101 = func42(params0, get_path(), loopsFactor);
         array101.refC -= 1
         if array101.refC == 0
             empty!(array101.data)
             array101 = nothing
         end
         array100.refC -= 1
         if array100.refC == 0
             empty!(array100.data)
             array100 = nothing
         end
      
      else 
         params0 = JArray_param{Int}()
         params0.size = 0
         array102 = func34(params0, get_path(), loopsFactor);
         array102.refC -= 1
         if array102.refC == 0
             empty!(array102.data)
             array102 = nothing
         end
      end
      array103 = nothing
      if pCounter > 1
          array103 = vars.data[pCounter]
          pCounter -= 1
          array103.refC += 1
      else
          array103 = JArray(zeros(Int, 396), 396, 1, 103)
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array103)
      params0.size += 1
      array104 = func35(params0, loopsFactor);
      if (PATH0 & 2) != 0
         array105 = nothing
         if pCounter > 1
             array105 = vars.data[pCounter]
             pCounter -= 1
             array105.refC += 1
         else
             array105 = JArray(zeros(Int, 84), 84, 1, 105)
         end
         loopLimit33 = (50)/4 + 1
         for i in 1:loopLimit33 
            for i in 0:(array104.size-1) 
               array104.data[i+1] -= 1
            end
            for i in 1:array103.size
                if array103.data[i] == 72
                        return array103
               end
            end
         end
         params1 = JArray_param{Int}()
         params1.size = 3
         push!(params1.data, array103)
         params1.size += 1
         push!(params1.data, array104)
         params1.size += 1
         push!(params1.data, array105)
         params1.size += 1
         array106 = func46(params1, get_path(), loopsFactor);
         array106.refC -= 1
         if array106.refC == 0
             empty!(array106.data)
             array106 = nothing
         end
         array105.refC -= 1
         if array105.refC == 0
             empty!(array105.data)
             array105 = nothing
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array103)
         params1.size += 1
         push!(params1.data, array104)
         params1.size += 1
         array107 = func40(params1, loopsFactor);
         array107.refC -= 1
         if array107.refC == 0
             empty!(array107.data)
             array107 = nothing
         end
      end
      for i in 1:array104.size
          if array104.data[i] == 40
                  return array104
         end
      end
      array104.refC -= 1
      if array104.refC == 0
          empty!(array104.data)
          array104 = nothing
      end
      array103.refC -= 1
      if array103.refC == 0
          empty!(array103.data)
          array103 = nothing
      end
   end
   array108 = nothing
   if pCounter > 1
       array108 = vars.data[pCounter]
       pCounter -= 1
       array108.refC += 1
   else
       array108 = JArray(zeros(Int, 42), 42, 1, 108)
   end
   return array108;
end

