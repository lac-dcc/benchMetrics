module path;
import program_d;

ulong get_path() {
    string path = environment.get("BENCH_PATH");
    if (path !is null) {
        return to!ulong(path);
    } else {
        ulong hi = benchgen_rand();
        ulong lo = benchgen_rand();
        return (hi << 32) | lo;
    }
}

