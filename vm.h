#include "chunk.h"
#include "value.h"
#include "table.h"

#ifndef clox_vm_h
#define clox_vm_h

#include "chunk.h"

#define STACK_MAX 256

typedef struct {
  Chunk* chunk;
  uint8_t* ip;
  Value stack[STACK_MAX];
  Value* stackTop;
  Obj* objects;
  Table strings;
} VM;

extern VM vm;

void initVM();
void freeVM();

typedef enum {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR
} InterpretResult;

InterpretResult interpret(const char* source);
void push(Value value);
Value pop();

#endif
