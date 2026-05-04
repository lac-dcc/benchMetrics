module func5;
import program_d;

array_t* func5(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array121;
   if (pCounter > 0) {
      array121 = vars.data[--pCounter];
      array121.refC++;
      DEBUG_COPY(array121.id);
   } else {
      array121 = cast(array_t*)malloc(array_t.sizeof);
      array121.size = 506;
      array121.refC = 1;
      array121.id = 121;
      array121.data = cast(uint*)malloc(array121.size*uint.sizeof);
      memset(array121.data, 0, array121.size*uint.sizeof);
      DEBUG_NEW(array121.id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
   params0.data[0] = array121;
   array_t* array122 = func10(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array122.id);
   free(params0.data);
   uint loop36 = 0;
   uint loopLimit36 = (50)/3 + 1;
   for(; loop36 < loopLimit36; loop36++) {
      for (int i = 0; i < array121.size; i++) {
         array121.data[i]++;
      }
   }
   for (int i = 0; i < array121.size; i++) {
      if (array121.data[i] == 28) { 
         return array121;
      }
   }
   array121.refC--;
   if(array121.refC == 0) {
      free(array121.data);
      free(array121);
      DEBUG_FREE(array121.id);
   }
   return array122;
}

