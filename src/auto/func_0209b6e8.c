/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_FlushCommand from https://github.com/RonyxDumb/mkds src/arm9/020211e4_Sound_FlushCommand.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *func_0209b98c(u32 flags);
extern BOOL func_0209b6e8(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_0209560c(void);
extern OSIntrMode func_02095620(OSIntrMode state);
extern void func_0209567c(u32 cycles);
extern void func_02094ea0(register const void *startAddr, register u32 nBytes);
extern s32 func_02096374(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_02152dc0[256];
extern struct SNDCommand *data_02152b00[8 + 1];
extern struct SNDCommand *data_02152ae4;
extern struct SNDCommand *data_02152ae8;
extern s32 data_02152af4;
extern s32 data_02152af8;
extern u32 data_02152afc;
extern void func_0209b454(void);
const struct SNDCommand *func_0209b98c(u32 flags);
BOOL func_0209b6e8(u32 flags) {
    OSIntrMode oldirq = func_0209560c();

    if (data_02152ae4 == ((void *) 0)) {
        (void) func_02095620(oldirq);
        return 1;
    }

    if (data_02152af8 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_02095620(oldirq);
            return 0;
        }

        do {
            (void) func_0209b98c(0x1);
        } while (data_02152af8 >= 8);
    }

    func_02094ea0(data_02152dc0, sizeof(data_02152dc0));

    s32 result = func_02096374(7, (u32) data_02152ae4, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_02095620(oldirq);
            return 0;
        }

        result = func_02096374(7, (u32) data_02152ae4, 0);
        while (result < 0) {
            (void) func_02095620(oldirq);
            func_0209567c(100);
            oldirq = func_0209560c();
            result = func_02096374(7, (u32) data_02152ae4, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_0209b454();
    }

    data_02152b00[data_02152af4] = data_02152ae4;

    if (++data_02152af4 > 8) {
        data_02152af4 = 0;
    }

    data_02152ae4 = ((void *) 0);
    data_02152ae8 = ((void *) 0);
    data_02152af8++;
    data_02152afc++;

    (void) func_02095620(oldirq);
    return 1;
}
void func_0209b454(void);
