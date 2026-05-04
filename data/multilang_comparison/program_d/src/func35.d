module func35;
import program_d;

array_t* func35(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array30;
   if (pCounter > 0) {
      array30 = vars.data[--pCounter];
      array30.refC++;
      DEBUG_COPY(array30.id);
   } else {
      array30 = cast(array_t*)malloc(array_t.sizeof);
      array30.size = 756;
      array30.refC = 1;
      array30.id = 30;
      array30.data = cast(uint*)malloc(array30.size*uint.sizeof);
      memset(array30.data, 0, array30.size*uint.sizeof);
      DEBUG_NEW(array30.id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
   params0.data[0] = array30;
   array_t* array31 = func42(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array31.id);
   free(params0.data);
   uint loop10 = 0;
   uint loopLimit10 = (50)/4 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      for (int i = 0; i < array30.size; i++) {
         array30.data[i]++;
      }
   }
   for (int i = 0; i < array31.size; i++) {
      if (array31.data[i] == 65) { 
         return array31;
      }
   }
   array30.refC--;
   if(array30.refC == 0) {
      free(array30.data);
      free(array30);
      DEBUG_FREE(array30.id);
   }
   return array31;
}

