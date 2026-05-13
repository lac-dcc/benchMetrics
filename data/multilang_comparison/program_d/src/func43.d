module func43;
import program_d;

array_t* func43(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array19;
   if (pCounter > 0) {
      array19 = vars.data[--pCounter];
      array19.refC++;
      DEBUG_COPY(array19.id);
   } else {
      array19 = cast(array_t*)malloc(array_t.sizeof);
      array19.size = 814;
      array19.refC = 1;
      array19.id = 19;
      array19.data = cast(uint*)malloc(array19.size*uint.sizeof);
      memset(array19.data, 0, array19.size*uint.sizeof);
      DEBUG_NEW(array19.id);
   }
   return array19;
}

