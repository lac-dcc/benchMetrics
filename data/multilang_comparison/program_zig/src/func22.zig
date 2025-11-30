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

pub fn func22(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array35: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array35 = vars.data[pCounter];
       array35.refC += 1;
   } else {
       array35 = try allocator.create(Array);
       array35.*.size = 567;
       array35.*.refC = 1;
       array35.*.id = 35;
       array35.*.data = try allocator.alloc(u32, array35.*.size);
   }
   var loop12: usize = 0;
   const loopLimit12: usize = (50)/4 + 1;
   while (loop12 < loopLimit12) {
      if ((path0 & 1) != 0) {
         var array36: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array36 = vars.data[pCounter];
             array36.refC += 1;
         } else {
             array36 = try allocator.create(Array);
             array36.*.size = 856;
             array36.*.refC = 1;
             array36.*.id = 36;
             array36.*.data = try allocator.alloc(u32, array36.*.size);
         }
         var loop13: usize = 0;
         const loopLimit13: usize = (50)/5 + 1;
         while (loop13 < loopLimit13) {
            for (0..array36.size) |i| {
                array36.data[i] -= 1;
            }
            for (0..array36.size) |i| {
                if (array36.data[i] == 86) {
                    return array36;
                }
            }
            loop13 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array35;
         params0_data[1] = array36;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array37 = try func42(&params0, try get_path());
         defer allocator.free(params0.data);
         array37.refC -= 1;
         if (array37.refC == 0) {
             allocator.free(array37.data);
             allocator.destroy(array37);
         }
         array36.refC -= 1;
         if (array36.refC == 0) {
             allocator.free(array36.data);
             allocator.destroy(array36);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array35;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array38 = try func34(&params0);
         defer allocator.free(params0.data);
         array38.refC -= 1;
         if (array38.refC == 0) {
             allocator.free(array38.data);
             allocator.destroy(array38);
         }
      }
      var array39: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array39 = vars.data[pCounter];
          array39.refC += 1;
      } else {
          array39 = try allocator.create(Array);
          array39.*.size = 624;
          array39.*.refC = 1;
          array39.*.id = 39;
          array39.*.data = try allocator.alloc(u32, array39.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array35;
      params0_data[1] = array39;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array40 = try func35(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array41: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array41 = vars.data[pCounter];
             array41.refC += 1;
         } else {
             array41 = try allocator.create(Array);
             array41.*.size = 732;
             array41.*.refC = 1;
             array41.*.id = 41;
             array41.*.data = try allocator.alloc(u32, array41.*.size);
         }
         var loop14: usize = 0;
         const loopLimit14: usize = (50)/5 + 1;
         while (loop14 < loopLimit14) {
            for (0..array39.size) |i| {
                array39.data[i] -= 1;
            }
            for (0..array41.size) |i| {
                if (array41.data[i] == 19) {
                    return array41;
                }
            }
            loop14 += 1;
         }
         array41.refC -= 1;
         if (array41.refC == 0) {
             allocator.free(array41.data);
             allocator.destroy(array41);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array35;
         params1_data[1] = array39;
         params1_data[2] = array40;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array42 = try func40(&params1);
         defer allocator.free(params1.data);
         array42.refC -= 1;
         if (array42.refC == 0) {
             allocator.free(array42.data);
             allocator.destroy(array42);
         }
      }
      for (0..array39.size) |i| {
          if (array39.data[i] == 15) {
              return array39;
          }
      }
      array40.refC -= 1;
      if (array40.refC == 0) {
          allocator.free(array40.data);
          allocator.destroy(array40);
      }
      array39.refC -= 1;
      if (array39.refC == 0) {
          allocator.free(array39.data);
          allocator.destroy(array39);
      }
      loop12 += 1;
   }
   for (0..array35.size) |i| {
       array35.data[i] -= 1;
   }
   for (0..array35.size) |i| {
       if (array35.data[i] == 96) {
           return array35;
       }
   }
   return array35;
}

