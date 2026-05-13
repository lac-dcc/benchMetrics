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
const func7 = @import("func7.zig").func7;
const func8 = @import("func8.zig").func8;
const func9 = @import("func9.zig").func9;
const func15 = @import("func15.zig").func15;
const func1 = @import("func1.zig").func1;
const func3 = @import("func3.zig").func3;

pub fn func2(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array279: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array279 = vars.data[pCounter];
       array279.refC += 1;
   } else {
       array279 = try allocator.create(Array);
       array279.*.size = 982;
       array279.*.refC = 1;
       array279.*.id = 279;
       array279.*.data = try allocator.alloc(u32, array279.*.size);
   }
   var loop80: usize = 0;
   const loopLimit80: usize = (50)/2 + 1;
   while (loop80 < loopLimit80) {
      if ((path0 & 1) != 0) {
         var array280: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array280 = vars.data[pCounter];
             array280.refC += 1;
         } else {
             array280 = try allocator.create(Array);
             array280.*.size = 181;
             array280.*.refC = 1;
             array280.*.id = 280;
             array280.*.data = try allocator.alloc(u32, array280.*.size);
         }
         var loop81: usize = 0;
         const loopLimit81: usize = (50)/3 + 1;
         while (loop81 < loopLimit81) {
            for (0..array280.size) |i| {
                array280.data[i] -= 1;
            }
            for (0..array280.size) |i| {
                if (array280.data[i] == 96) {
                    return array280;
                }
            }
            loop81 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array279;
         params0_data[1] = array280;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array281 = try func18(&params0, try get_path());
         defer allocator.free(params0.data);
         array281.refC -= 1;
         if (array281.refC == 0) {
             allocator.free(array281.data);
             allocator.destroy(array281);
         }
         array280.refC -= 1;
         if (array280.refC == 0) {
             allocator.free(array280.data);
             allocator.destroy(array280);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array279;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array282 = try func14(&params0, try get_path());
         defer allocator.free(params0.data);
         array282.refC -= 1;
         if (array282.refC == 0) {
             allocator.free(array282.data);
             allocator.destroy(array282);
         }
      }
      var array283: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array283 = vars.data[pCounter];
          array283.refC += 1;
      } else {
          array283 = try allocator.create(Array);
          array283.*.size = 551;
          array283.*.refC = 1;
          array283.*.id = 283;
          array283.*.data = try allocator.alloc(u32, array283.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array279;
      params0_data[1] = array283;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array284 = try func15(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array285: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array285 = vars.data[pCounter];
             array285.refC += 1;
         } else {
             array285 = try allocator.create(Array);
             array285.*.size = 134;
             array285.*.refC = 1;
             array285.*.id = 285;
             array285.*.data = try allocator.alloc(u32, array285.*.size);
         }
         var loop82: usize = 0;
         const loopLimit82: usize = (50)/3 + 1;
         while (loop82 < loopLimit82) {
            for (0..array283.size) |i| {
                array283.data[i] -= 1;
            }
            for (0..array284.size) |i| {
                if (array284.data[i] == 15) {
                    return array284;
                }
            }
            loop82 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 4);
         params1_data[0] = array279;
         params1_data[1] = array283;
         params1_data[2] = array284;
         params1_data[3] = array285;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 4,
         };
         const array286 = try func24(&params1, try get_path());
         defer allocator.free(params1.data);
         array286.refC -= 1;
         if (array286.refC == 0) {
             allocator.free(array286.data);
             allocator.destroy(array286);
         }
         array285.refC -= 1;
         if (array285.refC == 0) {
             allocator.free(array285.data);
             allocator.destroy(array285);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array279;
         params1_data[1] = array283;
         params1_data[2] = array284;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array287 = try func16(&params1, try get_path());
         defer allocator.free(params1.data);
         array287.refC -= 1;
         if (array287.refC == 0) {
             allocator.free(array287.data);
             allocator.destroy(array287);
         }
      }
      for (0..array279.size) |i| {
          if (array279.data[i] == 97) {
              return array279;
          }
      }
      array284.refC -= 1;
      if (array284.refC == 0) {
          allocator.free(array284.data);
          allocator.destroy(array284);
      }
      array283.refC -= 1;
      if (array283.refC == 0) {
          allocator.free(array283.data);
          allocator.destroy(array283);
      }
      loop80 += 1;
   }
   for (0..array279.size) |i| {
       array279.data[i] -= 1;
   }
   for (0..array279.size) |i| {
       if (array279.data[i] == 54) {
           return array279;
       }
   }
   return array279;
}

