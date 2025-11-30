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

pub fn func32(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array59: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array59 = vars.data[pCounter];
       array59.refC += 1;
   } else {
       array59 = try allocator.create(Array);
       array59.*.size = 538;
       array59.*.refC = 1;
       array59.*.id = 59;
       array59.*.data = try allocator.alloc(u32, array59.*.size);
   }
   var loop19: usize = 0;
   const loopLimit19: usize = (50)/4 + 1;
   while (loop19 < loopLimit19) {
      if ((path0 & 1) != 0) {
         var array60: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array60 = vars.data[pCounter];
             array60.refC += 1;
         } else {
             array60 = try allocator.create(Array);
             array60.*.size = 606;
             array60.*.refC = 1;
             array60.*.id = 60;
             array60.*.data = try allocator.alloc(u32, array60.*.size);
         }
         var loop20: usize = 0;
         const loopLimit20: usize = (50)/5 + 1;
         while (loop20 < loopLimit20) {
            for (0..array59.size) |i| {
                array59.data[i] -= 1;
            }
            for (0..array59.size) |i| {
                if (array59.data[i] == 18) {
                    return array59;
                }
            }
            loop20 += 1;
         }
         array60.refC -= 1;
         if (array60.refC == 0) {
             allocator.free(array60.data);
             allocator.destroy(array60);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array59;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array61 = try func40(&params0);
         defer allocator.free(params0.data);
         array61.refC -= 1;
         if (array61.refC == 0) {
             allocator.free(array61.data);
             allocator.destroy(array61);
         }
      }
      var array62: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array62 = vars.data[pCounter];
          array62.refC += 1;
      } else {
          array62 = try allocator.create(Array);
          array62.*.size = 369;
          array62.*.refC = 1;
          array62.*.id = 62;
          array62.*.data = try allocator.alloc(u32, array62.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array59;
      params0_data[1] = array62;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array63 = try func41(&params0);
      defer allocator.free(params0.data);
      for (0..array59.size) |i| {
          if (array59.data[i] == 24) {
              return array59;
          }
      }
      array63.refC -= 1;
      if (array63.refC == 0) {
          allocator.free(array63.data);
          allocator.destroy(array63);
      }
      array62.refC -= 1;
      if (array62.refC == 0) {
          allocator.free(array62.data);
          allocator.destroy(array62);
      }
      loop19 += 1;
   }
   for (0..array59.size) |i| {
       array59.data[i] -= 1;
   }
   for (0..array59.size) |i| {
       if (array59.data[i] == 83) {
           return array59;
       }
   }
   return array59;
}

