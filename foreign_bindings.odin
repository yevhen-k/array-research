package example

import "core:c"

// when ODIN_OS == .Linux do foreign import cv "array.a"
// when ODIN_OS == .Linux do foreign import cv "libarray.so"
when ODIN_OS == .Linux do foreign import cv "foreign-bindings/array.a"


Matsize :: struct #packed {
	len:  c.int,
	data: [^]c.int,
}

@(default_calling_convention = "c")
foreign cv {
	demo1 :: proc(len: ^c.int) -> [^]c.int ---
	demo2 :: proc() -> Matsize ---
}
