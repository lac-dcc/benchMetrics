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
const func6 = @import("func6.zig").func6;
const func7 = @import("func7.zig").func7;
const func8 = @import("func8.zig").func8;
const func9 = @import("func9.zig").func9;
const func15 = @import("func15.zig").func15;
const func2 = @import("func2.zig").func2;
const func1 = @import("func1.zig").func1;
const func3 = @import("func3.zig").func3;

pub fn func14(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array243: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array243 = vars.data[pCounter];
       array243.refC += 1;
   } else {
       array243 = try allocator.create(Array);
       array243.*.size = 984;
       array243.*.refC = 1;
       array243.*.id = 243;
       array243.*.data = try allocator.alloc(u32, array243.*.size);
   }
   var loop70: usize = 0;
   const loopLimit70: usize = (50)/3 + 1;
   while (loop70 < loopLimit70) {
      if ((path0 & 1) != 0) {
         var array244: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array244 = vars.data[pCounter];
             array244.refC += 1;
         } else {
             array244 = try allocator.create(Array);
             array244.*.size = 172;
             array244.*.refC = 1;
             array244.*.id = 244;
             array244.*.data = try allocator.alloc(u32, array244.*.size);
         }
         var loop71: usize = 0;
         const loopLimit71: usize = (50)/4 + 1;
         while (loop71 < loopLimit71) {
            for (0..array244.size) |i| {
                array244.data[i] -= 1;
            }
            for (0..array243.size) |i| {
                if (array243.data[i] == 40) {
                    return array243;
                }
            }
            loop71 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array243;
         params0_data[1] = array244;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array245 = try func28(&params0, try get_path());
         defer allocator.free(params0.data);
         array245.refC -= 1;
         if (array245.refC == 0) {
             allocator.free(array245.data);
             allocator.destroy(array245);
         }
         array244.refC -= 1;
         if (array244.refC == 0) {
             allocator.free(array244.data);
             allocator.destroy(array244);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array243;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array246 = try func22(&params0, try get_path());
         defer allocator.free(params0.data);
         array246.refC -= 1;
         if (array246.refC == 0) {
             allocator.free(array246.data);
             allocator.destroy(array246);
         }
      }
      var array247: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array247 = vars.data[pCounter];
          array247.refC += 1;
      } else {
          array247 = try allocator.create(Array);
          array247.*.size = 63;
          array247.*.refC = 1;
          array247.*.id = 247;
          array247.*.data = try allocator.alloc(u32, array247.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array243;
      params0_data[1] = array247;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array248 = try func23(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array249: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array249 = vars.data[pCounter];
             array249.refC += 1;
         } else {
             array249 = try allocator.create(Array);
             array249.*.size = 30;
             array249.*.refC = 1;
             array249.*.id = 249;
             array249.*.data = try allocator.alloc(u32, array249.*.size);
         }
         var loop72: usize = 0;
         const loopLimit72: usize = (50)/4 + 1;
         while (loop72 < loopLimit72) {
            for (0..array247.size) |i| {
                array247.data[i] -= 1;
            }
            for (0..array248.size) |i| {
                if (array248.data[i] == 59) {
                    return array248;
                }
            }
            loop72 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 4);
         params1_data[0] = array243;
         params1_data[1] = array247;
         params1_data[2] = array248;
         params1_data[3] = array249;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 4,
         };
         const array250 = try func36(&params1, try get_path());
         defer allocator.free(params1.data);
         array250.refC -= 1;
         if (array250.refC == 0) {
             allocator.free(array250.data);
             allocator.destroy(array250);
         }
         array249.refC -= 1;
         if (array249.refC == 0) {
             allocator.free(array249.data);
             allocator.destroy(array249);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array243;
         params1_data[1] = array247;
         params1_data[2] = array248;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array251 = try func32(&params1, try get_path());
         defer allocator.free(params1.data);
         array251.refC -= 1;
         if (array251.refC == 0) {
             allocator.free(array251.data);
             allocator.destroy(array251);
         }
      }
      for (0..array243.size) |i| {
          if (array243.data[i] == 32) {
              return array243;
          }
      }
      array248.refC -= 1;
      if (array248.refC == 0) {
          allocator.free(array248.data);
          allocator.destroy(array248);
      }
      array247.refC -= 1;
      if (array247.refC == 0) {
          allocator.free(array247.data);
          allocator.destroy(array247);
      }
      loop70 += 1;
   }
   for (0..array243.size) |i| {
       array243.data[i] -= 1;
   }
   for (0..array243.size) |i| {
       if (array243.data[i] == 43) {
           return array243;
       }
   }
   return array243;
}

