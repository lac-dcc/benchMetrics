include("program_julia_head.jl")
function func12(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   if (PATH0 & 1) != 0
      array66 = nothing
      if pCounter > 1
          array66 = vars.data[pCounter]
          pCounter -= 1
          array66.refC += 1
      else
          array66 = JArray(zeros(Int, 786), 786, 1, 66)
      end
      loopLimit21 = (50)/3 + 1
      for i in 1:loopLimit21 
         for i in 0:(array66.size-1) 
            array66.data[i+1] -= 1
         end
         for i in 1:array66.size
             if array66.data[i] == 42
                     return array66
            end
         end
      end
      params0 = JArray_param{Int}()
      params0.size = 1
      push!(params0.data, array66)
      params0.size += 1
      array67 = func24(params0, get_path(), loopsFactor);
      array67.refC -= 1
      if array67.refC == 0
          empty!(array67.data)
          array67 = nothing
      end
      array66.refC -= 1
      if array66.refC == 0
          empty!(array66.data)
          array66 = nothing
      end
   
   else 
      params0 = JArray_param{Int}()
      params0.size = 0
      array90 = func16(params0, get_path(), loopsFactor);
      array90.refC -= 1
      if array90.refC == 0
          empty!(array90.data)
          array90 = nothing
      end
   end
   array100 = nothing
   if pCounter > 1
       array100 = vars.data[pCounter]
       pCounter -= 1
       array100.refC += 1
   else
       array100 = JArray(zeros(Int, 940), 940, 1, 100)
   end
   return array100;
end

