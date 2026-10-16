/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_020a0b40(void);
extern void func_020a04d0(int param);
extern void func_020a01a8(int a, int b, int c, int d);
extern volatile int data_02155f50;
extern int data_02155f54;
int func_020a0864(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_020a0b40()) {
        return 1;
    }
    data_02155f50 = 0;
    func_020a04d0(0x3006000);
    p = &data_02155f50;
    while (!*p) {
    }
    *p            = 0;
    data_02155f54 = 0;
    func_020a01a8(0, 2, 0, 0);
    func_020a04d0((a & 0xff) | 0x2006100);
    func_020a04d0((b & 0xffff) | 0x1010000);
    return 0;
}
