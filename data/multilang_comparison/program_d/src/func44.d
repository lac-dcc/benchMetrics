module func44;
import program_d;

array_t* func44(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array21;
   if (pCounter > 0) {
      array21 = vars.data[--pCounter];
      array21.refC++;
      DEBUG_COPY(array21.id);
   } else {
      array21 = cast(array_t*)malloc(array_t.sizeof);
      array21.size = 87;
      array21.refC = 1;
      array21.id = 21;
      array21.data = cast(uint*)malloc(array21.size*uint.sizeof);
      memset(array21.data, 0, array21.size*uint.sizeof);
      DEBUG_NEW(array21.id);
   }
   return array21;
}

