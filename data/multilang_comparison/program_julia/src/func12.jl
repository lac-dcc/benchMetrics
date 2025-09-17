include("program_julia_head.jl")
function func12(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array97 = nothing
      if pCounter > 1
          array97 = vars.data[pCounter]
          pCounter -= 1
          array97.refC += 1
      else
          array97 = JArray(zeros(Int, 321), 321, 1, 97)
      end
      loopLimit30 = (50)/3 + 1
      for i in 1:loopLimit30 
         for i in 0:(array97.size-1) 
            array97.data[i+1] -= 1
         end
         for i in 1:array97.size
             if array97.data[i] == 99
                     return array97
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array97)
      params0.size += 1
      array98 = func24(params0, get_path(), loopsFactor);
      array98.refC -= 1
      if array98.refC == 0
          empty!(array98.data)
          array98 = nothing
      end
      array97.refC -= 1
      if array97.refC == 0
          empty!(array97.data)
          array97 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array122 = func16(params0, get_path(), loopsFactor);
      array122.refC -= 1
      if array122.refC == 0
          empty!(array122.data)
          array122 = nothing
      end
   end
   array132 = nothing
   if pCounter > 1
       array132 = vars.data[pCounter]
       pCounter -= 1
       array132.refC += 1
   else
       array132 = JArray(zeros(Int, 497), 497, 1, 132)
   end
   return array132;
end

