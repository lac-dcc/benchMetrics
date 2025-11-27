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

pub fn func40(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array38: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array38 = vars.data[pCounter];
       array38.refC += 1;
   } else {
       array38 = try allocator.create(Array);
       array38.*.size = 732;
       array38.*.refC = 1;
       array38.*.id = 38;
       array38.*.data = try allocator.alloc(u32, array38.*.size);
   }
   var loop14: usize = 0;
   const loopLimit14: usize = (50)/5 + 1;
   while (loop14 < loopLimit14) {
      if ((path0 & 1) != 0) {
         var array39: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array39 = vars.data[pCounter];
             array39.refC += 1;
         } else {
             array39 = try allocator.create(Array);
             array39.*.size = 829;
             array39.*.refC = 1;
             array39.*.id = 39;
             array39.*.data = try allocator.alloc(u32, array39.*.size);
         }
         var loop15: usize = 0;
         const loopLimit15: usize = (50)/6 + 1;
         while (loop15 < loopLimit15) {
            for (0..array39.size) |i| {
                array39.data[i] -= 1;
            }
            for (0..array39.size) |i| {
                if (array39.data[i] == 70) {
                    return array39;
                }
            }
            loop15 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array38;
         params0_data[1] = array39;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array40 = try func60(&params0, try get_path());
         defer allocator.free(params0.data);
         array40.refC -= 1;
         if (array40.refC == 0) {
             allocator.free(array40.data);
             allocator.destroy(array40);
         }
         array39.refC -= 1;
         if (array39.refC == 0) {
             allocator.free(array39.data);
             allocator.destroy(array39);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array38;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array41 = try func52(&params0);
         defer allocator.free(params0.data);
         array41.refC -= 1;
         if (array41.refC == 0) {
             allocator.free(array41.data);
             allocator.destroy(array41);
         }
      }
      var array42: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array42 = vars.data[pCounter];
          array42.refC += 1;
      } else {
          array42 = try allocator.create(Array);
          array42.*.size = 149;
          array42.*.refC = 1;
          array42.*.id = 42;
          array42.*.data = try allocator.alloc(u32, array42.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array38;
      params0_data[1] = array42;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array43 = try func53(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array44: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array44 = vars.data[pCounter];
             array44.refC += 1;
         } else {
             array44 = try allocator.create(Array);
             array44.*.size = 618;
             array44.*.refC = 1;
             array44.*.id = 44;
             array44.*.data = try allocator.alloc(u32, array44.*.size);
         }
         var loop16: usize = 0;
         const loopLimit16: usize = (50)/6 + 1;
         while (loop16 < loopLimit16) {
            for (0..array42.size) |i| {
                array42.data[i] -= 1;
            }
            for (0..array43.size) |i| {
                if (array43.data[i] == 51) {
                    return array43;
                }
            }
            loop16 += 1;
         }
         array44.refC -= 1;
         if (array44.refC == 0) {
             allocator.free(array44.data);
             allocator.destroy(array44);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array38;
         params1_data[1] = array42;
         params1_data[2] = array43;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array45 = try func58(&params1);
         defer allocator.free(params1.data);
         array45.refC -= 1;
         if (array45.refC == 0) {
             allocator.free(array45.data);
             allocator.destroy(array45);
         }
      }
      for (0..array43.size) |i| {
          if (array43.data[i] == 88) {
              return array43;
          }
      }
      array43.refC -= 1;
      if (array43.refC == 0) {
          allocator.free(array43.data);
          allocator.destroy(array43);
      }
      array42.refC -= 1;
      if (array42.refC == 0) {
          allocator.free(array42.data);
          allocator.destroy(array42);
      }
      loop14 += 1;
   }
   for (0..array38.size) |i| {
       array38.data[i] -= 1;
   }
   for (0..array38.size) |i| {
       if (array38.data[i] == 41) {
           return array38;
       }
   }
   return array38;
}

