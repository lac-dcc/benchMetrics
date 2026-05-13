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
   var loop47: usize = 0;
   const loopLimit47: usize = (50)/2 + 1;
   while (loop47 < loopLimit47) {
      if ((path0 & 1) != 0) {
         var array160: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array160 = vars.data[pCounter];
             array160.refC += 1;
         } else {
             array160 = try allocator.create(Array);
             array160.*.size = 690;
             array160.*.refC = 1;
             array160.*.id = 160;
             array160.*.data = try allocator.alloc(u32, array160.*.size);
         }
         var loop48: usize = 0;
         const loopLimit48: usize = (50)/3 + 1;
         while (loop48 < loopLimit48) {
            for (0..array160.size) |i| {
                array160.data[i] -= 1;
            }
            for (0..array160.size) |i| {
                if (array160.data[i] == 57) {
                    return array160;
                }
            }
            loop48 += 1;
         }
         const params0_data = try allocator.alloc(*Array, 1);
         params0_data[0] = array160;
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 1,
         };
         const array161 = try func24(&params0, try get_path());
         defer allocator.free(params0.data);
         array161.refC -= 1;
         if (array161.refC == 0) {
             allocator.free(array161.data);
             allocator.destroy(array161);
         }
         array160.refC -= 1;
         if (array160.refC == 0) {
             allocator.free(array160.data);
             allocator.destroy(array160);
         }
      
      } else {
         const params0_data = try allocator.alloc(*Array, 0);
         var params0 = ArrayParam{
             .data = params0_data,
             .size = 0,
         };
         const array162 = try func16(&params0, try get_path());
         defer allocator.free(params0.data);
         array162.refC -= 1;
         if (array162.refC == 0) {
             allocator.free(array162.data);
             allocator.destroy(array162);
         }
      }
      var array163: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array163 = vars.data[pCounter];
          array163.refC += 1;
      } else {
          array163 = try allocator.create(Array);
          array163.*.size = 312;
          array163.*.refC = 1;
          array163.*.id = 163;
          array163.*.data = try allocator.alloc(u32, array163.*.size);
      }
      const params0_data = try allocator.alloc(*Array, 1);
      params0_data[0] = array163;
      var params0 = ArrayParam{
          .data = params0_data,
          .size = 1,
      };
      const array164 = try func17(&params0);
      defer allocator.free(params0.data);
      if ((path0 & 2) != 0) {
         var array165: *Array = undefined;
         if (pCounter > 0) {
             pCounter -= 1;
             array165 = vars.data[pCounter];
             array165.refC += 1;
         } else {
             array165 = try allocator.create(Array);
             array165.*.size = 346;
             array165.*.refC = 1;
             array165.*.id = 165;
             array165.*.data = try allocator.alloc(u32, array165.*.size);
         }
         var loop49: usize = 0;
         const loopLimit49: usize = (50)/3 + 1;
         while (loop49 < loopLimit49) {
            for (0..array163.size) |i| {
                array163.data[i] -= 1;
            }
            for (0..array163.size) |i| {
                if (array163.data[i] == 16) {
                    return array163;
                }
            }
            loop49 += 1;
         }
         const params1_data = try allocator.alloc(*Array, 3);
         params1_data[0] = array163;
         params1_data[1] = array164;
         params1_data[2] = array165;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 3,
         };
         const array166 = try func28(&params1, try get_path());
         defer allocator.free(params1.data);
         array166.refC -= 1;
         if (array166.refC == 0) {
             allocator.free(array166.data);
             allocator.destroy(array166);
         }
         array165.refC -= 1;
         if (array165.refC == 0) {
             allocator.free(array165.data);
             allocator.destroy(array165);
         }
      
      } else {
         const params1_data = try allocator.alloc(*Array, 2);
         params1_data[0] = array163;
         params1_data[1] = array164;
         var params1 = ArrayParam{
             .data = params1_data,
             .size = 2,
         };
         const array167 = try func22(&params1, try get_path());
         defer allocator.free(params1.data);
         array167.refC -= 1;
         if (array167.refC == 0) {
             allocator.free(array167.data);
             allocator.destroy(array167);
         }
      }
      for (0..array163.size) |i| {
          if (array163.data[i] == 47) {
              return array163;
          }
      }
      array164.refC -= 1;
      if (array164.refC == 0) {
          allocator.free(array164.data);
          allocator.destroy(array164);
      }
      array163.refC -= 1;
      if (array163.refC == 0) {
          allocator.free(array163.data);
          allocator.destroy(array163);
      }
      loop47 += 1;
   }
   var array168: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array168 = vars.data[pCounter];
       array168.refC += 1;
   } else {
       array168 = try allocator.create(Array);
       array168.*.size = 970;
       array168.*.refC = 1;
       array168.*.id = 168;
       array168.*.data = try allocator.alloc(u32, array168.*.size);
   }
   return array168;
}

