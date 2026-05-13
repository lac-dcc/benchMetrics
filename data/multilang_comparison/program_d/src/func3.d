module func3;
import program_d;

array_t* func3(array_t_param* vars, int loopsFactor) {
   size_t pCounter = vars.size;
   array_t* array195;
   if (pCounter > 0) {
      array195 = vars.data[--pCounter];
      array195.refC++;
      DEBUG_COPY(array195.id);
   } else {
      array195 = cast(array_t*)malloc(array_t.sizeof);
      array195.size = 57;
      array195.refC = 1;
      array195.id = 195;
      array195.data = cast(uint*)malloc(array195.size*uint.sizeof);
      memset(array195.data, 0, array195.size*uint.sizeof);
      DEBUG_NEW(array195.id);
   }
   array_t_param params0;
   params0.size = 1;
   params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
   params0.data[0] = array195;
   array_t* array196 = func6(&params0, get_path(), loopsFactor);
   DEBUG_RETURN(array196.id);
   free(params0.data);
   uint loop56 = 0;
   uint loopLimit56 = (50)/2 + 1;
   for(; loop56 < loopLimit56; loop56++) {
      for (int i = 0; i < array196.size; i++) {
         array196.data[i]++;
      }
   }
   for (int i = 0; i < array195.size; i++) {
      if (array195.data[i] == 91) { 
         return array195;
      }
   }
   array195.refC--;
   if(array195.refC == 0) {
      free(array195.data);
      free(array195);
      DEBUG_FREE(array195.id);
   }
   return array196;
}

