# Lox language

Example:
```kotlin
fun makeCounter() {
  var a = 0;
  fun count() {
    a = a + 1;
    return a;
  }
  return count;
}

var count = makeCounter();
print count();
print count();
print count();
```

VM's instruction set is defined in [chunk.h](chunk.h)
