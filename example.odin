package example

import "core:c"
import "core:c/libc"
import "core:fmt"


main :: proc() {
	sz_len: c.int
	sizes := demo1(&sz_len)
	defer libc.free(sizes)
	fmt.printfln(">>> MatSize: len=%d, sizes=%d", sz_len, sizes[:sz_len])

	mat_size2 := demo2()
	defer libc.free(mat_size2.data)
	fmt.printfln(">>> MatSize2: %v", mat_size2)

	fmt.println("DONE!")
}
