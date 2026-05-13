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

pub fn func16(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array91: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array91 = vars.data[pCounter];
       array91.refC += 1;
   } else {
       array91 = try allocator.create(Array);
       array91.*.size = 445;
       array91.*.refC = 1;
       array91.*.id = 91;
       array91.*.data = try allocator.alloc(u32, array91.*.size);
   }
   var loop28: usize = 0;
   const loopLimit28: usize = (50)/3 + 1;
   while (loop28 < loopLimit28) {
      if ((path0 & 1) != 0) {
         var array92: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array92 = vars.data[pCounter];
             array92.refC += 1;
         } else {
             array92 = try allocator.create(Array);
             array92.*.size = 756;
             array92.*.refC = 1;
             array92.*.id = 92;
             array92.*.data = try allocator.alloc(u32, array92.*.size);
         }
         var loop29: usize = 0;
         const loopLimit29: usize = (50)/4 + 1;
         while (loop29 < loopLimit29) {
            for (0..array92.size) |i| {
                array92.data[i] -= 1;
            }
            for (0..array91.size) |i| {
                if (array91.data[i] == 87) {
                    return array91;
                }
            }
            loop29 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array91;
         params0_data[1] = array92;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array93 = try func36(&params0, try get_path());
         defer allocator.free(params0.data);
         array93.refC -= 1;
         if (array93.refC == 0) {
             allocator.free(array93.data);
             allocator.destroy(array93);
         }
         array92.refC -= 1;
         if (array92.refC == 0) {
             allocator.free(array92.data);
             allocator.destroy(array92);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array91;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array94 = try func32(&params0, try get_path());
         defer allocator.free(params0.data);
         array94.refC -= 1;
         if (array94.refC == 0) {
             allocator.free(array94.data);
             allocator.destroy(array94);
         }
      }
      var array95: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array95 = vars.data[pCounter];
          array95.refC += 1;
      } else {
          array95 = try allocator.create(Array);
          array95.*.size = 9;
          array95.*.refC = 1;
          array95.*.id = 95;
          array95.*.data = try allocator.alloc(u32, array95.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array91;
      params0_data[1] = array95;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array96 = try func33(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array97: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array97 = vars.data[pCounter];
             array97.refC += 1;
         } else {
             array97 = try allocator.create(Array);
             array97.*.size = 342;
             array97.*.refC = 1;
             array97.*.id = 97;
             array97.*.data = try allocator.alloc(u32, array97.*.size);
         }
         var loop30: usize = 0;
         const loopLimit30: usize = (50)/4 + 1;
         while (loop30 < loopLimit30) {
            for (0..array97.size) |i| {
                array97.data[i] -= 1;
            }
            for (0..array96.size) |i| {
                if (array96.data[i] == 1) {
                    return array96;
                }
            }
            loop30 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 4);
         params1_data[0] = array91;
         params1_data[1] = array95;
         params1_data[2] = array96;
         params1_data[3] = array97;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 4,
         };
         const array98 = try func42(&params1, try get_path());
         defer allocator.free(params1.data);
         array98.refC -= 1;
         if (array98.refC == 0) {
             allocator.free(array98.data);
             allocator.destroy(array98);
         }
         array97.refC -= 1;
         if (array97.refC == 0) {
             allocator.free(array97.data);
             allocator.destroy(array97);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array91;
         params1_data[1] = array95;
         params1_data[2] = array96;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array99 = try func34(&params1);
         defer allocator.free(params1.data);
         array99.refC -= 1;
         if (array99.refC == 0) {
             allocator.free(array99.data);
             allocator.destroy(array99);
         }
      }
      for (0..array96.size) |i| {
          if (array96.data[i] == 99) {
              return array96;
          }
      }
      array96.refC -= 1;
      if (array96.refC == 0) {
          allocator.free(array96.data);
          allocator.destroy(array96);
      }
      array95.refC -= 1;
      if (array95.refC == 0) {
          allocator.free(array95.data);
          allocator.destroy(array95);
      }
      loop28 += 1;
   }
   for (0..array91.size) |i| {
       array91.data[i] -= 1;
   }
   for (0..array91.size) |i| {
       if (array91.data[i] == 39) {
           return array91;
       }
   }
   return array91;
}

