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
const func27 = @import("func27.zig").func27;
const func33 = @import("func33.zig").func33;
const func16 = @import("func16.zig").func16;
const func13 = @import("func13.zig").func13;
const func17 = @import("func17.zig").func17;
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

pub fn func4(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array110: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array110 = vars.data[pCounter];
       array110.refC += 1;
   } else {
       array110 = try allocator.create(Array);
       array110.*.size = 209;
       array110.*.refC = 1;
       array110.*.id = 110;
       array110.*.data = try allocator.alloc(u32, array110.*.size);
   }
   var loop33: usize = 0;
   const loopLimit33: usize = (50)/3 + 1;
   while (loop33 < loopLimit33) {
      if ((path0 & 1) != 0) {
         var array111: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array111 = vars.data[pCounter];
             array111.refC += 1;
         } else {
             array111 = try allocator.create(Array);
             array111.*.size = 581;
             array111.*.refC = 1;
             array111.*.id = 111;
             array111.*.data = try allocator.alloc(u32, array111.*.size);
         }
         var loop34: usize = 0;
         const loopLimit34: usize = (50)/4 + 1;
         while (loop34 < loopLimit34) {
            for (0..array111.size) |i| {
                array111.data[i] -= 1;
            }
            for (0..array110.size) |i| {
                if (array110.data[i] == 32) {
                    return array110;
                }
            }
            loop34 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array110;
         params0_data[1] = array111;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array112 = try func24(&params0, try get_path());
         defer allocator.free(params0.data);
         array112.refC -= 1;
         if (array112.refC == 0) {
             allocator.free(array112.data);
             allocator.destroy(array112);
         }
         array111.refC -= 1;
         if (array111.refC == 0) {
             allocator.free(array111.data);
             allocator.destroy(array111);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array110;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array113 = try func16(&params0, try get_path());
         defer allocator.free(params0.data);
         array113.refC -= 1;
         if (array113.refC == 0) {
             allocator.free(array113.data);
             allocator.destroy(array113);
         }
      }
      var array114: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array114 = vars.data[pCounter];
          array114.refC += 1;
      } else {
          array114 = try allocator.create(Array);
          array114.*.size = 769;
          array114.*.refC = 1;
          array114.*.id = 114;
          array114.*.data = try allocator.alloc(u32, array114.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array110;
      params0_data[1] = array114;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array115 = try func17(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array116: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array116 = vars.data[pCounter];
             array116.refC += 1;
         } else {
             array116 = try allocator.create(Array);
             array116.*.size = 850;
             array116.*.refC = 1;
             array116.*.id = 116;
             array116.*.data = try allocator.alloc(u32, array116.*.size);
         }
         var loop35: usize = 0;
         const loopLimit35: usize = (50)/4 + 1;
         while (loop35 < loopLimit35) {
            for (0..array116.size) |i| {
                array116.data[i] -= 1;
            }
            for (0..array110.size) |i| {
                if (array110.data[i] == 42) {
                    return array110;
                }
            }
            loop35 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 4);
         params1_data[0] = array110;
         params1_data[1] = array114;
         params1_data[2] = array115;
         params1_data[3] = array116;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 4,
         };
         const array117 = try func28(&params1, try get_path());
         defer allocator.free(params1.data);
         array117.refC -= 1;
         if (array117.refC == 0) {
             allocator.free(array117.data);
             allocator.destroy(array117);
         }
         array116.refC -= 1;
         if (array116.refC == 0) {
             allocator.free(array116.data);
             allocator.destroy(array116);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array110;
         params1_data[1] = array114;
         params1_data[2] = array115;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array118 = try func22(&params1, try get_path());
         defer allocator.free(params1.data);
         array118.refC -= 1;
         if (array118.refC == 0) {
             allocator.free(array118.data);
             allocator.destroy(array118);
         }
      }
      for (0..array115.size) |i| {
          if (array115.data[i] == 67) {
              return array115;
          }
      }
      array115.refC -= 1;
      if (array115.refC == 0) {
          allocator.free(array115.data);
          allocator.destroy(array115);
      }
      array114.refC -= 1;
      if (array114.refC == 0) {
          allocator.free(array114.data);
          allocator.destroy(array114);
      }
      loop33 += 1;
   }
   for (0..array110.size) |i| {
       array110.data[i] -= 1;
   }
   for (0..array110.size) |i| {
       if (array110.data[i] == 61) {
           return array110;
       }
   }
   return array110;
}

