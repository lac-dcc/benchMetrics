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
   var loop49: usize = 0;
   const loopLimit49: usize = (50)/3 + 1;
   while (loop49 < loopLimit49) {
      if ((path0 & 1) != 0) {
         var array164: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array164 = vars.data[pCounter];
             array164.refC += 1;
         } else {
             array164 = try allocator.create(Array);
             array164.*.size = 578;
             array164.*.refC = 1;
             array164.*.id = 164;
             array164.*.data = try allocator.alloc(u32, array164.*.size);
         }
         var loop50: usize = 0;
         const loopLimit50: usize = (50)/4 + 1;
         while (loop50 < loopLimit50) {
            for (0..array164.size) |i| {
                array164.data[i] -= 1;
            }
            for (0..array164.size) |i| {
                if (array164.data[i] == 90) {
                    return array164;
                }
            }
            loop50 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array164;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array165 = try func42(&params0, try get_path());
         defer allocator.free(params0.data);
         array165.refC -= 1;
         if (array165.refC == 0) {
             allocator.free(array165.data);
             allocator.destroy(array165);
         }
         array164.refC -= 1;
         if (array164.refC == 0) {
             allocator.free(array164.data);
             allocator.destroy(array164);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 0);
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 0,
         };
         const array166 = try func34(&params0, try get_path());
         defer allocator.free(params0.data);
         array166.refC -= 1;
         if (array166.refC == 0) {
             allocator.free(array166.data);
             allocator.destroy(array166);
         }
      }
      var array167: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array167 = vars.data[pCounter];
          array167.refC += 1;
      } else {
          array167 = try allocator.create(Array);
          array167.*.size = 631;
          array167.*.refC = 1;
          array167.*.id = 167;
          array167.*.data = try allocator.alloc(u32, array167.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array167;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array168 = try func35(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array169: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array169 = vars.data[pCounter];
             array169.refC += 1;
         } else {
             array169 = try allocator.create(Array);
             array169.*.size = 627;
             array169.*.refC = 1;
             array169.*.id = 169;
             array169.*.data = try allocator.alloc(u32, array169.*.size);
         }
         var loop51: usize = 0;
         const loopLimit51: usize = (50)/4 + 1;
         while (loop51 < loopLimit51) {
            for (0..array169.size) |i| {
                array169.data[i] -= 1;
            }
            for (0..array168.size) |i| {
                if (array168.data[i] == 14) {
                    return array168;
                }
            }
            loop51 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array167;
         params1_data[1] = array168;
         params1_data[2] = array169;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array170 = try func46(&params1, try get_path());
         defer allocator.free(params1.data);
         array170.refC -= 1;
         if (array170.refC == 0) {
             allocator.free(array170.data);
             allocator.destroy(array170);
         }
         array169.refC -= 1;
         if (array169.refC == 0) {
             allocator.free(array169.data);
             allocator.destroy(array169);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 2);
         params1_data[0] = array167;
         params1_data[1] = array168;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 2,
         };
         const array171 = try func40(&params1, try get_path());
         defer allocator.free(params1.data);
         array171.refC -= 1;
         if (array171.refC == 0) {
             allocator.free(array171.data);
             allocator.destroy(array171);
         }
      }
      for (0..array168.size) |i| {
          if (array168.data[i] == 10) {
              return array168;
          }
      }
      array168.refC -= 1;
      if (array168.refC == 0) {
          allocator.free(array168.data);
          allocator.destroy(array168);
      }
      array167.refC -= 1;
      if (array167.refC == 0) {
          allocator.free(array167.data);
          allocator.destroy(array167);
      }
      loop49 += 1;
   }
   var array172: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array172 = vars.data[pCounter];
       array172.refC += 1;
   } else {
       array172 = try allocator.create(Array);
       array172.*.size = 969;
       array172.*.refC = 1;
       array172.*.id = 172;
       array172.*.data = try allocator.alloc(u32, array172.*.size);
   }
   return array172;
}

