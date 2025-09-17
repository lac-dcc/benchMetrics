package main
import "math/rand"
import "os"
import "strconv"
var _ = rand.Intn
func getPath() uint64 {
    path := os.Getenv("BENCH_PATH")
    if path != "" {
        val, err := strconv.ParseUint(path, 10, 64)
        if err == nil {
            return val
        }
    }
    n := uint64(rand.Uint32())
    return (n << 32) | uint64(rand.Uint32())
}

