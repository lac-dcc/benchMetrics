const lib = @import("lib.zig");
const std = lib.std;
const allocator = std.heap.smp_allocator;
const Array = lib.Array;
const ArrayParam = lib.ArrayParam;
const get_path = lib.get_path;

const func0 = @import("func0.zig").func0;
const func10 = @import("func10.zig").func10;
const func11 = @import("func11.zig").func11;
const func28 = @import("func28.zig").func28;
const func29 = @import("func29.zig").func29;
const func40 = @import("func40.zig").func40;
const func41 = @import("func41.zig").func41;
const func30 = @import("func30.zig").func30;
const func42 = @import("func42.zig").func42;
const func43 = @import("func43.zig").func43;
const func44 = @import("func44.zig").func44;
const func45 = @import("func45.zig").func45;
const func34 = @import("func34.zig").func34;
const func31 = @import("func31.zig").func31;
const func35 = @import("func35.zig").func35;
const func22 = @import("func22.zig").func22;
const func23 = @import("func23.zig").func23;
const func36 = @import("func36.zig").func36;
const func37 = @import("func37.zig").func37;
const func38 = @import("func38.zig").func38;
const func39 = @import("func39.zig").func39;
const func32 = @import("func32.zig").func32;
const func12 = @import("func12.zig").func12;
const func24 = @import("func24.zig").func24;
const func25 = @import("func25.zig").func25;
const func27 = @import("func27.zig").func27;
const func33 = @import("func33.zig").func33;
const func16 = @import("func16.zig").func16;
const func13 = @import("func13.zig").func13;
const func17 = @import("func17.zig").func17;
const func4 = @import("func4.zig").func4;
const func5 = @import("func5.zig").func5;
const func18 = @import("func18.zig").func18;
const func19 = @import("func19.zig").func19;
const func20 = @import("func20.zig").func20;
const func21 = @import("func21.zig").func21;
const func14 = @import("func14.zig").func14;
const func6 = @import("func6.zig").func6;
const func7 = @import("func7.zig").func7;
const func8 = @import("func8.zig").func8;
const func9 = @import("func9.zig").func9;
const func15 = @import("func15.zig").func15;
const func2 = @import("func2.zig").func2;
const func1 = @import("func1.zig").func1;
const func3 = @import("func3.zig").func3;

pub fn func26(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   if ((path0 & 1) != 0) {
      var array78: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array78 = vars.data[pCounter];
          array78.refC += 1;
      } else {
          array78 = try allocator.create(Array);
          array78.*.size = 924;
          array78.*.refC = 1;
          array78.*.id = 78;
          array78.*.data = try allocator.alloc(u32, array78.*.size);
      }
      var loop25: usize = 0;
      const loopLimit25: usize = (50)/3 + 1;
      while (loop25 < loopLimit25) {
         for (0..array78.size) |i| {
             array78.data[i] -= 1;
         }
         for (0..array78.size) |i| {
             if (array78.data[i] == 24) {
                 return array78;
             }
         }
         loop25 += 1;
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array78;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array79 = try func36(&params0, try get_path());
      defer allocator.free(params0.data);
      array79.refC -= 1;
      if (array79.refC == 0) {
          allocator.free(array79.data);
          allocator.destroy(array79);
      }
      array78.refC -= 1;
      if (array78.refC == 0) {
          allocator.free(array78.data);
          allocator.destroy(array78);
      }
   
   } else {
      const params0_data = try allocator.alloc(*Array, 0);
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 0,
      };
      const array80 = try func32(&params0, try get_path());
      defer allocator.free(params0.data);
      array80.refC -= 1;
      if (array80.refC == 0) {
          allocator.free(array80.data);
          allocator.destroy(array80);
      }
   }
   var array81: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array81 = vars.data[pCounter];
       array81.refC += 1;
   } else {
       array81 = try allocator.create(Array);
       array81.*.size = 379;
       array81.*.refC = 1;
       array81.*.id = 81;
       array81.*.data = try allocator.alloc(u32, array81.*.size);
   }
   return array81;
}

