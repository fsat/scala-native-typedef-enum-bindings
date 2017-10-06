# Scala Native: binding typedef enum

This is a small reproducer to show difficulty in binding C's `typedef enum` in Scala Native.

Given a relatively simple enum:

```
typedef enum {
  CACTUS = 0,
  PINE = 1
} Plant;
```

and the following binding:

```
class Plant(val value: CInt) extends AnyVal
val CACTUS: Plant = native.extern
```

calling `nativeLink` results in the following error:

```
[error] Undefined symbols for architecture x86_64:
[error]   "_CACTUS", referenced from:
[error]       _test.Main$::main_scala.scalanative.runtime.ObjectArray_unit in test.ll.o
[error] ld: symbol(s) not found for architecture x86_64
[error] clang: error: linker command failed with exit code 1 (use -v to see invocation)
```

To reproduce the error above please follow these steps.

## Build the C library

Execute the following command:

```bash
$ sh c-compile.sh
```

This will generate a shared object located in `enumfoo/target/libenumfoo.so`.

To verify if the command is compiled successfully:

```bash
$ sh c-run.sh
```

This will create output similar to:

```bash
$ sh c-run.sh
enum: Plant - name: CACTUS
enum: Magic - name: MAGIC_RABBIT
```

# Create Scala Native binding

Execute the following SBT command:

```bash
$ sbt nativeLink
```

You will find the following error:

```
[error] Undefined symbols for architecture x86_64:
[error]   "_CACTUS", referenced from:
[error]       _test.Main$::main_scala.scalanative.runtime.ObjectArray_unit in test.ll.o
[error] ld: symbol(s) not found for architecture x86_64
[error] clang: error: linker command failed with exit code 1 (use -v to see invocation)
```