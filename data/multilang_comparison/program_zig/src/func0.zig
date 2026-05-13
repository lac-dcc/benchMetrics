const lib = @import("lib.zig");
const std = lib.std;
const allocator = std.heap.smp_allocator;
const Array = lib.Array;
const ArrayParam = lib.ArrayParam;
const get_path = lib.get_path;

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

pub fn func0(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array1: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array1 = vars.data[pCounter];
       array1.refC += 1;
   } else {
       array1 = try allocator.create(Array);
       array1.*.size = 386;
       array1.*.refC = 1;
       array1.*.id = 1;
       array1.*.data = try allocator.alloc(u32, array1.*.size);
   }
   var loop1: usize = 0;
   const loopLimit1: usize = (50)/2 + 1;
   while (loop1 < loopLimit1) {
      if ((path0 & 1) != 0) {
         var array2: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array2 = vars.data[pCounter];
             array2.refC += 1;
         } else {
             array2 = try allocator.create(Array);
             array2.*.size = 492;
             array2.*.refC = 1;
             array2.*.id = 2;
             array2.*.data = try allocator.alloc(u32, array2.*.size);
         }
         var loop2: usize = 0;
         const loopLimit2: usize = (50)/3 + 1;
         while (loop2 < loopLimit2) {
            for (0..array2.size) |i| {
                array2.data[i] -= 1;
            }
            for (0..array2.size) |i| {
                if (array2.data[i] == 62) {
                    return array2;
                }
            }
            loop2 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array1;
         params0_data[1] = array2;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array3 = try func10(&params0, try get_path());
         defer allocator.free(params0.data);
         array3.refC -= 1;
         if (array3.refC == 0) {
             allocator.free(array3.data);
             allocator.destroy(array3);
         }
         array2.refC -= 1;
         if (array2.refC == 0) {
             allocator.free(array2.data);
             allocator.destroy(array2);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array1;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array109 = try func4(&params0, try get_path());
         defer allocator.free(params0.data);
         array109.refC -= 1;
         if (array109.refC == 0) {
             allocator.free(array109.data);
             allocator.destroy(array109);
         }
      }
      var array119: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array119 = vars.data[pCounter];
          array119.refC += 1;
      } else {
          array119 = try allocator.create(Array);
          array119.*.size = 326;
          array119.*.refC = 1;
          array119.*.id = 119;
          array119.*.data = try allocator.alloc(u32, array119.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array1;
      params0_data[1] = array119;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array120 = try func5(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array123: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array123 = vars.data[pCounter];
             array123.refC += 1;
         } else {
             array123 = try allocator.create(Array);
             array123.*.size = 872;
             array123.*.refC = 1;
             array123.*.id = 123;
             array123.*.data = try allocator.alloc(u32, array123.*.size);
         }
         var loop37: usize = 0;
         const loopLimit37: usize = (50)/3 + 1;
         while (loop37 < loopLimit37) {
            for (0..array1.size) |i| {
                array1.data[i] -= 1;
            }
            for (0..array120.size) |i| {
                if (array120.data[i] == 98) {
                    return array120;
                }
            }
            loop37 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 4);
         params1_data[0] = array1;
         params1_data[1] = array119;
         params1_data[2] = array120;
         params1_data[3] = array123;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 4,
         };
         const array124 = try func18(&params1, try get_path());
         defer allocator.free(params1.data);
         array124.refC -= 1;
         if (array124.refC == 0) {
             allocator.free(array124.data);
             allocator.destroy(array124);
         }
         array123.refC -= 1;
         if (array123.refC == 0) {
             allocator.free(array123.data);
             allocator.destroy(array123);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array1;
         params1_data[1] = array119;
         params1_data[2] = array120;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array146 = try func14(&params1, try get_path());
         defer allocator.free(params1.data);
         array146.refC -= 1;
         if (array146.refC == 0) {
             allocator.free(array146.data);
             allocator.destroy(array146);
         }
      }
      for (0..array120.size) |i| {
          if (array120.data[i] == 32) {
              return array120;
          }
      }
      array120.refC -= 1;
      if (array120.refC == 0) {
          allocator.free(array120.data);
          allocator.destroy(array120);
      }
      array119.refC -= 1;
      if (array119.refC == 0) {
          allocator.free(array119.data);
          allocator.destroy(array119);
      }
      loop1 += 1;
   }
   return array1;
}

