
module {
  func.func @main() -> f32 {
    %ret = arith.constant 0.0 : f32

       %c0 = arith.constant 0 : index
       %c2 = arith.constant 0 : i1
       %c10 = arith.constant 77 : index
       %c1 = arith.constant 1 : index
       %r0 = arith.constant 0 : i64
       %r1 = arith.constant 0 : i16
       %r2 = arith.addi %r0, %r0 : i64
       %r3 = arith.constant 0 : i16
       scf.for %r4 = %c0 to %c10 step %c1 {
   %r4_i16 = arith.index_cast %r4 : index to i16
           %r5 = arith.addi %r3, %r4_i16 : i16
       }
       %r6 = arith.constant 1 : i16
       %r7 = arith.subi %r1, %r6 : i16
   %r9 = arith.extsi %c2 : i1 to i16
       %r8 = arith.cmpi ne, %r7, %r9 : i16
       %r10 = arith.select %r8, %r6, %r1 : i16
   %0 = arith.trunci %r2 : i64 to i1
   scf.if %0 {
          %r11 = arith.constant 1 : i64
          %r12 = arith.subi %r0, %r11 : i64
      %r14 = arith.extsi %c2 : i1 to i64
          %r13 = arith.cmpi ne, %r11, %r14 : i64
          %r15 = arith.extsi %r10 : i16 to i64
          %r16 = arith.select %r13, %r15, %r12 : i64
      %r18 = arith.extsi %c2 : i1 to i64
          %r17 = arith.cmpi ne, %r15, %r18 : i64
      %r20 = arith.extsi %c2 : i1 to i64
          %r19 = arith.cmpi ne, %r15, %r20 : i64
          %r21 = arith.ori %r17, %r19 : i1
          %r22 = arith.constant 1 : i1
          %r23 = arith.subi %r8, %r22 : i1
   
   } else {
          %r24 = arith.extsi %r1 : i16 to i64
          %r25 = arith.subi %r24, %r2 : i64
          %r26 = arith.constant 0 : i32
          scf.for %r27 = %c0 to %c10 step %c1 {
      %r27_i32 = arith.index_cast %r27 : index to i32
              %r28 = arith.addi %r26, %r27_i32 : i32
          }
          %r29 = arith.constant 1 : i16
          %r30 = arith.addi %r10, %r29 : i16
      %r32 = arith.extsi %c2 : i1 to i16
          %r31 = arith.cmpi ne, %r7, %r32 : i16
          %r33 = arith.select %r31, %r10, %r29 : i16
          %r34 = arith.constant 0 : i16
          scf.for %r35 = %c0 to %c10 step %c1 {
      %r35_i16 = arith.index_cast %r35 : index to i16
              %r36 = arith.addi %r34, %r35_i16 : i16
          }
      %r38 = arith.extsi %c2 : i1 to i16
          %r37 = arith.cmpi ne, %r33, %r38 : i16
          %r39 = arith.select %r37, %r33, %r10 : i16
   }
       %r40 = arith.addi %r7, %r6 : i16
       func.return %ret : f32
    }
}

