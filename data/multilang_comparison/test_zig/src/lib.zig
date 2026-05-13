pub const std = @import("std");

pub var gpa = std.heap.GeneralPurposeAllocator(.{}){};
pub const allocator = gpa.allocator();

pub const Array = struct {
    data: []u32,
    size: usize,
    refC: usize,
    id: i32,
};

pub const ArrayParam = struct {
    data: []*Array,
    size: usize,
};

pub var prng = std.Random.DefaultPrng.init(0);
pub const random = prng.random();

pub fn get_path() !u64 {
    if (std.process.getEnvVarOwned(allocator, "BENCH_PATH")) 
|path| {
        defer allocator.free(path);
        return std.fmt.parseUnsigned(u64, path, 10);
    } else |err| {
        if (err == error.EnvironmentVariableNotFound) {
            return random.int(u64);
        } else {
            return err;
        }
    }
}

