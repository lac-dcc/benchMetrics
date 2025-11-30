const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const exe = b.addExecutable(.{
        .name = "program_zig",
        .root_module = b.createModule(.{            .root_source_file = b.path("src/main.zig"),
            .target = target,
            .optimize = optimize,
        }),    });

    b.installArtifact(exe);

    const run_step = b.step("run", "Run the app");
    const run_exe = b.addRunArtifact(exe);
    run_exe.step.dependOn(&exe.step);
    run_step.dependOn(&run_exe.step);
}
