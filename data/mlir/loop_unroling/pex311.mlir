
module {
  func.func @main() -> f32 {
    %ret = arith.constant 0.0 : f32

       %c0 = arith.constant 0 : index
       %c2 = arith.constant 0 : i1
       %c10 = arith.constant 77 : index
       %c1 = arith.constant 1 : index
       %r0 = arith.constant 0 : i64
       %r1 = arith.constant 0 : i16
       %r2 = arith.subi %r0, %r0 : i64
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
   %r12 = arith.extsi %c2 : i1 to i64
       %r11 = arith.cmpi ne, %r2, %r12 : i64
   %r14 = arith.extsi %c2 : i1 to i16
       %r13 = arith.cmpi ne, %r7, %r14 : i16
       %r15 = arith.ori %r11, %r13 : i1
       %r16 = arith.constant 0 : i64
       scf.for %r17 = %c0 to %c10 step %c1 {
   %r17_i64 = arith.index_cast %r17 : index to i64
           %r18 = arith.addi %r16, %r17_i64 : i64
       }
       %r19 = arith.constant 1 : i16
       %r20 = arith.subi %r6, %r19 : i16
   %r22 = arith.extsi %c2 : i1 to i64
       %r21 = arith.cmpi ne, %r2, %r22 : i64
       %r23 = arith.extsi %r8 : i1 to i64
       %r24 = arith.select %r21, %r23, %r2 : i64
   
   scf.if %r8 {
          %r25 = arith.addi %r9, %r7 : i16
          %r26 = arith.constant 0 : i32
          scf.for %r27 = %c0 to %c10 step %c1 {
      %r27_i32 = arith.index_cast %r27 : index to i32
              %r28 = arith.addi %r26, %r27_i32 : i32
          }
          %r29 = arith.constant 1 : i16
          %r30 = arith.addi %r10, %r29 : i16
          %r31 = arith.extsi %r13 : i1 to i16
          %r32 = arith.select %r11, %r19, %r31 : i16
      %r34 = arith.extsi %c2 : i1 to i16
          %r33 = arith.cmpi ne, %r30, %r34 : i16
      %r36 = arith.extsi %c2 : i1 to i16
          %r35 = arith.cmpi ne, %r30, %r36 : i16
          %r37 = arith.ori %r33, %r35 : i1
          %r38 = arith.constant 0 : i8
          scf.for %r39 = %c0 to %c10 step %c1 {
      %r39_i8 = arith.index_cast %r39 : index to i8
              %r40 = arith.addi %r38, %r39_i8 : i8
          }
          %r41 = arith.constant 1 : i16
          %r42 = arith.addi %r34, %r41 : i16
      %r44 = arith.extsi %c2 : i1 to i16
          %r43 = arith.cmpi ne, %r31, %r44 : i16
          %r45 = arith.extsi %r33 : i1 to i16
          %r46 = arith.select %r43, %r45, %r10 : i16
      %0 = arith.trunci %r30 : i16 to i1
      scf.if %0 {
             %r47 = arith.addi %r1, %r32 : i16
             %r48 = arith.constant 0 : i32
             scf.for %r49 = %c0 to %c10 step %c1 {
         %r49_i32 = arith.index_cast %r49 : index to i32
                 %r50 = arith.addi %r48, %r49_i32 : i32
             }
             %r51 = arith.constant 1 : i16
             %r52 = arith.addi %r19, %r51 : i16
         %r54 = arith.extsi %c2 : i1 to i64
             %r53 = arith.cmpi ne, %r12, %r54 : i64
             %r55 = arith.extsi %r6 : i16 to i64
             %r56 = arith.select %r53, %r2, %r55 : i64
         %r58 = arith.extsi %c2 : i1 to i64
             %r57 = arith.cmpi ne, %r55, %r58 : i64
             %r59 = arith.ori %r8, %r57 : i1
             %r60 = arith.constant 0 : i16
             scf.for %r61 = %c0 to %c10 step %c1 {
         %r61_i16 = arith.index_cast %r61 : index to i16
                 %r62 = arith.addi %r60, %r61_i16 : i16
             }
             %r63 = arith.constant 1 : i64
             %r64 = arith.subi %r12, %r63 : i64
             %r65 = arith.select %r21, %r22, %r0 : i64
         
         scf.if %r35 {
                %r66 = arith.extsi %r53 : i1 to i16
                %r67 = arith.muli %r36, %r66 : i16
                %r68 = arith.constant 0 : i8
                scf.for %r69 = %c0 to %c10 step %c1 {
            %r69_i8 = arith.index_cast %r69 : index to i8
                    %r70 = arith.addi %r68, %r69_i8 : i8
                }
                %r71 = arith.constant 1 : i1
                %r72 = arith.addi %r37, %r71 : i1
            %r74 = arith.extsi %c2 : i1 to i64
                %r73 = arith.cmpi ne, %r22, %r74 : i64
                %r75 = arith.extsi %r10 : i16 to i64
                %r76 = arith.select %r73, %r75, %r54 : i64
                %r77 = arith.ori %r21, %r15 : i1
                %r78 = arith.constant 0 : i8
                scf.for %r79 = %c0 to %c10 step %c1 {
            %r79_i8 = arith.index_cast %r79 : index to i8
                    %r80 = arith.addi %r78, %r79_i8 : i8
                }
                %r81 = arith.constant 1 : i16
                %r82 = arith.addi %r52, %r81 : i16
            %r84 = arith.extsi %c2 : i1 to i64
                %r83 = arith.cmpi ne, %r75, %r84 : i64
                %r85 = arith.select %r83, %r20, %r82 : i16
            %1 = arith.trunci %r25 : i16 to i1
            scf.if %1 {
                   %r86 = arith.subi %r71, %r57 : i1
                   %r87 = arith.constant 0 : i16
                   scf.for %r88 = %c0 to %c10 step %c1 {
               %r88_i16 = arith.index_cast %r88 : index to i16
                       %r89 = arith.addi %r87, %r88_i16 : i16
                   }
                   %r90 = arith.constant 1 : i16
                   %r91 = arith.subi %r29, %r90 : i16
               %r93 = arith.extsi %c2 : i1 to i16
                   %r92 = arith.cmpi ne, %r81, %r93 : i16
                   %r94 = arith.extsi %r72 : i1 to i16
                   %r95 = arith.select %r92, %r31, %r94 : i16
               %r97 = arith.extsi %c2 : i1 to i16
                   %r96 = arith.cmpi ne, %r47, %r97 : i16
                   %r98 = arith.ori %r96, %r83 : i1
                   %r99 = arith.constant 0 : i16
                   scf.for %r100 = %c0 to %c10 step %c1 {
               %r100_i16 = arith.index_cast %r100 : index to i16
                       %r101 = arith.addi %r99, %r100_i16 : i16
                   }
                   %r102 = arith.constant 1 : i1
                   %r103 = arith.addi %r37, %r102 : i1
                   %r104 = arith.select %r102, %r56, %r23 : i64
               
               scf.if %r102 {
                      %r105 = arith.extsi %r71 : i1 to i16
                      %r106 = arith.muli %r9, %r105 : i16
               
               } else {
                      %r107 = arith.constant 0 : i64
                      scf.for %r108 = %c0 to %c10 step %c1 {
                  %r108_i64 = arith.index_cast %r108 : index to i64
                          %r109 = arith.addi %r107, %r108_i64 : i64
                      }
                      %r110 = arith.constant 1 : i1
                      %r111 = arith.addi %r43, %r110 : i1
                      %r112 = arith.extsi %r37 : i1 to i64
                      %r113 = arith.select %r8, %r58, %r112 : i64
               }
                   %r114 = arith.subi %r11, %r59 : i1
               %r116 = arith.extsi %c2 : i1 to i16
                   %r115 = arith.cmpi ne, %r14, %r116 : i16
                   %r117 = arith.ori %r15, %r115 : i1
                   %r118 = arith.constant 0 : i16
                   scf.for %r119 = %c0 to %c10 step %c1 {
               %r119_i16 = arith.index_cast %r119 : index to i16
                       %r120 = arith.addi %r118, %r119_i16 : i16
                   }
                   %r121 = arith.constant 1 : i16
                   %r122 = arith.subi %r47, %r121 : i16
               %r124 = arith.extsi %c2 : i1 to i64
                   %r123 = arith.cmpi ne, %r12, %r124 : i64
                   %r125 = arith.select %r123, %r121, %r14 : i16
            
            } else {
                   %r126 = arith.constant 0 : i16
                   scf.for %r127 = %c0 to %c10 step %c1 {
               %r127_i16 = arith.index_cast %r127 : index to i16
                       %r128 = arith.addi %r126, %r127_i16 : i16
                   }
                   %r129 = arith.constant 1 : i16
                   %r130 = arith.subi %r25, %r129 : i16
                   %r131 = arith.select %r8, %r42, %r14 : i16
            }
                %r132 = arith.extsi %r8 : i1 to i16
                %r133 = arith.muli %r132, %r52 : i16
            %r135 = arith.extsi %c2 : i1 to i16
                %r134 = arith.cmpi ne, %r51, %r135 : i16
            %r137 = arith.extsi %c2 : i1 to i16
                %r136 = arith.cmpi ne, %r51, %r137 : i16
                %r138 = arith.ori %r134, %r136 : i1
                %r139 = arith.constant 0 : i32
                scf.for %r140 = %c0 to %c10 step %c1 {
            %r140_i32 = arith.index_cast %r140 : index to i32
                    %r141 = arith.addi %r139, %r140_i32 : i32
                }
                %r142 = arith.constant 1 : i16
                %r143 = arith.addi %r25, %r142 : i16
                %r144 = arith.select %r136, %r12, %r84 : i64
         
         } else {
                %r145 = arith.constant 0 : i8
                scf.for %r146 = %c0 to %c10 step %c1 {
            %r146_i8 = arith.index_cast %r146 : index to i8
                    %r147 = arith.addi %r145, %r146_i8 : i8
                }
                %r148 = arith.constant 1 : i16
                %r149 = arith.addi %r36, %r148 : i16
                %r150 = arith.extsi %r51 : i16 to i64
                %r151 = arith.select %r21, %r12, %r150 : i64
         }
             %r152 = arith.extsi %r8 : i1 to i16
             %r153 = arith.muli %r32, %r152 : i16
         %r155 = arith.extsi %c2 : i1 to i16
             %r154 = arith.cmpi ne, %r34, %r155 : i16
         %r157 = arith.extsi %c2 : i1 to i16
             %r156 = arith.cmpi ne, %r10, %r157 : i16
             %r158 = arith.ori %r154, %r156 : i1
             %r159 = arith.constant 0 : i16
             scf.for %r160 = %c0 to %c10 step %c1 {
         %r160_i16 = arith.index_cast %r160 : index to i16
                 %r161 = arith.addi %r159, %r160_i16 : i16
             }
             %r162 = arith.constant 1 : i1
             %r163 = arith.subi %r21, %r162 : i1
         %r165 = arith.extsi %c2 : i1 to i16
             %r164 = arith.cmpi ne, %r19, %r165 : i16
             %r166 = arith.extsi %r7 : i16 to i64
             %r167 = arith.select %r164, %r54, %r166 : i64
      
      } else {
             %r168 = arith.constant 0 : i8
             scf.for %r169 = %c0 to %c10 step %c1 {
         %r169_i8 = arith.index_cast %r169 : index to i8
                 %r170 = arith.addi %r168, %r169_i8 : i8
             }
             %r171 = arith.constant 1 : i1
             %r172 = arith.subi %r43, %r171 : i1
         %r174 = arith.extsi %c2 : i1 to i16
             %r173 = arith.cmpi ne, %r41, %r174 : i16
             %r175 = arith.extsi %r21 : i1 to i16
             %r176 = arith.select %r173, %r175, %r41 : i16
      }
          %r177 = arith.muli %r32, %r19 : i16
      %r179 = arith.extsi %c2 : i1 to i16
          %r178 = arith.cmpi ne, %r20, %r179 : i16
      %r181 = arith.extsi %c2 : i1 to i64
          %r180 = arith.cmpi ne, %r22, %r181 : i64
          %r182 = arith.ori %r178, %r180 : i1
          %r183 = arith.constant 0 : i32
          scf.for %r184 = %c0 to %c10 step %c1 {
      %r184_i32 = arith.index_cast %r184 : index to i32
              %r185 = arith.addi %r183, %r184_i32 : i32
          }
          %r186 = arith.constant 1 : i64
          %r187 = arith.addi %r0, %r186 : i64
          %r188 = arith.select %r182, %r6, %r179 : i16
   
   } else {
          %r189 = arith.constant 0 : i64
          scf.for %r190 = %c0 to %c10 step %c1 {
      %r190_i64 = arith.index_cast %r190 : index to i64
              %r191 = arith.addi %r189, %r190_i64 : i64
          }
          %r192 = arith.constant 1 : i1
          %r193 = arith.addi %r21, %r192 : i1
          %r194 = arith.select %r193, %r13, %r11 : i1
   }
       %r195 = arith.extsi %r11 : i1 to i16
       %r196 = arith.subi %r195, %r6 : i16
   %r198 = arith.extsi %c2 : i1 to i16
       %r197 = arith.cmpi ne, %r10, %r198 : i16
       %r199 = arith.ori %r11, %r197 : i1
       %r200 = arith.constant 0 : i32
       scf.for %r201 = %c0 to %c10 step %c1 {
   %r201_i32 = arith.index_cast %r201 : index to i32
           %r202 = arith.addi %r200, %r201_i32 : i32
       }
       %r203 = arith.constant 1 : i1
       %r204 = arith.addi %r11, %r203 : i1
   %r206 = arith.extsi %c2 : i1 to i16
       %r205 = arith.cmpi ne, %r6, %r206 : i16
       %r207 = arith.extsi %r14 : i16 to i64
       %r208 = arith.select %r205, %r207, %r2 : i64
       func.return %ret : f32
    }
}

