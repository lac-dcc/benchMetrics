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
const func14 = @import("func14.zig").func14;
const func6 = @import("func6.zig").func6;
const func7 = @import("func7.zig").func7;
const func8 = @import("func8.zig").func8;
const func9 = @import("func9.zig").func9;
const func15 = @import("func15.zig").func15;
const func2 = @import("func2.zig").func2;
const func1 = @import("func1.zig").func1;
const func3 = @import("func3.zig").func3;

pub fn func21(vars: *ArrayParam, _path0: u64) !*Array {
   var pCounter: usize = vars.size;
   _ = &pCounter;
   const path0 = _path0;
   _ = &path0;
   var array237: *Array = undefined;
   if (pCounter > 0) {
       pCounter -= 1;
       array237 = vars.data[pCounter];
       array237.refC += 1;
   } else {
       array237 = try allocator.create(Array);
       array237.*.size = 763;
       array237.*.refC = 1;
       array237.*.id = 237;
       array237.*.data = try allocator.alloc(u32, array237.*.size);
   }
   const params0_data = try allocator.alloc(*Array, 1);
   params0_data[0] = array237;
   var params0 = ArrayParam{
       .data = params0_data,
       .size = 1,
   };
   const array238 = try func23(&params0);
   defer allocator.free(params0.data);
   if ((path0 & 1) != 0) {
      var array239: *Array = undefined;
      if (pCounter > 0) {
          pCounter -= 1;
          array239 = vars.data[pCounter];
          array239.refC += 1;
      } else {
          array239 = try allocator.create(Array);
          array239.*.size = 981;
          array239.*.refC = 1;
          array239.*.id = 239;
          array239.*.data = try allocator.alloc(u32, array239.*.size);
      }
      var loop69: usize = 0;
      const loopLimit69: usize = (50)/3 + 1;
      while (loop69 < loopLimit69) {
         for (0..array238.size) |i| {
             array238.data[i] -= 1;
         }
         for (0..array237.size) |i| {
             if (array237.data[i] == 36) {
                 return array237;
             }
         }
         loop69 += 1;
      }
      const params1_data = try allocator.alloc(*Array, 3);
      params1_data[0] = array237;
      params1_data[1] = array238;
      params1_data[2] = array239;
      var params1 = ArrayParam{
          .data = params1_data,
          .size = 3,
      };
      const array240 = try func36(&params1, try get_path());
      defer allocator.free(params1.data);
      array240.refC -= 1;
      if (array240.refC == 0) {
          allocator.free(array240.data);
          allocator.destroy(array240);
      }
      array239.refC -= 1;
      if (array239.refC == 0) {
          allocator.free(array239.data);
          allocator.destroy(array239);
      }
   
   } else {
      const params1_data = try allocator.alloc(*Array, 2);
      params1_data[0] = array237;
      params1_data[1] = array238;
      var params1 = ArrayParam{
          .data = params1_data,
          .size = 2,
      };
      const array241 = try func32(&params1, try get_path());
      defer allocator.free(params1.data);
      array241.refC -= 1;
      if (array241.refC == 0) {
          allocator.free(array241.data);
          allocator.destroy(array241);
      }
   }
   array238.refC -= 1;
   if (array238.refC == 0) {
       allocator.free(array238.data);
       allocator.destroy(array238);
   }
   return array237;
}

