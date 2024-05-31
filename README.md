# Inconsistency in C and Odin

## C

```bash
cd foreign-bindings
make run
# >>> MatSize: len=2, data: 0, 1, 
# >>> MatSize2: len=2, data: 0, 1,
```

## Odin

```bash
make run
# >>> MatSize: len=2, sizes=[0, 1]
# >>> MatSize2: Matsize{len = 0, data = <nil>}
```

For some reason, `MatSize2.data` is `nil`, but expected to be initialized memory.