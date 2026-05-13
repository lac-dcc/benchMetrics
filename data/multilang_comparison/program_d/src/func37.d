module func37;
import program_d;

array_t* func37(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   uint loop17 = 0;
   uint loopLimit17 = (50)/4 + 1;
   for(; loop17 < loopLimit17; loop17++) {
   }
   array_t* array50;
   if (pCounter > 0) {
      array50 = vars.data[--pCounter];
      array50.refC++;
      DEBUG_COPY(array50.id);
   } else {
      array50 = cast(array_t*)malloc(array_t.sizeof);
      array50.size = 859;
      array50.refC = 1;
      array50.id = 50;
      array50.data = cast(uint*)malloc(array50.size*uint.sizeof);
      memset(array50.data, 0, array50.size*uint.sizeof);
      DEBUG_NEW(array50.id);
   }
   return array50;
}

