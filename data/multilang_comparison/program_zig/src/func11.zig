const lib = @import("lib.zig");
const std = lib.std;
const allocator = std.heap.smp_allocator;
const Array = lib.Array;
const ArrayParam = lib.ArrayParam;
const get_path = lib.get_path;

const func0 = @import("func0.zig").func0;
const func10 = @import("func10.zig").func10;
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

pub fn func11(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var loop3: usize = 0;
   const loopLimit3: usize = (50)/3 + 1;
   while (loop3 < loopLimit3) {
      if ((path0 & 1) != 0) {
         var array5: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array5 = vars.data[pCounter];
             array5.refC += 1;
         } else {
             array5 = try allocator.create(Array);
             array5.*.size = 736;
             array5.*.refC = 1;
             array5.*.id = 5;
             array5.*.data = try allocator.alloc(u32, array5.*.size);
         }
         var loop4: usize = 0;
         const loopLimit4: usize = (50)/4 + 1;
         while (loop4 < loopLimit4) {
            for (0..array5.size) |i| {
                array5.data[i] -= 1;
            }
            for (0..array5.size) |i| {
                if (array5.data[i] == 67) {
                    return array5;
                }
            }
            loop4 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array5;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array6 = try func28(&params0, try get_path());
         defer allocator.free(params0.data);
         array6.refC -= 1;
         if (array6.refC == 0) {
             allocator.free(array6.data);
             allocator.destroy(array6);
         }
         array5.refC -= 1;
         if (array5.refC == 0) {
             allocator.free(array5.data);
             allocator.destroy(array5);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 0);
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 0,
         };
         const array34 = try func22(&params0, try get_path());
         defer allocator.free(params0.data);
         array34.refC -= 1;
         if (array34.refC == 0) {
             allocator.free(array34.data);
             allocator.destroy(array34);
         }
      }
      var array43: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array43 = vars.data[pCounter];
          array43.refC += 1;
      } else {
          array43 = try allocator.create(Array);
          array43.*.size = 618;
          array43.*.refC = 1;
          array43.*.id = 43;
          array43.*.data = try allocator.alloc(u32, array43.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array43;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array44 = try func23(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array47: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array47 = vars.data[pCounter];
             array47.refC += 1;
         } else {
             array47 = try allocator.create(Array);
             array47.*.size = 193;
             array47.*.refC = 1;
             array47.*.id = 47;
             array47.*.data = try allocator.alloc(u32, array47.*.size);
         }
         var loop16: usize = 0;
         const loopLimit16: usize = (50)/4 + 1;
         while (loop16 < loopLimit16) {
            for (0..array44.size) |i| {
                array44.data[i] -= 1;
            }
            for (0..array47.size) |i| {
                if (array47.data[i] == 64) {
                    return array47;
                }
            }
            loop16 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array43;
         params1_data[1] = array44;
         params1_data[2] = array47;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array48 = try func36(&params1, try get_path());
         defer allocator.free(params1.data);
         array48.refC -= 1;
         if (array48.refC == 0) {
             allocator.free(array48.data);
             allocator.destroy(array48);
         }
         array47.refC -= 1;
         if (array47.refC == 0) {
             allocator.free(array47.data);
             allocator.destroy(array47);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 2);
         params1_data[0] = array43;
         params1_data[1] = array44;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 2,
         };
         const array58 = try func32(&params1, try get_path());
         defer allocator.free(params1.data);
         array58.refC -= 1;
         if (array58.refC == 0) {
             allocator.free(array58.data);
             allocator.destroy(array58);
         }
      }
      for (0..array44.size) |i| {
          if (array44.data[i] == 72) {
              return array44;
          }
      }
      array44.refC -= 1;
      if (array44.refC == 0) {
          allocator.free(array44.data);
          allocator.destroy(array44);
      }
      array43.refC -= 1;
      if (array43.refC == 0) {
          allocator.free(array43.data);
          allocator.destroy(array43);
      }
      loop3 += 1;
   }
   var array64: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array64 = vars.data[pCounter];
       array64.refC += 1;
   } else {
       array64 = try allocator.create(Array);
       array64.*.size = 725;
       array64.*.refC = 1;
       array64.*.id = 64;
       array64.*.data = try allocator.alloc(u32, array64.*.size);
   }
   return array64;
}

