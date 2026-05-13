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
   var array183: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array183 = vars.data[pCounter];
       array183.refC += 1;
   } else {
       array183 = try allocator.create(Array);
       array183.*.size = 483;
       array183.*.refC = 1;
       array183.*.id = 183;
       array183.*.data = try allocator.alloc(u32, array183.*.size);
   }
   var loop53: usize = 0;
   const loopLimit53: usize = (50)/2 + 1;
   while (loop53 < loopLimit53) {
      if ((path0 & 1) != 0) {
         var array184: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array184 = vars.data[pCounter];
             array184.refC += 1;
         } else {
             array184 = try allocator.create(Array);
             array184.*.size = 607;
             array184.*.refC = 1;
             array184.*.id = 184;
             array184.*.data = try allocator.alloc(u32, array184.*.size);
         }
         var loop54: usize = 0;
         const loopLimit54: usize = (50)/3 + 1;
         while (loop54 < loopLimit54) {
            for (0..array183.size) |i| {
                array183.data[i] -= 1;
            }
            for (0..array184.size) |i| {
                if (array184.data[i] == 14) {
                    return array184;
                }
            }
            loop54 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array183;
         params0_data[1] = array184;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array185 = try func18(&params0, try get_path());
         defer allocator.free(params0.data);
         array185.refC -= 1;
         if (array185.refC == 0) {
             allocator.free(array185.data);
             allocator.destroy(array185);
         }
         array184.refC -= 1;
         if (array184.refC == 0) {
             allocator.free(array184.data);
             allocator.destroy(array184);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array183;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array186 = try func14(&params0, try get_path());
         defer allocator.free(params0.data);
         array186.refC -= 1;
         if (array186.refC == 0) {
             allocator.free(array186.data);
             allocator.destroy(array186);
         }
      }
      var array187: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array187 = vars.data[pCounter];
          array187.refC += 1;
      } else {
          array187 = try allocator.create(Array);
          array187.*.size = 618;
          array187.*.refC = 1;
          array187.*.id = 187;
          array187.*.data = try allocator.alloc(u32, array187.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array183;
      params0_data[1] = array187;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array188 = try func15(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array189: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array189 = vars.data[pCounter];
             array189.refC += 1;
         } else {
             array189 = try allocator.create(Array);
             array189.*.size = 388;
             array189.*.refC = 1;
             array189.*.id = 189;
             array189.*.data = try allocator.alloc(u32, array189.*.size);
         }
         var loop55: usize = 0;
         const loopLimit55: usize = (50)/3 + 1;
         while (loop55 < loopLimit55) {
            for (0..array188.size) |i| {
                array188.data[i] -= 1;
            }
            for (0..array187.size) |i| {
                if (array187.data[i] == 57) {
                    return array187;
                }
            }
            loop55 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 4);
         params1_data[0] = array183;
         params1_data[1] = array187;
         params1_data[2] = array188;
         params1_data[3] = array189;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 4,
         };
         const array190 = try func24(&params1, try get_path());
         defer allocator.free(params1.data);
         array190.refC -= 1;
         if (array190.refC == 0) {
             allocator.free(array190.data);
             allocator.destroy(array190);
         }
         array189.refC -= 1;
         if (array189.refC == 0) {
             allocator.free(array189.data);
             allocator.destroy(array189);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array183;
         params1_data[1] = array187;
         params1_data[2] = array188;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array191 = try func16(&params1, try get_path());
         defer allocator.free(params1.data);
         array191.refC -= 1;
         if (array191.refC == 0) {
             allocator.free(array191.data);
             allocator.destroy(array191);
         }
      }
      for (0..array187.size) |i| {
          if (array187.data[i] == 17) {
              return array187;
          }
      }
      array188.refC -= 1;
      if (array188.refC == 0) {
          allocator.free(array188.data);
          allocator.destroy(array188);
      }
      array187.refC -= 1;
      if (array187.refC == 0) {
          allocator.free(array187.data);
          allocator.destroy(array187);
      }
      loop53 += 1;
   }
   for (0..array183.size) |i| {
       array183.data[i] -= 1;
   }
   for (0..array183.size) |i| {
       if (array183.data[i] == 63) {
           return array183;
       }
   }
   return array183;
}

