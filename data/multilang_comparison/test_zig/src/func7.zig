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
const func14 = @import("func14.zig").func14;
const func6 = @import("func6.zig").func6;
const func8 = @import("func8.zig").func8;
const func9 = @import("func9.zig").func9;
const func15 = @import("func15.zig").func15;
const func2 = @import("func2.zig").func2;
const func1 = @import("func1.zig").func1;
const func3 = @import("func3.zig").func3;

pub fn func7(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var loop74: usize = 0;
   const loopLimit74: usize = (50)/2 + 1;
   while (loop74 < loopLimit74) {
      if ((path0 & 1) != 0) {
         var array256: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array256 = vars.data[pCounter];
             array256.refC += 1;
         } else {
             array256 = try allocator.create(Array);
             array256.*.size = 457;
             array256.*.refC = 1;
             array256.*.id = 256;
             array256.*.data = try allocator.alloc(u32, array256.*.size);
         }
         var loop75: usize = 0;
         const loopLimit75: usize = (50)/3 + 1;
         while (loop75 < loopLimit75) {
            for (0..array256.size) |i| {
                array256.data[i] -= 1;
            }
            for (0..array256.size) |i| {
                if (array256.data[i] == 71) {
                    return array256;
                }
            }
            loop75 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array256;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array257 = try func24(&params0, try get_path());
         defer allocator.free(params0.data);
         array257.refC -= 1;
         if (array257.refC == 0) {
             allocator.free(array257.data);
             allocator.destroy(array257);
         }
         array256.refC -= 1;
         if (array256.refC == 0) {
             allocator.free(array256.data);
             allocator.destroy(array256);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 0);
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 0,
         };
         const array258 = try func16(&params0, try get_path());
         defer allocator.free(params0.data);
         array258.refC -= 1;
         if (array258.refC == 0) {
             allocator.free(array258.data);
             allocator.destroy(array258);
         }
      }
      var array259: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array259 = vars.data[pCounter];
          array259.refC += 1;
      } else {
          array259 = try allocator.create(Array);
          array259.*.size = 703;
          array259.*.refC = 1;
          array259.*.id = 259;
          array259.*.data = try allocator.alloc(u32, array259.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array259;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array260 = try func17(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array261: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array261 = vars.data[pCounter];
             array261.refC += 1;
         } else {
             array261 = try allocator.create(Array);
             array261.*.size = 907;
             array261.*.refC = 1;
             array261.*.id = 261;
             array261.*.data = try allocator.alloc(u32, array261.*.size);
         }
         var loop76: usize = 0;
         const loopLimit76: usize = (50)/3 + 1;
         while (loop76 < loopLimit76) {
            for (0..array259.size) |i| {
                array259.data[i] -= 1;
            }
            for (0..array259.size) |i| {
                if (array259.data[i] == 6) {
                    return array259;
                }
            }
            loop76 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array259;
         params1_data[1] = array260;
         params1_data[2] = array261;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array262 = try func28(&params1, try get_path());
         defer allocator.free(params1.data);
         array262.refC -= 1;
         if (array262.refC == 0) {
             allocator.free(array262.data);
             allocator.destroy(array262);
         }
         array261.refC -= 1;
         if (array261.refC == 0) {
             allocator.free(array261.data);
             allocator.destroy(array261);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 2);
         params1_data[0] = array259;
         params1_data[1] = array260;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 2,
         };
         const array263 = try func22(&params1, try get_path());
         defer allocator.free(params1.data);
         array263.refC -= 1;
         if (array263.refC == 0) {
             allocator.free(array263.data);
             allocator.destroy(array263);
         }
      }
      for (0..array259.size) |i| {
          if (array259.data[i] == 98) {
              return array259;
          }
      }
      array260.refC -= 1;
      if (array260.refC == 0) {
          allocator.free(array260.data);
          allocator.destroy(array260);
      }
      array259.refC -= 1;
      if (array259.refC == 0) {
          allocator.free(array259.data);
          allocator.destroy(array259);
      }
      loop74 += 1;
   }
   var array264: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array264 = vars.data[pCounter];
       array264.refC += 1;
   } else {
       array264 = try allocator.create(Array);
       array264.*.size = 991;
       array264.*.refC = 1;
       array264.*.id = 264;
       array264.*.data = try allocator.alloc(u32, array264.*.size);
   }
   return array264;
}

