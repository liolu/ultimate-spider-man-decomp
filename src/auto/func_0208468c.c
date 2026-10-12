#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_020843b0[];
// clang-format off
asm void func_0208468c(void) {
    ldr r2, =0x24a
    add r3, r0, #0x8000
    cmp r1, #0x7f
    movhs r1, #0x7f
    add r2, r3, r2
    swpb r1, r1, [r2]
    add r2, r0, #0x8000
    ldrb r3, [r3, #0x24a]
    ldr r1, =0x24a
    ldr ip, =func_020843b0
    cmp r3, #0x0
    moveq r3, #0x0
    add r2, r2, r1
    swpb r1, r3, [r2]
    bx ip
}
// clang-format on
