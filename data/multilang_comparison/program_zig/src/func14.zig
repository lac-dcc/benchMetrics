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
   var array147: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array147 = vars.data[pCounter];
       array147.refC += 1;
   } else {
       array147 = try allocator.create(Array);
       array147.*.size = 504;
       array147.*.refC = 1;
       array147.*.id = 147;
       array147.*.data = try allocator.alloc(u32, array147.*.size);
   }
   var loop43: usize = 0;
   const loopLimit43: usize = (50)/3 + 1;
   while (loop43 < loopLimit43) {
      if ((path0 & 1) != 0) {
         var array148: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array148 = vars.data[pCounter];
             array148.refC += 1;
         } else {
             array148 = try allocator.create(Array);
             array148.*.size = 629;
             array148.*.refC = 1;
             array148.*.id = 148;
             array148.*.data = try allocator.alloc(u32, array148.*.size);
         }
         var loop44: usize = 0;
         const loopLimit44: usize = (50)/4 + 1;
         while (loop44 < loopLimit44) {
            for (0..array148.size) |i| {
                array148.data[i] -= 1;
            }
            for (0..array147.size) |i| {
                if (array147.data[i] == 85) {
                    return array147;
                }
            }
            loop44 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 2);
         params0_data[0] = array147;
         params0_data[1] = array148;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 2,
         };
         const array149 = try func28(&params0, try get_path());
         defer allocator.free(params0.data);
         array149.refC -= 1;
         if (array149.refC == 0) {
             allocator.free(array149.data);
             allocator.destroy(array149);
         }
         array148.refC -= 1;
         if (array148.refC == 0) {
             allocator.free(array148.data);
             allocator.destroy(array148);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array147;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array150 = try func22(&params0, try get_path());
         defer allocator.free(params0.data);
         array150.refC -= 1;
         if (array150.refC == 0) {
             allocator.free(array150.data);
             allocator.destroy(array150);
         }
      }
      var array151: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array151 = vars.data[pCounter];
          array151.refC += 1;
      } else {
          array151 = try allocator.create(Array);
          array151.*.size = 900;
          array151.*.refC = 1;
          array151.*.id = 151;
          array151.*.data = try allocator.alloc(u32, array151.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 2);
      params0_data[0] = array147;
      params0_data[1] = array151;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 2,
      };
      const array152 = try func23(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array153: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array153 = vars.data[pCounter];
             array153.refC += 1;
         } else {
             array153 = try allocator.create(Array);
             array153.*.size = 949;
             array153.*.refC = 1;
             array153.*.id = 153;
             array153.*.data = try allocator.alloc(u32, array153.*.size);
         }
         var loop45: usize = 0;
         const loopLimit45: usize = (50)/4 + 1;
         while (loop45 < loopLimit45) {
            for (0..array151.size) |i| {
                array151.data[i] -= 1;
            }
            for (0..array153.size) |i| {
                if (array153.data[i] == 88) {
                    return array153;
                }
            }
            loop45 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 4);
         params1_data[0] = array147;
         params1_data[1] = array151;
         params1_data[2] = array152;
         params1_data[3] = array153;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 4,
         };
         const array154 = try func36(&params1, try get_path());
         defer allocator.free(params1.data);
         array154.refC -= 1;
         if (array154.refC == 0) {
             allocator.free(array154.data);
             allocator.destroy(array154);
         }
         array153.refC -= 1;
         if (array153.refC == 0) {
             allocator.free(array153.data);
             allocator.destroy(array153);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array147;
         params1_data[1] = array151;
         params1_data[2] = array152;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array155 = try func32(&params1, try get_path());
         defer allocator.free(params1.data);
         array155.refC -= 1;
         if (array155.refC == 0) {
             allocator.free(array155.data);
             allocator.destroy(array155);
         }
      }
      for (0..array147.size) |i| {
          if (array147.data[i] == 90) {
              return array147;
          }
      }
      array152.refC -= 1;
      if (array152.refC == 0) {
          allocator.free(array152.data);
          allocator.destroy(array152);
      }
      array151.refC -= 1;
      if (array151.refC == 0) {
          allocator.free(array151.data);
          allocator.destroy(array151);
      }
      loop43 += 1;
   }
   for (0..array147.size) |i| {
       array147.data[i] -= 1;
   }
   for (0..array147.size) |i| {
       if (array147.data[i] == 41) {
           return array147;
       }
   }
   return array147;
}

