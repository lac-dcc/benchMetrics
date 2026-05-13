package main

import "core:fmt"
import "core:os"
import "core:mem"
import "base:runtime"
import "core:strconv"
import "core:math/rand"

Array :: struct {
    data: []u32,
    size: int,
    refC: int,
    id: i32,
};

ArrayParam :: struct {
    data: []^Array,
    size: int,
};

get_path :: proc() -> u64 {
    path := os.get_env("BENCH_PATH");
    if val, ok := strconv.parse_u64(path, 10); ok {
        return val;
        }
    return rand.uint64();
}

