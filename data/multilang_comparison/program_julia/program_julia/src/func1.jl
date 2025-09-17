include("program_julia_head.jl")
function func1(vars::JArray_param, PATH0::UInt64, loopsFactor::Int)::JArray
   pCounter = length(vars.data)
   array225 = nothing
   if pCounter > 1
       array225 = vars.data[pCounter]
       pCounter -= 1
       array225.refC += 1
   else
       array225 = JArray(zeros(Int, 137), 137, 1, 225)
   end
   params0 = JArray_param{Int}()
   params0.size = 1
   push!(params0.data, array225)
   params0.size += 1
   array226 = func3(params0, loopsFactor);
   if (PATH0 & 1) != 0
      array229 = nothing
      if pCounter > 1
          array229 = vars.data[pCounter]
          pCounter -= 1
          array229.refC += 1
      else
          array229 = JArray(zeros(Int, 963), 963, 1, 229)
      end
      loopLimit66 = (50)/2 + 1
      for i in 1:loopLimit66 
         for i in 0:(array229.size-1) 
            array229.data[i+1] -= 1
         end
         for i in 1:array226.size
             if array226.data[i] == 58
                     return array226
            end
         end
      end
      params1 = JArray_param{Int}()
      params1.size = 3
      push!(params1.data, array225)
      params1.size += 1
      push!(params1.data, array226)
      params1.size += 1
      push!(params1.data, array229)
      params1.size += 1
      array230 = func10(params1, get_path(), loopsFactor);
      array230.refC -= 1
      if array230.refC == 0
          empty!(array230.data)
          array230 = nothing
      end
      array229.refC -= 1
      if array229.refC == 0
          empty!(array229.data)
          array229 = nothing
      end
   
   else 
      params1 = JArray_param{Int}()
      params1.size = 2
      push!(params1.data, array225)
      params1.size += 1
      push!(params1.data, array226)
      params1.size += 1
      array231 = func4(params1, get_path(), loopsFactor);
      array231.refC -= 1
      if array231.refC == 0
          empty!(array231.data)
          array231 = nothing
      end
   end
   array225.refC -= 1
   if array225.refC == 0
       empty!(array225.data)
       array225 = nothing
   end
   return array226;
end

