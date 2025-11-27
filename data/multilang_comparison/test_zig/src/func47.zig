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

pub fn func47(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var loop7: usize = 0;
   const loopLimit7: usize = (50)/5 + 1;
   while (loop7 < loopLimit7) {
      if ((path0 & 1) != 0) {
         var array11: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array11 = vars.data[pCounter];
             array11.refC += 1;
         } else {
             array11 = try allocator.create(Array);
             array11.*.size = 919;
             array11.*.refC = 1;
             array11.*.id = 11;
             array11.*.data = try allocator.alloc(u32, array11.*.size);
         }
         var loop8: usize = 0;
         const loopLimit8: usize = (50)/6 + 1;
         while (loop8 < loopLimit8) {
            for (0..array11.size) |i| {
                array11.data[i] -= 1;
            }
            for (0..array11.size) |i| {
                if (array11.data[i] == 98) {
                    return array11;
                }
            }
            loop8 += 1;
         }
         array11.refC -= 1;
         if (array11.refC == 0) {
             allocator.free(array11.data);
             allocator.destroy(array11);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 0);
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 0,
         };
         const array12 = try func58(&params0);
         defer allocator.free(params0.data);
         array12.refC -= 1;
         if (array12.refC == 0) {
             allocator.free(array12.data);
             allocator.destroy(array12);
         }
      }
      var array14: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array14 = vars.data[pCounter];
          array14.refC += 1;
      } else {
          array14 = try allocator.create(Array);
          array14.*.size = 862;
          array14.*.refC = 1;
          array14.*.id = 14;
          array14.*.data = try allocator.alloc(u32, array14.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array14;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array15 = try func59(&params0);
      defer allocator.free(params0.data);
      for (0..array14.size) |i| {
          if (array14.data[i] == 29) {
              return array14;
          }
      }
      array15.refC -= 1;
      if (array15.refC == 0) {
          allocator.free(array15.data);
          allocator.destroy(array15);
      }
      array14.refC -= 1;
      if (array14.refC == 0) {
          allocator.free(array14.data);
          allocator.destroy(array14);
      }
      loop7 += 1;
   }
   var array17: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array17 = vars.data[pCounter];
       array17.refC += 1;
   } else {
       array17 = try allocator.create(Array);
       array17.*.size = 313;
       array17.*.refC = 1;
       array17.*.id = 17;
       array17.*.data = try allocator.alloc(u32, array17.*.size);
   }
   return array17;
}

