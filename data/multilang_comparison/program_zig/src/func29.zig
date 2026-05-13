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
const func2 = @import("func2.zig").func2;
const func1 = @import("func1.zig").func1;
const func3 = @import("func3.zig").func3;

pub fn func29(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var loop5: usize = 0;
   const loopLimit5: usize = (50)/4 + 1;
   while (loop5 < loopLimit5) {
      if ((path0 & 1) != 0) {
         var array8: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array8 = vars.data[pCounter];
             array8.refC += 1;
         } else {
             array8 = try allocator.create(Array);
             array8.*.size = 802;
             array8.*.refC = 1;
             array8.*.id = 8;
             array8.*.data = try allocator.alloc(u32, array8.*.size);
         }
         var loop6: usize = 0;
         const loopLimit6: usize = (50)/5 + 1;
         while (loop6 < loopLimit6) {
            for (0..array8.size) |i| {
                array8.data[i] -= 1;
            }
            for (0..array8.size) |i| {
                if (array8.data[i] == 69) {
                    return array8;
                }
            }
            loop6 += 1;
         }
         array8.refC -= 1;
         if (array8.refC == 0) {
             allocator.free(array8.data);
             allocator.destroy(array8);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 0);
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 0,
         };
         const array9 = try func40(&params0);
         defer allocator.free(params0.data);
         array9.refC -= 1;
         if (array9.refC == 0) {
             allocator.free(array9.data);
             allocator.destroy(array9);
         }
      }
      var array11: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array11 = vars.data[pCounter];
          array11.refC += 1;
      } else {
          array11 = try allocator.create(Array);
          array11.*.size = 784;
          array11.*.refC = 1;
          array11.*.id = 11;
          array11.*.data = try allocator.alloc(u32, array11.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array11;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array12 = try func41(&params0);
      defer allocator.free(params0.data);
      for (0..array11.size) |i| {
          if (array11.data[i] == 73) {
              return array11;
          }
      }
      array12.refC -= 1;
      if (array12.refC == 0) {
          allocator.free(array12.data);
          allocator.destroy(array12);
      }
      array11.refC -= 1;
      if (array11.refC == 0) {
          allocator.free(array11.data);
          allocator.destroy(array11);
      }
      loop5 += 1;
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
   return array14;
}

