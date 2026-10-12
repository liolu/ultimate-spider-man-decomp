#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_02088724[];
// clang-format off
asm void func_020888a4(void) {
    ldr r1, =0x78e
    mov r2, #0xc
    str r2, [r0, #0xc]
    add r2, r0, r1
    mov r1, #0x1
    ldr ip, =func_02088724
    swpb r1, r1, [r2]
    bx ip
}
// clang-format on
