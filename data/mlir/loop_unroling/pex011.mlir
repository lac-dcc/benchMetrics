
module {
  func.func @main() -> f32 {
    %ret = arith.constant 0.0 : f32

       %c0 = arith.constant 0 : index
       %c2 = arith.constant 0 : i1
       %c10 = arith.constant 77 : index
       %c1 = arith.constant 1 : index
       %r0 = arith.constant 0 : i64
       %r1 = arith.constant 0 : i16
   %0 = arith.trunci %r0 : i64 to i1
   scf.if %0 {
      %1 = arith.trunci %r1 : i16 to i1
      scf.if %1 {
         %2 = arith.trunci %r0 : i64 to i1
         scf.if %2 {
            %3 = arith.trunci %r0 : i64 to i1
            scf.if %3 {
               %4 = arith.trunci %r1 : i16 to i1
               scf.if %4 {
                  %5 = arith.trunci %r0 : i64 to i1
                  scf.if %5 {
                     %6 = arith.trunci %r0 : i64 to i1
                     scf.if %6 {
                        %7 = arith.trunci %r1 : i16 to i1
                        scf.if %7 {
                           %8 = arith.trunci %r1 : i16 to i1
                           scf.if %8 {
                              %9 = arith.trunci %r0 : i64 to i1
                              scf.if %9 {
                                 %10 = arith.trunci %r0 : i64 to i1
                                 scf.if %10 {
                                 
                                 } else {
                                 }
                              
                              } else {
                                 %11 = arith.trunci %r1 : i16 to i1
                                 scf.if %11 {
                                 
                                 } else {
                                 }
                                     %r2 = arith.extsi %r1 : i16 to i64
                                     %r3 = arith.addi %r2, %r0 : i64
                              }
                              %r5 = arith.extsi %c2 : i1 to i64
                                  %r4 = arith.cmpi ne, %r0, %r5 : i64
                                  %r6 = arith.select %r4, %r1, %r1 : i16
                                  %r7 = arith.constant 1 : i16
                                  %r8 = arith.addi %r1, %r7 : i16
                              
                              scf.if %r4 {
                              
                              } else {
                              }
                                  %r9 = arith.addi %r6, %r7 : i16
                              %r11 = arith.extsi %c2 : i1 to i64
                                  %r10 = arith.cmpi ne, %r0, %r11 : i64
                                  %r12 = arith.select %r10, %r1, %r8 : i16
                                  %r13 = arith.constant 0 : i64
                                  scf.for %r14 = %c0 to %c10 step %c1 {
                              %r14_i64 = arith.index_cast %r14 : index to i64
                                      %r15 = arith.addi %r13, %r14_i64 : i64
                                  }
                           
                           } else {
                              %12 = arith.trunci %r1 : i16 to i1
                              scf.if %12 {
                                 %r17 = arith.extsi %c2 : i1 to i16
                                     %r16 = arith.cmpi ne, %r1, %r17 : i16
                                 %r19 = arith.extsi %c2 : i1 to i64
                                     %r18 = arith.cmpi ne, %r0, %r19 : i64
                                     %r20 = arith.ori %r16, %r18 : i1
                                     %r21 = arith.constant 1 : i1
                                     %r22 = arith.subi %r16, %r21 : i1
                              
                              } else {
                                 %r24 = arith.extsi %c2 : i1 to i64
                                     %r23 = arith.cmpi ne, %r0, %r24 : i64
                                     %r25 = arith.extsi %r1 : i16 to i64
                                     %r26 = arith.select %r23, %r0, %r25 : i64
                                     %r27 = arith.constant 1 : i64
                                     %r28 = arith.subi %r24, %r27 : i64
                              }
                                  %r29 = arith.extsi %r1 : i16 to i64
                                  %r30 = arith.muli %r29, %r0 : i64
                           }
                           %r32 = arith.extsi %c2 : i1 to i64
                               %r31 = arith.cmpi ne, %r0, %r32 : i64
                               %r33 = arith.select %r31, %r1, %r1 : i16
                               %r34 = arith.constant 1 : i16
                               %r35 = arith.subi %r33, %r34 : i16
                           
                           scf.if %r31 {
                              %r37 = arith.extsi %c2 : i1 to i64
                                  %r36 = arith.cmpi ne, %r32, %r37 : i64
                                  %r38 = arith.ori %r36, %r31 : i1
                                  %r39 = arith.constant 1 : i16
                                  %r40 = arith.subi %r33, %r39 : i16
                           
                           } else {
                              %r42 = arith.extsi %c2 : i1 to i64
                                  %r41 = arith.cmpi ne, %r0, %r42 : i64
                                  %r43 = arith.select %r41, %r0, %r32 : i64
                                  %r44 = arith.constant 1 : i64
                                  %r45 = arith.addi %r42, %r44 : i64
                           }
                               %r46 = arith.extsi %r33 : i16 to i64
                               %r47 = arith.subi %r46, %r0 : i64
                           %r49 = arith.extsi %c2 : i1 to i64
                               %r48 = arith.cmpi ne, %r47, %r49 : i64
                               %r50 = arith.select %r48, %r1, %r35 : i16
                               %r51 = arith.constant 0 : i8
                               scf.for %r52 = %c0 to %c10 step %c1 {
                           %r52_i8 = arith.index_cast %r52 : index to i8
                                   %r53 = arith.addi %r51, %r52_i8 : i8
                               }
                        
                        } else {
                           %13 = arith.trunci %r1 : i16 to i1
                           scf.if %13 {
                              %r55 = arith.extsi %c2 : i1 to i64
                                  %r54 = arith.cmpi ne, %r0, %r55 : i64
                              %r57 = arith.extsi %c2 : i1 to i64
                                  %r56 = arith.cmpi ne, %r0, %r57 : i64
                                  %r58 = arith.ori %r54, %r56 : i1
                                  %r59 = arith.constant 1 : i64
                                  %r60 = arith.subi %r0, %r59 : i64
                           
                           } else {
                              %r62 = arith.extsi %c2 : i1 to i64
                                  %r61 = arith.cmpi ne, %r0, %r62 : i64
                                  %r63 = arith.select %r61, %r0, %r0 : i64
                                  %r64 = arith.constant 1 : i16
                                  %r65 = arith.addi %r1, %r64 : i16
                           }
                               %r66 = arith.extsi %r1 : i16 to i64
                               %r67 = arith.muli %r0, %r66 : i64
                        }
                        %r69 = arith.extsi %c2 : i1 to i64
                            %r68 = arith.cmpi ne, %r0, %r69 : i64
                            %r70 = arith.extsi %r1 : i16 to i64
                            %r71 = arith.select %r68, %r0, %r70 : i64
                            %r72 = arith.constant 1 : i1
                            %r73 = arith.addi %r68, %r72 : i1
                        %14 = arith.trunci %r1 : i16 to i1
                        scf.if %14 {
                           %r75 = arith.extsi %c2 : i1 to i64
                               %r74 = arith.cmpi ne, %r70, %r75 : i64
                           %r77 = arith.extsi %c2 : i1 to i64
                               %r76 = arith.cmpi ne, %r69, %r77 : i64
                               %r78 = arith.ori %r74, %r76 : i1
                               %r79 = arith.constant 1 : i1
                               %r80 = arith.addi %r74, %r79 : i1
                        
                        } else {
                           %r82 = arith.extsi %c2 : i1 to i64
                               %r81 = arith.cmpi ne, %r71, %r82 : i64
                               %r83 = arith.extsi %r1 : i16 to i64
                               %r84 = arith.select %r81, %r83, %r69 : i64
                               %r85 = arith.constant 1 : i64
                               %r86 = arith.subi %r84, %r85 : i64
                        }
                            %r87 = arith.addi %r73, %r73 : i1
                        %r89 = arith.extsi %c2 : i1 to i64
                            %r88 = arith.cmpi ne, %r71, %r89 : i64
                            %r90 = arith.extsi %r72 : i1 to i64
                            %r91 = arith.select %r88, %r69, %r90 : i64
                            %r92 = arith.constant 0 : i32
                            scf.for %r93 = %c0 to %c10 step %c1 {
                        %r93_i32 = arith.index_cast %r93 : index to i32
                                %r94 = arith.addi %r92, %r93_i32 : i32
                            }
                     
                     } else {
                        %15 = arith.trunci %r1 : i16 to i1
                        scf.if %15 {
                           %r96 = arith.extsi %c2 : i1 to i64
                               %r95 = arith.cmpi ne, %r0, %r96 : i64
                           %r98 = arith.extsi %c2 : i1 to i16
                               %r97 = arith.cmpi ne, %r1, %r98 : i16
                               %r99 = arith.ori %r95, %r97 : i1
                               %r100 = arith.constant 1 : i1
                               %r101 = arith.subi %r97, %r100 : i1
                        
                        } else {
                           %r103 = arith.extsi %c2 : i1 to i16
                               %r102 = arith.cmpi ne, %r1, %r103 : i16
                               %r104 = arith.select %r102, %r0, %r0 : i64
                               %r105 = arith.constant 1 : i64
                               %r106 = arith.subi %r0, %r105 : i64
                        }
                            %r107 = arith.extsi %r1 : i16 to i64
                            %r108 = arith.subi %r107, %r0 : i64
                     }
                     %r110 = arith.extsi %c2 : i1 to i64
                         %r109 = arith.cmpi ne, %r0, %r110 : i64
                         %r111 = arith.extsi %r1 : i16 to i64
                         %r112 = arith.select %r109, %r111, %r0 : i64
                         %r113 = arith.constant 1 : i16
                         %r114 = arith.subi %r1, %r113 : i16
                     %16 = arith.trunci %r110 : i64 to i1
                     scf.if %16 {
                        %r116 = arith.extsi %c2 : i1 to i64
                            %r115 = arith.cmpi ne, %r111, %r116 : i64
                        %r118 = arith.extsi %c2 : i1 to i64
                            %r117 = arith.cmpi ne, %r111, %r118 : i64
                            %r119 = arith.ori %r115, %r117 : i1
                            %r120 = arith.constant 1 : i64
                            %r121 = arith.addi %r116, %r120 : i64
                     
                     } else {
                        %r123 = arith.extsi %c2 : i1 to i64
                            %r122 = arith.cmpi ne, %r111, %r123 : i64
                            %r124 = arith.extsi %r109 : i1 to i64
                            %r125 = arith.select %r122, %r124, %r111 : i64
                            %r126 = arith.constant 1 : i64
                            %r127 = arith.subi %r124, %r126 : i64
                     }
                         %r128 = arith.extsi %r114 : i16 to i64
                         %r129 = arith.addi %r0, %r128 : i64
                     %r131 = arith.extsi %c2 : i1 to i16
                         %r130 = arith.cmpi ne, %r114, %r131 : i16
                         %r132 = arith.select %r130, %r112, %r129 : i64
                         %r133 = arith.constant 0 : i8
                         scf.for %r134 = %c0 to %c10 step %c1 {
                     %r134_i8 = arith.index_cast %r134 : index to i8
                             %r135 = arith.addi %r133, %r134_i8 : i8
                         }
                  
                  } else {
                     %17 = arith.trunci %r1 : i16 to i1
                     scf.if %17 {
                        %r137 = arith.extsi %c2 : i1 to i16
                            %r136 = arith.cmpi ne, %r1, %r137 : i16
                        %r139 = arith.extsi %c2 : i1 to i16
                            %r138 = arith.cmpi ne, %r1, %r139 : i16
                            %r140 = arith.ori %r136, %r138 : i1
                            %r141 = arith.constant 1 : i16
                            %r142 = arith.subi %r1, %r141 : i16
                     
                     } else {
                        %r144 = arith.extsi %c2 : i1 to i16
                            %r143 = arith.cmpi ne, %r1, %r144 : i16
                            %r145 = arith.select %r143, %r1, %r1 : i16
                            %r146 = arith.constant 1 : i16
                            %r147 = arith.subi %r144, %r146 : i16
                     }
                         %r148 = arith.extsi %r1 : i16 to i64
                         %r149 = arith.muli %r0, %r148 : i64
                  }
                  %r151 = arith.extsi %c2 : i1 to i64
                      %r150 = arith.cmpi ne, %r0, %r151 : i64
                      %r152 = arith.extsi %r1 : i16 to i64
                      %r153 = arith.select %r150, %r152, %r0 : i64
                      %r154 = arith.constant 1 : i16
                      %r155 = arith.subi %r1, %r154 : i16
                  %18 = arith.trunci %r153 : i64 to i1
                  scf.if %18 {
                     %r157 = arith.extsi %c2 : i1 to i16
                         %r156 = arith.cmpi ne, %r154, %r157 : i16
                     %r159 = arith.extsi %c2 : i1 to i64
                         %r158 = arith.cmpi ne, %r0, %r159 : i64
                         %r160 = arith.ori %r156, %r158 : i1
                         %r161 = arith.constant 1 : i1
                         %r162 = arith.subi %r150, %r161 : i1
                  
                  } else {
                     %r164 = arith.extsi %c2 : i1 to i64
                         %r163 = arith.cmpi ne, %r0, %r164 : i64
                         %r165 = arith.extsi %r1 : i16 to i64
                         %r166 = arith.select %r163, %r165, %r153 : i64
                         %r167 = arith.constant 1 : i64
                         %r168 = arith.subi %r0, %r167 : i64
                  }
                      %r169 = arith.addi %r155, %r154 : i16
                  %r171 = arith.extsi %c2 : i1 to i16
                      %r170 = arith.cmpi ne, %r169, %r171 : i16
                      %r172 = arith.extsi %r1 : i16 to i64
                      %r173 = arith.select %r170, %r153, %r172 : i64
                      %r174 = arith.constant 0 : i8
                      scf.for %r175 = %c0 to %c10 step %c1 {
                  %r175_i8 = arith.index_cast %r175 : index to i8
                          %r176 = arith.addi %r174, %r175_i8 : i8
                      }
               
               } else {
                  %19 = arith.trunci %r1 : i16 to i1
                  scf.if %19 {
                     %r178 = arith.extsi %c2 : i1 to i64
                         %r177 = arith.cmpi ne, %r0, %r178 : i64
                     %r180 = arith.extsi %c2 : i1 to i64
                         %r179 = arith.cmpi ne, %r0, %r180 : i64
                         %r181 = arith.ori %r177, %r179 : i1
                         %r182 = arith.constant 1 : i64
                         %r183 = arith.addi %r180, %r182 : i64
                  
                  } else {
                     %r185 = arith.extsi %c2 : i1 to i64
                         %r184 = arith.cmpi ne, %r0, %r185 : i64
                         %r186 = arith.select %r184, %r1, %r1 : i16
                         %r187 = arith.constant 1 : i16
                         %r188 = arith.subi %r186, %r187 : i16
                  }
                      %r189 = arith.extsi %r1 : i16 to i64
                      %r190 = arith.muli %r189, %r0 : i64
               }
               %r192 = arith.extsi %c2 : i1 to i16
                   %r191 = arith.cmpi ne, %r1, %r192 : i16
                   %r193 = arith.extsi %r1 : i16 to i64
                   %r194 = arith.select %r191, %r193, %r0 : i64
                   %r195 = arith.constant 1 : i64
                   %r196 = arith.addi %r193, %r195 : i64
               %20 = arith.trunci %r196 : i64 to i1
               scf.if %20 {
                  %r198 = arith.extsi %c2 : i1 to i64
                      %r197 = arith.cmpi ne, %r194, %r198 : i64
                  %r200 = arith.extsi %c2 : i1 to i16
                      %r199 = arith.cmpi ne, %r1, %r200 : i16
                      %r201 = arith.ori %r197, %r199 : i1
                      %r202 = arith.constant 1 : i16
                      %r203 = arith.subi %r192, %r202 : i16
               
               } else {
                  %r205 = arith.extsi %c2 : i1 to i16
                      %r204 = arith.cmpi ne, %r1, %r205 : i16
                      %r206 = arith.select %r204, %r0, %r0 : i64
                      %r207 = arith.constant 1 : i16
                      %r208 = arith.addi %r205, %r207 : i16
               }
                   %r209 = arith.extsi %r1 : i16 to i64
                   %r210 = arith.subi %r209, %r193 : i64
                   %r211 = arith.select %r191, %r209, %r193 : i64
                   %r212 = arith.constant 0 : i32
                   scf.for %r213 = %c0 to %c10 step %c1 {
               %r213_i32 = arith.index_cast %r213 : index to i32
                       %r214 = arith.addi %r212, %r213_i32 : i32
                   }
            
            } else {
               %21 = arith.trunci %r0 : i64 to i1
               scf.if %21 {
                  %r216 = arith.extsi %c2 : i1 to i64
                      %r215 = arith.cmpi ne, %r0, %r216 : i64
                  %r218 = arith.extsi %c2 : i1 to i16
                      %r217 = arith.cmpi ne, %r1, %r218 : i16
                      %r219 = arith.ori %r215, %r217 : i1
                      %r220 = arith.constant 1 : i64
                      %r221 = arith.addi %r216, %r220 : i64
               
               } else {
                  %r223 = arith.extsi %c2 : i1 to i16
                      %r222 = arith.cmpi ne, %r1, %r223 : i16
                      %r224 = arith.select %r222, %r1, %r1 : i16
                      %r225 = arith.constant 1 : i64
                      %r226 = arith.subi %r0, %r225 : i64
               }
                   %r227 = arith.muli %r0, %r0 : i64
            }
            %r229 = arith.extsi %c2 : i1 to i16
                %r228 = arith.cmpi ne, %r1, %r229 : i16
                %r230 = arith.select %r228, %r1, %r1 : i16
                %r231 = arith.constant 1 : i16
                %r232 = arith.addi %r230, %r231 : i16
            %22 = arith.trunci %r0 : i64 to i1
            scf.if %22 {
               %r234 = arith.extsi %c2 : i1 to i16
                   %r233 = arith.cmpi ne, %r231, %r234 : i16
                   %r235 = arith.ori %r233, %r228 : i1
                   %r236 = arith.constant 1 : i16
                   %r237 = arith.subi %r232, %r236 : i16
            
            } else {
               %r239 = arith.extsi %c2 : i1 to i16
                   %r238 = arith.cmpi ne, %r229, %r239 : i16
                   %r240 = arith.select %r238, %r231, %r230 : i16
                   %r241 = arith.constant 1 : i1
                   %r242 = arith.subi %r228, %r241 : i1
            }
                %r243 = arith.addi %r232, %r230 : i16
            %r245 = arith.extsi %c2 : i1 to i16
                %r244 = arith.cmpi ne, %r229, %r245 : i16
                %r246 = arith.extsi %r228 : i1 to i16
                %r247 = arith.select %r244, %r246, %r243 : i16
                %r248 = arith.constant 0 : i8
                scf.for %r249 = %c0 to %c10 step %c1 {
            %r249_i8 = arith.index_cast %r249 : index to i8
                    %r250 = arith.addi %r248, %r249_i8 : i8
                }
         
         } else {
            %23 = arith.trunci %r1 : i16 to i1
            scf.if %23 {
               %r252 = arith.extsi %c2 : i1 to i64
                   %r251 = arith.cmpi ne, %r0, %r252 : i64
               %r254 = arith.extsi %c2 : i1 to i64
                   %r253 = arith.cmpi ne, %r0, %r254 : i64
                   %r255 = arith.ori %r251, %r253 : i1
                   %r256 = arith.constant 1 : i16
                   %r257 = arith.subi %r1, %r256 : i16
            
            } else {
               %r259 = arith.extsi %c2 : i1 to i16
                   %r258 = arith.cmpi ne, %r1, %r259 : i16
                   %r260 = arith.extsi %r1 : i16 to i64
                   %r261 = arith.select %r258, %r260, %r0 : i64
                   %r262 = arith.constant 1 : i16
                   %r263 = arith.subi %r1, %r262 : i16
            }
                %r264 = arith.muli %r1, %r1 : i16
         }
         %r266 = arith.extsi %c2 : i1 to i16
             %r265 = arith.cmpi ne, %r1, %r266 : i16
             %r267 = arith.extsi %r1 : i16 to i64
             %r268 = arith.select %r265, %r267, %r0 : i64
             %r269 = arith.constant 1 : i64
             %r270 = arith.addi %r268, %r269 : i64
         %24 = arith.trunci %r270 : i64 to i1
         scf.if %24 {
            %r272 = arith.extsi %c2 : i1 to i64
                %r271 = arith.cmpi ne, %r0, %r272 : i64
                %r273 = arith.ori %r271, %r265 : i1
                %r274 = arith.constant 1 : i1
                %r275 = arith.subi %r271, %r274 : i1
         
         } else {
            %r277 = arith.extsi %c2 : i1 to i64
                %r276 = arith.cmpi ne, %r268, %r277 : i64
                %r278 = arith.extsi %r1 : i16 to i64
                %r279 = arith.select %r276, %r267, %r278 : i64
                %r280 = arith.constant 1 : i1
                %r281 = arith.subi %r276, %r280 : i1
         }
             %r282 = arith.subi %r267, %r0 : i64
         %r284 = arith.extsi %c2 : i1 to i64
             %r283 = arith.cmpi ne, %r267, %r284 : i64
             %r285 = arith.extsi %r265 : i1 to i64
             %r286 = arith.select %r283, %r0, %r285 : i64
             %r287 = arith.constant 0 : i8
             scf.for %r288 = %c0 to %c10 step %c1 {
         %r288_i8 = arith.index_cast %r288 : index to i8
                 %r289 = arith.addi %r287, %r288_i8 : i8
             }
      
      } else {
         %25 = arith.trunci %r0 : i64 to i1
         scf.if %25 {
            %r291 = arith.extsi %c2 : i1 to i64
                %r290 = arith.cmpi ne, %r0, %r291 : i64
            %r293 = arith.extsi %c2 : i1 to i64
                %r292 = arith.cmpi ne, %r0, %r293 : i64
                %r294 = arith.ori %r290, %r292 : i1
                %r295 = arith.constant 1 : i1
                %r296 = arith.subi %r292, %r295 : i1
         
         } else {
            %r298 = arith.extsi %c2 : i1 to i16
                %r297 = arith.cmpi ne, %r1, %r298 : i16
                %r299 = arith.extsi %r1 : i16 to i64
                %r300 = arith.select %r297, %r299, %r0 : i64
                %r301 = arith.constant 1 : i16
                %r302 = arith.subi %r1, %r301 : i16
         }
             %r303 = arith.extsi %r1 : i16 to i64
             %r304 = arith.subi %r0, %r303 : i64
      }
      %r306 = arith.extsi %c2 : i1 to i16
          %r305 = arith.cmpi ne, %r1, %r306 : i16
          %r307 = arith.select %r305, %r0, %r0 : i64
          %r308 = arith.constant 1 : i64
          %r309 = arith.subi %r0, %r308 : i64
      %26 = arith.trunci %r307 : i64 to i1
      scf.if %26 {
         %r311 = arith.extsi %c2 : i1 to i64
             %r310 = arith.cmpi ne, %r307, %r311 : i64
             %r312 = arith.ori %r305, %r310 : i1
             %r313 = arith.constant 1 : i1
             %r314 = arith.addi %r310, %r313 : i1
      
      } else {
         %r316 = arith.extsi %c2 : i1 to i64
             %r315 = arith.cmpi ne, %r308, %r316 : i64
             %r317 = arith.extsi %r305 : i1 to i64
             %r318 = arith.select %r315, %r317, %r308 : i64
             %r319 = arith.constant 1 : i64
             %r320 = arith.addi %r317, %r319 : i64
      }
          %r321 = arith.addi %r309, %r0 : i64
      %r323 = arith.extsi %c2 : i1 to i64
          %r322 = arith.cmpi ne, %r0, %r323 : i64
          %r324 = arith.extsi %r305 : i1 to i64
          %r325 = arith.select %r322, %r308, %r324 : i64
          %r326 = arith.constant 0 : i8
          scf.for %r327 = %c0 to %c10 step %c1 {
      %r327_i8 = arith.index_cast %r327 : index to i8
              %r328 = arith.addi %r326, %r327_i8 : i8
          }
   
   } else {
      %27 = arith.trunci %r0 : i64 to i1
      scf.if %27 {
         %r330 = arith.extsi %c2 : i1 to i64
             %r329 = arith.cmpi ne, %r0, %r330 : i64
         %r332 = arith.extsi %c2 : i1 to i64
             %r331 = arith.cmpi ne, %r0, %r332 : i64
             %r333 = arith.ori %r329, %r331 : i1
             %r334 = arith.constant 1 : i64
             %r335 = arith.subi %r0, %r334 : i64
      
      } else {
         %r337 = arith.extsi %c2 : i1 to i64
             %r336 = arith.cmpi ne, %r0, %r337 : i64
             %r338 = arith.select %r336, %r1, %r1 : i16
             %r339 = arith.constant 1 : i64
             %r340 = arith.subi %r337, %r339 : i64
      }
          %r341 = arith.extsi %r1 : i16 to i64
          %r342 = arith.muli %r0, %r341 : i64
   }
   %r344 = arith.extsi %c2 : i1 to i64
       %r343 = arith.cmpi ne, %r0, %r344 : i64
       %r345 = arith.extsi %r1 : i16 to i64
       %r346 = arith.select %r343, %r345, %r0 : i64
       %r347 = arith.constant 1 : i64
       %r348 = arith.subi %r0, %r347 : i64
   %28 = arith.trunci %r1 : i16 to i1
   scf.if %28 {
      %r350 = arith.extsi %c2 : i1 to i64
          %r349 = arith.cmpi ne, %r348, %r350 : i64
      %r352 = arith.extsi %c2 : i1 to i16
          %r351 = arith.cmpi ne, %r1, %r352 : i16
          %r353 = arith.ori %r349, %r351 : i1
          %r354 = arith.constant 1 : i64
          %r355 = arith.addi %r345, %r354 : i64
   
   } else {
      %r357 = arith.extsi %c2 : i1 to i64
          %r356 = arith.cmpi ne, %r345, %r357 : i64
          %r358 = arith.select %r356, %r347, %r346 : i64
          %r359 = arith.constant 1 : i64
          %r360 = arith.addi %r358, %r359 : i64
   }
       %r361 = arith.addi %r345, %r346 : i64
   %r363 = arith.extsi %c2 : i1 to i64
       %r362 = arith.cmpi ne, %r345, %r363 : i64
       %r364 = arith.select %r362, %r344, %r361 : i64
       %r365 = arith.constant 0 : i8
       scf.for %r366 = %c0 to %c10 step %c1 {
   %r366_i8 = arith.index_cast %r366 : index to i8
           %r367 = arith.addi %r365, %r366_i8 : i8
       }
       func.return %ret : f32
    }
}

