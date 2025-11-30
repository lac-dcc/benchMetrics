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
const func26 = @import("func26.zig").func26;
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

pub fn func25(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var loop22: usize = 0;
   const loopLimit22: usize = (50)/3 + 1;
   while (loop22 < loopLimit22) {
      if ((path0 & 1) != 0) {
         var array69: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array69 = vars.data[pCounter];
             array69.refC += 1;
         } else {
             array69 = try allocator.create(Array);
             array69.*.size = 828;
             array69.*.refC = 1;
             array69.*.id = 69;
             array69.*.data = try allocator.alloc(u32, array69.*.size);
         }
         var loop23: usize = 0;
         const loopLimit23: usize = (50)/4 + 1;
         while (loop23 < loopLimit23) {
            for (0..array69.size) |i| {
                array69.data[i] -= 1;
            }
            for (0..array69.size) |i| {
                if (array69.data[i] == 46) {
                    return array69;
                }
            }
            loop23 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array69;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array70 = try func42(&params0, try get_path());
         defer allocator.free(params0.data);
         array70.refC -= 1;
         if (array70.refC == 0) {
             allocator.free(array70.data);
             allocator.destroy(array70);
         }
         array69.refC -= 1;
         if (array69.refC == 0) {
             allocator.free(array69.data);
             allocator.destroy(array69);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 0);
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 0,
         };
         const array71 = try func34(&params0);
         defer allocator.free(params0.data);
         array71.refC -= 1;
         if (array71.refC == 0) {
             allocator.free(array71.data);
             allocator.destroy(array71);
         }
      }
      var array72: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array72 = vars.data[pCounter];
          array72.refC += 1;
      } else {
          array72 = try allocator.create(Array);
          array72.*.size = 810;
          array72.*.refC = 1;
          array72.*.id = 72;
          array72.*.data = try allocator.alloc(u32, array72.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array72;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array73 = try func35(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array74: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array74 = vars.data[pCounter];
             array74.refC += 1;
         } else {
             array74 = try allocator.create(Array);
             array74.*.size = 661;
             array74.*.refC = 1;
             array74.*.id = 74;
             array74.*.data = try allocator.alloc(u32, array74.*.size);
         }
         var loop24: usize = 0;
         const loopLimit24: usize = (50)/4 + 1;
         while (loop24 < loopLimit24) {
            for (0..array72.size) |i| {
                array72.data[i] -= 1;
            }
            for (0..array73.size) |i| {
                if (array73.data[i] == 5) {
                    return array73;
                }
            }
            loop24 += 1;
         }
         array74.refC -= 1;
         if (array74.refC == 0) {
             allocator.free(array74.data);
             allocator.destroy(array74);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 2);
         params1_data[0] = array72;
         params1_data[1] = array73;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 2,
         };
         const array75 = try func40(&params1);
         defer allocator.free(params1.data);
         array75.refC -= 1;
         if (array75.refC == 0) {
             allocator.free(array75.data);
             allocator.destroy(array75);
         }
      }
      for (0..array72.size) |i| {
          if (array72.data[i] == 26) {
              return array72;
          }
      }
      array73.refC -= 1;
      if (array73.refC == 0) {
          allocator.free(array73.data);
          allocator.destroy(array73);
      }
      array72.refC -= 1;
      if (array72.refC == 0) {
          allocator.free(array72.data);
          allocator.destroy(array72);
      }
      loop22 += 1;
   }
   var array76: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array76 = vars.data[pCounter];
       array76.refC += 1;
   } else {
       array76 = try allocator.create(Array);
       array76.*.size = 522;
       array76.*.refC = 1;
       array76.*.id = 76;
       array76.*.data = try allocator.alloc(u32, array76.*.size);
   }
   return array76;
}

