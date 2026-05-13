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

pub fn func22(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array113: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array113 = vars.data[pCounter];
       array113.refC += 1;
   } else {
       array113 = try allocator.create(Array);
       array113.*.size = 850;
       array113.*.refC = 1;
       array113.*.id = 113;
       array113.*.data = try allocator.alloc(u32, array113.*.size);
   }
   var loop35: usize = 0;
   const loopLimit35: usize = (50)/4 + 1;
   while (loop35 < loopLimit35) {
      if ((path0 & 1) != 0) {
         var array114: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array114 = vars.data[pCounter];
             array114.refC += 1;
         } else {
             array114 = try allocator.create(Array);
             array114.*.size = 255;
             array114.*.refC = 1;
             array114.*.id = 114;
             array114.*.data = try allocator.alloc(u32, array114.*.size);
         }
         var loop36: usize = 0;
         const loopLimit36: usize = (50)/5 + 1;
         while (loop36 < loopLimit36) {
            for (0..array113.size) |i| {
                array113.data[i] -= 1;
            }
            for (0..array113.size) |i| {
                if (array113.data[i] == 79) {
                    return array113;
                }
            }
            loop36 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array113;
         params0_data[1] = array114;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array115 = try func42(&params0, try get_path());
         defer allocator.free(params0.data);
         array115.refC -= 1;
         if (array115.refC == 0) {
             allocator.free(array115.data);
             allocator.destroy(array115);
         }
         array114.refC -= 1;
         if (array114.refC == 0) {
             allocator.free(array114.data);
             allocator.destroy(array114);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array113;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array116 = try func34(&params0, try get_path());
         defer allocator.free(params0.data);
         array116.refC -= 1;
         if (array116.refC == 0) {
             allocator.free(array116.data);
             allocator.destroy(array116);
         }
      }
      var array117: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array117 = vars.data[pCounter];
          array117.refC += 1;
      } else {
          array117 = try allocator.create(Array);
          array117.*.size = 567;
          array117.*.refC = 1;
          array117.*.id = 117;
          array117.*.data = try allocator.alloc(u32, array117.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array113;
      params0_data[1] = array117;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array118 = try func35(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array119: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array119 = vars.data[pCounter];
             array119.refC += 1;
         } else {
             array119 = try allocator.create(Array);
             array119.*.size = 961;
             array119.*.refC = 1;
             array119.*.id = 119;
             array119.*.data = try allocator.alloc(u32, array119.*.size);
         }
         var loop37: usize = 0;
         const loopLimit37: usize = (50)/5 + 1;
         while (loop37 < loopLimit37) {
            for (0..array118.size) |i| {
                array118.data[i] -= 1;
            }
            for (0..array118.size) |i| {
                if (array118.data[i] == 59) {
                    return array118;
                }
            }
            loop37 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 4);
         params1_data[0] = array113;
         params1_data[1] = array117;
         params1_data[2] = array118;
         params1_data[3] = array119;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 4,
         };
         const array120 = try func46(&params1, try get_path());
         defer allocator.free(params1.data);
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
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array113;
         params1_data[1] = array117;
         params1_data[2] = array118;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array121 = try func40(&params1, try get_path());
         defer allocator.free(params1.data);
         array121.refC -= 1;
         if (array121.refC == 0) {
             allocator.free(array121.data);
             allocator.destroy(array121);
         }
      }
      for (0..array118.size) |i| {
          if (array118.data[i] == 21) {
              return array118;
          }
      }
      array118.refC -= 1;
      if (array118.refC == 0) {
          allocator.free(array118.data);
          allocator.destroy(array118);
      }
      array117.refC -= 1;
      if (array117.refC == 0) {
          allocator.free(array117.data);
          allocator.destroy(array117);
      }
      loop35 += 1;
   }
   for (0..array113.size) |i| {
       array113.data[i] -= 1;
   }
   for (0..array113.size) |i| {
       if (array113.data[i] == 28) {
           return array113;
       }
   }
   return array113;
}

