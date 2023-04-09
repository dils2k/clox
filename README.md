# Lox language

Example:
```kotlin
fun first() {
  var a = 1;
  second();
  var b = 2;
  second();
}

fun second() {
  var c = 3;
  var d = 4;
}

first();

var x = 3;
{
  var x = 2;
}

print x;


for (var i = 0; i < 10; i = i + 1) {
  print "#" + i;
}
```