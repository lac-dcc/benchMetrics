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
const func15 = @import("func15.zig").func15;
const func2 = @import("func2.zig").func2;
const func1 = @import("func1.zig").func1;
const func3 = @import("func3.zig").func3;

pub fn func9(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array175: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array175 = vars.data[pCounter];
       array175.refC += 1;
   } else {
       array175 = try allocator.create(Array);
       array175.*.size = 641;
       array175.*.refC = 1;
       array175.*.id = 175;
       array175.*.data = try allocator.alloc(u32, array175.*.size);
   }
   const params0_data = try allocator.alloc(*Array, 1);
   params0_data[0] = array175;
   var params0 = ArrayParam{
       .data = params0_data,
       .size = 1,
   };
   const array176 = try func15(&params0);
   defer allocator.free(params0.data);
   if ((path0 & 1) != 0) {
      var array179: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array179 = vars.data[pCounter];
          array179.refC += 1;
      } else {
          array179 = try allocator.create(Array);
          array179.*.size = 260;
          array179.*.refC = 1;
          array179.*.id = 179;
          array179.*.data = try allocator.alloc(u32, array179.*.size);
      }
      var loop52: usize = 0;
      const loopLimit52: usize = (50)/2 + 1;
      while (loop52 < loopLimit52) {
         for (0..array176.size) |i| {
             array176.data[i] -= 1;
         }
         for (0..array179.size) |i| {
             if (array179.data[i] == 5) {
                 return array179;
             }
         }
         loop52 += 1;
      }
      const params1_data = try allocator.alloc(*Array, 3);
      params1_data[0] = array175;
      params1_data[1] = array176;
      params1_data[2] = array179;
      var params1 = ArrayParam{
          .data = params1_data,
          .size = 3,
      };
      const array180 = try func24(&params1, try get_path());
      defer allocator.free(params1.data);
      array180.refC -= 1;
      if (array180.refC == 0) {
          allocator.free(array180.data);
          allocator.destroy(array180);
      }
      array179.refC -= 1;
      if (array179.refC == 0) {
          allocator.free(array179.data);
          allocator.destroy(array179);
      }
   
   } else {
      const params1_data = try allocator.alloc(*Array, 2);
      params1_data[0] = array175;
      params1_data[1] = array176;
      var params1 = ArrayParam{
          .data = params1_data,
          .size = 2,
      };
      const array181 = try func16(&params1, try get_path());
      defer allocator.free(params1.data);
      array181.refC -= 1;
      if (array181.refC == 0) {
          allocator.free(array181.data);
          allocator.destroy(array181);
      }
   }
   array175.refC -= 1;
   if (array175.refC == 0) {
       allocator.free(array175.data);
       allocator.destroy(array175);
   }
   return array176;
}

