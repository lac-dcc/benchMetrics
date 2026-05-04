module func23;
import program_d;

array_t* func23(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array45;
   if (pCounter > 0) {
      array45 = vars.data[--pCounter];
      array45.refC++;
      DEBUG_COPY(array45.id);
   } else {
      array45 = cast(array_t*)malloc(array_t.sizeof);
      array45.size = 555;
      array45.refC = 1;
      array45.id = 45;
      array45.data = cast(uint*)malloc(array45.size*uint.sizeof);
      memset(array45.data, 0, array45.size*uint.sizeof);
      DEBUG_NEW(array45.id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
   params0.data[0] = array45;
   array_t* array46 = func28(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array46.id);
   free(params0.data);
   uint loop15 = 0;
   uint loopLimit15 = (50)/4 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      for (int i = 0; i < array45.size; i++) {
         array45.data[i]++;
      }
   }
   for (int i = 0; i < array45.size; i++) {
      if (array45.data[i] == 41) { 
         return array45;
      }
   }
   array46.refC--;
   if(array46.refC == 0) {
      free(array46.data);
      free(array46);
      DEBUG_FREE(array46.id);
   }
   return array45;
}

