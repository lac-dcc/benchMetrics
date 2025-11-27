const lib = @import("lib.zig");
const std = lib.std;
const allocator = lib.allocator;
const Array = lib.Array;
const ArrayParam = lib.ArrayParam;
const get_path = lib.get_path;

const func0 = @import("func0.zig").func0;
const func10 = @import("func10.zig").func10;
const func28 = @import("func28.zig").func28;
const func29 = @import("func29.zig").func29;
const func46 = @import("func46.zig").func46;
const func47 = @import("func47.zig").func47;
const func58 = @import("func58.zig").func58;
const func59 = @import("func59.zig").func59;
const func48 = @import("func48.zig").func48;
const func60 = @import("func60.zig").func60;
const func61 = @import("func61.zig").func61;
const func62 = @import("func62.zig").func62;
const func63 = @import("func63.zig").func63;
const func52 = @import("func52.zig").func52;
const func49 = @import("func49.zig").func49;
const func53 = @import("func53.zig").func53;
const func40 = @import("func40.zig").func40;
const func41 = @import("func41.zig").func41;
const func54 = @import("func54.zig").func54;
const func55 = @import("func55.zig").func55;
const func56 = @import("func56.zig").func56;
const func57 = @import("func57.zig").func57;
const func50 = @import("func50.zig").func50;
const func30 = @import("func30.zig").func30;
const func42 = @import("func42.zig").func42;
const func43 = @import("func43.zig").func43;
const func44 = @import("func44.zig").func44;
const func45 = @import("func45.zig").func45;
const func51 = @import("func51.zig").func51;
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
         const array112 = try func22(&params0, try get_path());
         defer allocator.free(params0.data);
         array112.refC -= 1;
         if (array112.refC == 0) {
             allocator.free(array112.data);
             allocator.destroy(array112);
         }
      }
      var array122: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array122 = vars.data[pCounter];
          array122.refC += 1;
      } else {
          array122 = try allocator.create(Array);
          array122.*.size = 872;
          array122.*.refC = 1;
          array122.*.id = 122;
          array122.*.data = try allocator.alloc(u32, array122.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array122;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array123 = try func23(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array126: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array126 = vars.data[pCounter];
             array126.refC += 1;
         } else {
             array126 = try allocator.create(Array);
             array126.*.size = 890;
             array126.*.refC = 1;
             array126.*.id = 126;
             array126.*.data = try allocator.alloc(u32, array126.*.size);
         }
         var loop39: usize = 0;
         const loopLimit39: usize = (50)/4 + 1;
         while (loop39 < loopLimit39) {
            for (0..array122.size) |i| {
                array122.data[i] -= 1;
            }
            for (0..array123.size) |i| {
                if (array123.data[i] == 46) {
                    return array123;
                }
            }
            loop39 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array122;
         params1_data[1] = array123;
         params1_data[2] = array126;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array127 = try func36(&params1, try get_path());
         defer allocator.free(params1.data);
         array127.refC -= 1;
         if (array127.refC == 0) {
             allocator.free(array127.data);
             allocator.destroy(array127);
         }
         array126.refC -= 1;
         if (array126.refC == 0) {
             allocator.free(array126.data);
             allocator.destroy(array126);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 2);
         params1_data[0] = array122;
         params1_data[1] = array123;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 2,
         };
         const array149 = try func32(&params1, try get_path());
         defer allocator.free(params1.data);
         array149.refC -= 1;
         if (array149.refC == 0) {
             allocator.free(array149.data);
             allocator.destroy(array149);
         }
      }
      for (0..array122.size) |i| {
          if (array122.data[i] == 67) {
              return array122;
          }
      }
      array123.refC -= 1;
      if (array123.refC == 0) {
          allocator.free(array123.data);
          allocator.destroy(array123);
      }
      array122.refC -= 1;
      if (array122.refC == 0) {
          allocator.free(array122.data);
          allocator.destroy(array122);
      }
      loop3 += 1;
   }
   var array159: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array159 = vars.data[pCounter];
       array159.refC += 1;
   } else {
       array159 = try allocator.create(Array);
       array159.*.size = 677;
       array159.*.refC = 1;
       array159.*.id = 159;
       array159.*.data = try allocator.alloc(u32, array159.*.size);
   }
   return array159;
}

