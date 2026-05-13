import std/[os, strutils]

when defined(debug):
  template debugNew*(id: int) = echo "[NEW]\t\tId ", id, " created"
  template debugCopy*(id: int) = echo "[COPY]\t\tId ", id, " copied"
  template debugReturn*(id: int) = echo "[RETURN]\tId ", id, " returned"
  template debugFree*(id: int) = echo "[FREE]\t\tId ", id, " freed"
else:
  template debugNew*(id: int) = discard
  template debugCopy*(id: int) = discard
  template debugReturn*(id: int) = discard
  template debugFree*(id: int) = discard

type
  ArrayT* = object
    data*: ptr UncheckedArray[uint32]
    size*: int
    refC*: int
    id*: int
  ArrayTParam* = object
    data*: ptr UncheckedArray[ptr ArrayT]
    size*: int

var benchgenState: uint64 = 1

proc benchgenSrand*(seed: uint64) =
   benchgenState = seed

proc benchgenRand*(): uint64 =
   benchgenState = 6364136223846793005'u64 * benchgenState + 1'u64
   return benchgenState shr 32


proc func0*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func10*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func11*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func28*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func29*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func46*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func47*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func58*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func59*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func48*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func60*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func61*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func62*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func63*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func52*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func49*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func53*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func40*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func41*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func54*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func55*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func56*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func57*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func50*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func30*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func42*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func43*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func44*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func45*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func51*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func34*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func31*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func35*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func22*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func23*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func36*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func37*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func38*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func39*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func32*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func12*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func24*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func25*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func26*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func27*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func33*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func16*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func13*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func17*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func4*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func5*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func18*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func19*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func20*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func21*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func14*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func6*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func7*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func8*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func9*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func15*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT
proc func2*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func1*(vars: ptr ArrayTParam, PATH0: uint64, loopsFactor: cint): ptr ArrayT
proc func3*(vars: ptr ArrayTParam, loopsFactor: cint): ptr ArrayT

include "path"
include "func3"
include "func1"
include "func2"
include "func15"
include "func9"
include "func8"
include "func7"
include "func6"
include "func14"
include "func21"
include "func20"
include "func19"
include "func18"
include "func5"
include "func4"
include "func17"
include "func13"
include "func16"
include "func33"
include "func27"
include "func26"
include "func25"
include "func24"
include "func12"
include "func32"
include "func39"
include "func38"
include "func37"
include "func36"
include "func23"
include "func22"
include "func35"
include "func31"
include "func34"
include "func51"
include "func45"
include "func44"
include "func43"
include "func42"
include "func30"
include "func50"
include "func57"
include "func56"
include "func55"
include "func54"
include "func41"
include "func40"
include "func53"
include "func49"
include "func52"
include "func63"
include "func62"
include "func61"
include "func60"
include "func48"
include "func59"
include "func58"
include "func47"
include "func46"
include "func29"
include "func28"
include "func11"
include "func10"
include "func0"

when isMainModule:
   var loopsFactor: cint = 100
   benchgenSrand(0)
   var i = 1
   while i <= paramCount():
      if paramStr(i) == "-path-seed":
         i += 1
         if i <= paramCount():
            benchgenSrand(uint64(parseInt(paramStr(i))))
      elif paramStr(i) == "-loops-factor":
         i += 1
         if i <= paramCount():
            loopsFactor = cint(parseInt(paramStr(i)))
      i += 1
   let loopLimit0 = (50) div (1) + 1
   for loop0 in 0 ..< loopLimit0:
      discard
      var params0: ArrayTParam
      params0.size = 0
      params0.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params0.size * sizeof(ptr ArrayT)))
      var array0: ptr ArrayT = func0(addr params0, getPath(), loopsFactor)
      debugReturn(array0.id)
      dealloc(params0.data)
      var array252: ptr ArrayT
      array252 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
      array252.size = 805
      array252.refC = 1
      array252.id = 252
      array252.data = cast[ptr UncheckedArray[uint32]](alloc(array252.size * sizeof(uint32)))
      zeroMem(array252.data, array252.size * sizeof(uint32))
      debugNew(array252.id)
      if (getPath() and 1) != 0:
         discard
         if (getPath() and 1) != 0:
            discard
            var array253: ptr ArrayT
            array253 = cast[ptr ArrayT](alloc(sizeof(ArrayT)))
            array253.size = 882
            array253.refC = 1
            array253.id = 253
            array253.data = cast[ptr UncheckedArray[uint32]](alloc(array253.size * sizeof(uint32)))
            zeroMem(array253.data, array253.size * sizeof(uint32))
            debugNew(array253.id)
            let loopLimit73 = (50) div (2) + 1
            for loop73 in 0 ..< loopLimit73:
               discard
               for i in 0 ..< array253.size:
                  dec array253.data[i]
               for i in 0 ..< array252.size:
                  if array252.data[i] == 17:
                     array252.data[i] += uint32(17)
            var params1: ArrayTParam
            params1.size = 3
            params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
            params1.data[0] = array0
            params1.data[1] = array252
            params1.data[2] = array253
            var array254: ptr ArrayT = func6(addr params1, getPath(), loopsFactor)
            debugReturn(array254.id)
            dealloc(params1.data)
            dec array254.refC
            if array254.refC == 0:
               dealloc(array254.data)
               dealloc(array254)
               debugFree(array254.id)
            dec array253.refC
            if array253.refC == 0:
               dealloc(array253.data)
               dealloc(array253)
               debugFree(array253.id)
         else:
            discard
            var params1: ArrayTParam
            params1.size = 2
            params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
            params1.data[0] = array0
            params1.data[1] = array252
            var array278: ptr ArrayT = func2(addr params1, getPath(), loopsFactor)
            debugReturn(array278.id)
            dealloc(params1.data)
            dec array278.refC
            if array278.refC == 0:
               dealloc(array278.data)
               dealloc(array278)
               debugFree(array278.id)
      else:
         discard
         var params1: ArrayTParam
         params1.size = 2
         params1.data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(params1.size * sizeof(ptr ArrayT)))
         params1.data[0] = array0
         params1.data[1] = array252
         var array288: ptr ArrayT = func1(addr params1, getPath(), loopsFactor)
         debugReturn(array288.id)
         dealloc(params1.data)
         dec array288.refC
         if array288.refC == 0:
            dealloc(array288.data)
            dealloc(array288)
            debugFree(array288.id)
      dec array252.refC
      if array252.refC == 0:
         dealloc(array252.data)
         dealloc(array252)
         debugFree(array252.id)
      dec array0.refC
      if array0.refC == 0:
         dealloc(array0.data)
         dealloc(array0)
         debugFree(array0.id)
   discard 0
   discard 1

