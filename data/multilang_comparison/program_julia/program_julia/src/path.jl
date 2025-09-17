include("program_julia_head.jl")
function get_path()::UInt64
   path = get(ENV, "BENCH_PATH", nothing)
   if path !== nothing
       return parse(UInt64, path)
   else
       n = rand(UInt32)
       return (UInt64(n) << 32) | UInt64(rand(UInt32))
   end
end

