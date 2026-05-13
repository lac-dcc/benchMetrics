module program_d;
public import core.stdc.stdio;
public import core.stdc.stdlib;
public import core.stdc.string;
public import std.conv : to;
public import std.process : environment;

public import path : get_path;
public import func0 : func0;
public import func10 : func10;
public import func11 : func11;
public import func28 : func28;
public import func29 : func29;
public import func40 : func40;
public import func41 : func41;
public import func30 : func30;
public import func42 : func42;
public import func43 : func43;
public import func44 : func44;
public import func45 : func45;
public import func34 : func34;
public import func31 : func31;
public import func35 : func35;
public import func22 : func22;
public import func23 : func23;
public import func36 : func36;
public import func37 : func37;
public import func38 : func38;
public import func39 : func39;
public import func32 : func32;
public import func12 : func12;
public import func24 : func24;
public import func25 : func25;
public import func26 : func26;
public import func27 : func27;
public import func33 : func33;
public import func16 : func16;
public import func13 : func13;
public import func17 : func17;
public import func4 : func4;
public import func5 : func5;
public import func18 : func18;
public import func19 : func19;
public import func20 : func20;
public import func21 : func21;
public import func14 : func14;
public import func6 : func6;
public import func7 : func7;
public import func8 : func8;
public import func9 : func9;
public import func15 : func15;
public import func2 : func2;
public import func1 : func1;
public import func3 : func3;

struct array_t {
   uint* data;
   size_t size;
   size_t refC;
   int id;
}
struct array_t_param {
   array_t** data;
   size_t size;
}

void DEBUG_NEW(int id)    { debug printf("[NEW]\t\tId %d created\n", id); }
void DEBUG_COPY(int id)   { debug printf("[COPY]\t\tId %d copied\n", id); }
void DEBUG_RETURN(int id) { debug printf("[RETURN]\tId %d returned\n", id); }
void DEBUG_FREE(int id)   { debug printf("[FREE]\t\tId %d freed\n", id); }

static ulong benchgen_state = 1;

void benchgen_srand(ulong seed) {
    benchgen_state = seed;
}

ulong benchgen_rand() {
    benchgen_state = 6364136223846793005UL * benchgen_state + 1UL;
    return benchgen_state >> 32;
}

int main(string[] args) {
   int loopsFactor = 100;
   benchgen_srand(0);
   for (int i = 1; i < args.length; i++) {
      if (args[i] == "-path-seed") {
         i++;
         if (i < args.length) {
            benchgen_srand(to!ulong(args[i]));
         }
      }
      else if (args[i] == "-loops-factor") {
         i++;
         if (i < args.length) {
            loopsFactor = to!int(args[i]);
         }
      }
   }
   uint loop0 = 0;
   uint loopLimit0 = (50)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      array_t_param params0;
      params0.size = 0;
      params0.data = cast(array_t**)malloc(params0.size*(array_t*).sizeof);
      array_t* array0 = func0(&params0, get_path(), loopsFactor);
      DEBUG_RETURN(array0.id);
      free(params0.data);
      array_t* array156;
      array156 = cast(array_t*)malloc(array_t.sizeof);
      array156.size = 42;
      array156.refC = 1;
         array156.id = 156;
      array156.data = cast(uint*)malloc(array156.size*uint.sizeof);
      memset(array156.data, 0, array156.size*uint.sizeof);
      DEBUG_NEW(array156.id);
      if(get_path() & 1) {
         if(get_path() & 1) {
            array_t* array157;
            array157 = cast(array_t*)malloc(array_t.sizeof);
            array157.size = 360;
            array157.refC = 1;
               array157.id = 157;
            array157.data = cast(uint*)malloc(array157.size*uint.sizeof);
            memset(array157.data, 0, array157.size*uint.sizeof);
            DEBUG_NEW(array157.id);
            uint loop46 = 0;
            uint loopLimit46 = (50)/2 + 1;
            for(; loop46 < loopLimit46; loop46++) {
               for (int i = 0; i < array0.size; i++) {
                  array0.data[i]--;
               }
               for (int i = 0; i < array0.size; i++) {
                  if (array0.data[i] == 61) { 
                     array0.data[i] += 61;
                  }
               }
            }
            array_t_param params1;
            params1.size = 3;
            params1.data = cast(array_t**)malloc(params1.size*(array_t*).sizeof);
            params1.data[0] = array0;
            params1.data[1] = array156;
            params1.data[2] = array157;
            array_t* array158 = func6(&params1, get_path(), loopsFactor);
            DEBUG_RETURN(array158.id);
            free(params1.data);
            array158.refC--;
            if(array158.refC == 0) {
               free(array158.data);
               free(array158);
               DEBUG_FREE(array158.id);
            }
            array157.refC--;
            if(array157.refC == 0) {
               free(array157.data);
               free(array157);
               DEBUG_FREE(array157.id);
            }
         }
         else {
            array_t_param params1;
            params1.size = 2;
            params1.data = cast(array_t**)malloc(params1.size*(array_t*).sizeof);
            params1.data[0] = array0;
            params1.data[1] = array156;
            array_t* array182 = func2(&params1, get_path(), loopsFactor);
            DEBUG_RETURN(array182.id);
            free(params1.data);
            array182.refC--;
            if(array182.refC == 0) {
               free(array182.data);
               free(array182);
               DEBUG_FREE(array182.id);
            }
         }
      }
      else {
         array_t_param params1;
         params1.size = 2;
         params1.data = cast(array_t**)malloc(params1.size*(array_t*).sizeof);
         params1.data[0] = array0;
         params1.data[1] = array156;
         array_t* array192 = func1(&params1, get_path(), loopsFactor);
         DEBUG_RETURN(array192.id);
         free(params1.data);
         array192.refC--;
         if(array192.refC == 0) {
            free(array192.data);
            free(array192);
            DEBUG_FREE(array192.id);
         }
      }
      array156.refC--;
      if(array156.refC == 0) {
         free(array156.data);
         free(array156);
         DEBUG_FREE(array156.id);
      }
      array0.refC--;
      if(array0.refC == 0) {
         free(array0.data);
         free(array0);
         DEBUG_FREE(array0.id);
      }
   }
   return 0;
}

