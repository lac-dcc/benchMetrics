module func45;
import program_d;

array_t* func45(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array23;
   if (pCounter > 0) {
      array23 = vars.data[--pCounter];
      array23.refC++;
      DEBUG_COPY(array23.id);
   } else {
      array23 = cast(array_t*)malloc(array_t.sizeof);
      array23.size = 403;
      array23.refC = 1;
      array23.id = 23;
      array23.data = cast(uint*)malloc(array23.size*uint.sizeof);
      memset(array23.data, 0, array23.size*uint.sizeof);
      DEBUG_NEW(array23.id);
   }
   return array23;
}

