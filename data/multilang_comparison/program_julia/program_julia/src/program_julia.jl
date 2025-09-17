include("func0.jl")
include("func10.jl")
include("func11.jl")
include("func28.jl")
include("func29.jl")
include("func46.jl")
include("func47.jl")
include("func48.jl")
include("func49.jl")
include("func40.jl")
include("func41.jl")
include("func46.jl")
include("func50.jl")
include("func30.jl")
include("func42.jl")
include("func43.jl")
include("func44.jl")
include("func50.jl")
include("func45.jl")
include("func51.jl")
include("func34.jl")
include("func50.jl")
include("func51.jl")
include("func31.jl")
include("func35.jl")
include("func42.jl")
include("func46.jl")
include("func40.jl")
include("func22.jl")
include("func42.jl")
include("func34.jl")
include("func35.jl")
include("func46.jl")
include("func40.jl")
include("func23.jl")
include("func28.jl")
include("func36.jl")
include("func37.jl")
include("func50.jl")
include("func51.jl")
include("func38.jl")
include("func46.jl")
include("func40.jl")
include("func39.jl")
include("func41.jl")
include("func50.jl")
include("func32.jl")
include("func46.jl")
include("func40.jl")
include("func41.jl")
include("func50.jl")
include("func12.jl")
include("func24.jl")
include("func25.jl")
include("func42.jl")
include("func34.jl")
include("func35.jl")
include("func46.jl")
include("func40.jl")
include("func26.jl")
include("func36.jl")
include("func32.jl")
include("func27.jl")
include("func33.jl")
include("func36.jl")
include("func42.jl")
include("func34.jl")
include("func16.jl")
include("func36.jl")
include("func32.jl")
include("func33.jl")
include("func42.jl")
include("func34.jl")
include("func13.jl")
include("func17.jl")
include("func24.jl")
include("func28.jl")
include("func22.jl")
include("func4.jl")
include("func24.jl")
include("func16.jl")
include("func17.jl")
include("func28.jl")
include("func22.jl")
include("func5.jl")
include("func10.jl")
include("func18.jl")
include("func19.jl")
include("func36.jl")
include("func32.jl")
include("func33.jl")
include("func42.jl")
include("func34.jl")
include("func20.jl")
include("func28.jl")
include("func22.jl")
include("func21.jl")
include("func23.jl")
include("func36.jl")
include("func32.jl")
include("func14.jl")
include("func28.jl")
include("func22.jl")
include("func23.jl")
include("func36.jl")
include("func32.jl")
include("func6.jl")
include("func7.jl")
include("func24.jl")
include("func16.jl")
include("func17.jl")
include("func28.jl")
include("func22.jl")
include("func8.jl")
include("func18.jl")
include("func14.jl")
include("func9.jl")
include("func15.jl")
include("func18.jl")
include("func24.jl")
include("func16.jl")
include("func2.jl")
include("func18.jl")
include("func14.jl")
include("func15.jl")
include("func24.jl")
include("func16.jl")
include("func1.jl")
include("func3.jl")
include("func6.jl")
include("func10.jl")
include("func4.jl")
include("program_julia_head.jl")
include("path.jl")


function main()
   loopsFactor = 100
   Random.seed!(0)
   i = 1
   while i <= length(ARGS)
       if ARGS[i] == "-path-seed"
           i += 1
           if i <= length(ARGS)
               Random.seed!(parse(Int, ARGS[i]))
           end
       elseif ARGS[i] == "-loops-factor"
           i += 1
           if i <= length(ARGS)
               loopsFactor = parse(Int, ARGS[i])
           end
       end
       i += 1
   end
   loopLimit0 = (50)/1 + 1
   for i in 1:loopLimit0 
      params0 = JArray_param{Int}()
      params0.size = 0
      array0 = func0(params0, get_path(), loopsFactor);
      array188 = nothing
      array188 = JArray(zeros(Int, 493),493, 1, 188)
      if (get_path() & 1) != 0
         if (get_path() & 1) != 0
            array189 = nothing
            array189 = JArray(zeros(Int, 358),358, 1, 189)
            loopLimit55 = (50)/2 + 1
            for i in 1:loopLimit55 
               for i in 0:(array188.size-1) 
                  array188.data[i+1] -= 1
               end
               for i in 1:array188.size
                   if array188.data[i] == 17
                           array188.data[i] += 17
                  end
               end
            end
            params1 = JArray_param{Int}()
            params1.size = 3
            push!(params1.data, array0)
            params1.size += 1
            push!(params1.data, array188)
            params1.size += 1
            push!(params1.data, array189)
            params1.size += 1
            array190 = func6(params1, get_path(), loopsFactor);
            array190.refC -= 1
            if array190.refC == 0
                empty!(array190.data)
                array190 = nothing
            end
            array189.refC -= 1
            if array189.refC == 0
                empty!(array189.data)
                array189 = nothing
            end
         
         else 
            params1 = JArray_param{Int}()
            params1.size = 2
            push!(params1.data, array0)
            params1.size += 1
            push!(params1.data, array188)
            params1.size += 1
            array214 = func2(params1, get_path(), loopsFactor);
            array214.refC -= 1
            if array214.refC == 0
                empty!(array214.data)
                array214 = nothing
            end
         end
      
      else 
         params1 = JArray_param{Int}()
         params1.size = 2
         push!(params1.data, array0)
         params1.size += 1
         push!(params1.data, array188)
         params1.size += 1
         array224 = func1(params1, get_path(), loopsFactor);
         array224.refC -= 1
         if array224.refC == 0
             empty!(array224.data)
             array224 = nothing
         end
      end
      array188.refC -= 1
      if array188.refC == 0
          empty!(array188.data)
          array188 = nothing
      end
      array0.refC -= 1
      if array0.refC == 0
          empty!(array0.data)
          array0 = nothing
      end
   end
end
main()

