const lib = @import("lib.zig");
const std = lib.std;
const allocator = lib.allocator;
const Array = lib.Array;
const ArrayParam = lib.ArrayParam;
const get_path = lib.get_path;

const func0 = @import("func0.zig").func0;
const func10 = @import("func10.zig").func10;
const func11 = @import("func11.zig").func11;
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

pub fn func43(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var loop24: usize = 0;
   const loopLimit24: usize = (50)/4 + 1;
   while (loop24 < loopLimit24) {
      if ((path0 & 1) != 0) {
         var array72: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array72 = vars.data[pCounter];
             array72.refC += 1;
         } else {
             array72 = try allocator.create(Array);
             array72.*.size = 730;
             array72.*.refC = 1;
             array72.*.id = 72;
             array72.*.data = try allocator.alloc(u32, array72.*.size);
         }
         var loop25: usize = 0;
         const loopLimit25: usize = (50)/5 + 1;
         while (loop25 < loopLimit25) {
            for (0..array72.size) |i| {
                array72.data[i] -= 1;
            }
            for (0..array72.size) |i| {
                if (array72.data[i] == 20) {
                    return array72;
                }
            }
            loop25 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array72;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array73 = try func60(&params0, try get_path());
         defer allocator.free(params0.data);
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
      
      } else {
         const params0_data = try allocator.alloc(*Array, 0);
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 0,
         };
         const array74 = try func52(&params0);
         defer allocator.free(params0.data);
         array74.refC -= 1;
         if (array74.refC == 0) {
             allocator.free(array74.data);
             allocator.destroy(array74);
         }
      }
      var array75: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array75 = vars.data[pCounter];
          array75.refC += 1;
      } else {
          array75 = try allocator.create(Array);
          array75.*.size = 465;
          array75.*.refC = 1;
          array75.*.id = 75;
          array75.*.data = try allocator.alloc(u32, array75.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array75;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array76 = try func53(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array77: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array77 = vars.data[pCounter];
             array77.refC += 1;
         } else {
             array77 = try allocator.create(Array);
             array77.*.size = 282;
             array77.*.refC = 1;
             array77.*.id = 77;
             array77.*.data = try allocator.alloc(u32, array77.*.size);
         }
         var loop26: usize = 0;
         const loopLimit26: usize = (50)/5 + 1;
         while (loop26 < loopLimit26) {
            for (0..array77.size) |i| {
                array77.data[i] -= 1;
            }
            for (0..array77.size) |i| {
                if (array77.data[i] == 37) {
                    return array77;
                }
            }
            loop26 += 1;
         }
         array77.refC -= 1;
         if (array77.refC == 0) {
             allocator.free(array77.data);
             allocator.destroy(array77);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 2);
         params1_data[0] = array75;
         params1_data[1] = array76;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 2,
         };
         const array78 = try func58(&params1);
         defer allocator.free(params1.data);
         array78.refC -= 1;
         if (array78.refC == 0) {
             allocator.free(array78.data);
             allocator.destroy(array78);
         }
      }
      for (0..array75.size) |i| {
          if (array75.data[i] == 36) {
              return array75;
          }
      }
      array76.refC -= 1;
      if (array76.refC == 0) {
          allocator.free(array76.data);
          allocator.destroy(array76);
      }
      array75.refC -= 1;
      if (array75.refC == 0) {
          allocator.free(array75.data);
          allocator.destroy(array75);
      }
      loop24 += 1;
   }
   var array79: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array79 = vars.data[pCounter];
       array79.refC += 1;
   } else {
       array79 = try allocator.create(Array);
       array79.*.size = 452;
       array79.*.refC = 1;
       array79.*.id = 79;
       array79.*.data = try allocator.alloc(u32, array79.*.size);
   }
   return array79;
}

