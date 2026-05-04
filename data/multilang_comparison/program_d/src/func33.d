module func33;
import program_d;

array_t* func33(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array85;
   if (pCounter > 0) {
      array85 = vars.data[--pCounter];
      array85.refC++;
      DEBUG_COPY(array85.id);
   } else {
      array85 = cast(array_t*)malloc(array_t.sizeof);
      array85.size = 163;
      array85.refC = 1;
      array85.id = 85;
      array85.data = cast(uint*)malloc(array85.size*uint.sizeof);
      memset(array85.data, 0, array85.size*uint.sizeof);
      DEBUG_NEW(array85.id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
   params0.data[0] = array85;
   array_t* array86 = func36(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array86.id);
   free(params0.data);
   uint loop26 = 0;
   uint loopLimit26 = (50)/3 + 1;
   for(; loop26 < loopLimit26; loop26++) {
      for (int i = 0; i < array86.size; i++) {
         array86.data[i]++;
      }
   }
   for (int i = 0; i < array85.size; i++) {
      if (array85.data[i] == 59) { 
         return array85;
      }
   }
   array85.refC--;
   if(array85.refC == 0) {
      free(array85.data);
      free(array85);
      DEBUG_FREE(array85.id);
   }
   return array86;
}

