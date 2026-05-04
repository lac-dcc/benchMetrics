module func15;
import program_d;

array_t* func15(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array177;
   if (pCounter > 0) {
      array177 = vars.data[--pCounter];
      array177.refC++;
      DEBUG_COPY(array177.id);
   } else {
      array177 = cast(array_t*)malloc(array_t.sizeof);
      array177.size = 338;
      array177.refC = 1;
      array177.id = 177;
      array177.data = cast(uint*)malloc(array177.size*uint.sizeof);
      memset(array177.data, 0, array177.size*uint.sizeof);
      DEBUG_NEW(array177.id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
   params0.data[0] = array177;
   array_t* array178 = func18(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array178.id);
   free(params0.data);
   uint loop51 = 0;
   uint loopLimit51 = (50)/2 + 1;
   for(; loop51 < loopLimit51; loop51++) {
      for (int i = 0; i < array177.size; i++) {
         array177.data[i]++;
      }
   }
   for (int i = 0; i < array177.size; i++) {
      if (array177.data[i] == 17) { 
         return array177;
      }
   }
   array178.refC--;
   if(array178.refC == 0) {
      free(array178.data);
      free(array178);
      DEBUG_FREE(array178.id);
   }
   return array177;
}

