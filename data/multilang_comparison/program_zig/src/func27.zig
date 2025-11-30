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
const func26 = @import("func26.zig").func26;
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

pub fn func27(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array83: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array83 = vars.data[pCounter];
       array83.refC += 1;
   } else {
       array83 = try allocator.create(Array);
       array83.*.size = 881;
       array83.*.refC = 1;
       array83.*.id = 83;
       array83.*.data = try allocator.alloc(u32, array83.*.size);
   }
   const params0_data = try allocator.alloc(*Array, 1);
   params0_data[0] = array83;
   var params0 = ArrayParam{
       .data = params0_data,
       .size = 1,
   };
   const array84 = try func33(&params0);
   defer allocator.free(params0.data);
   if ((path0 & 1) != 0) {
      var array87: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array87 = vars.data[pCounter];
          array87.refC += 1;
      } else {
          array87 = try allocator.create(Array);
          array87.*.size = 813;
          array87.*.refC = 1;
          array87.*.id = 87;
          array87.*.data = try allocator.alloc(u32, array87.*.size);
      }
      var loop27: usize = 0;
      const loopLimit27: usize = (50)/3 + 1;
      while (loop27 < loopLimit27) {
         for (0..array83.size) |i| {
             array83.data[i] -= 1;
         }
         for (0..array87.size) |i| {
             if (array87.data[i] == 95) {
                 return array87;
             }
         }
         loop27 += 1;
      }
      const params1_data = try allocator.alloc(*Array, 3);
      params1_data[0] = array83;
      params1_data[1] = array84;
      params1_data[2] = array87;
      var params1 = ArrayParam{
          .data = params1_data,
          .size = 3,
      };
      const array88 = try func42(&params1, try get_path());
      defer allocator.free(params1.data);
      array88.refC -= 1;
      if (array88.refC == 0) {
          allocator.free(array88.data);
          allocator.destroy(array88);
      }
      array87.refC -= 1;
      if (array87.refC == 0) {
          allocator.free(array87.data);
          allocator.destroy(array87);
      }
   
   } else {
      const params1_data = try allocator.alloc(*Array, 2);
      params1_data[0] = array83;
      params1_data[1] = array84;
      var params1 = ArrayParam{
          .data = params1_data,
          .size = 2,
      };
      const array89 = try func34(&params1);
      defer allocator.free(params1.data);
      array89.refC -= 1;
      if (array89.refC == 0) {
          allocator.free(array89.data);
          allocator.destroy(array89);
      }
   }
   array84.refC -= 1;
   if (array84.refC == 0) {
       allocator.free(array84.data);
       allocator.destroy(array84);
   }
   return array83;
}

