using Random
mutable struct JArray
    data::Vector{Int}
    size::Int
    refC::Int
    id::Int

    function JArray()
        new(Int[], 0, 0, 0)
    end
    function JArray(data::Vector{Int}, size::Int, refC::Int, id::Int)
        new(data, size, refC, id)
    end
end

mutable struct JArray_param{Int}
    data::Vector{JArray}
    size::Int

    function JArray_param{Int}() where Int
        new(Vector{JArray}(), 0)
    end
end

