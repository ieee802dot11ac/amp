#include "../common.h" // ?????
#include "PrnStream.h"

INCLUDE_ASM(const s32, "utl/PrnStream", func_0029E0A8);
INCLUDE_ASM(const s32, "utl/PrnStream", func_0029E100);
INCLUDE_ASM(const s32, "utl/PrnStream", func_0029E128);
INCLUDE_ASM(const s32, "utl/PrnStream", func_0029E170);
INCLUDE_ASM(const s32, "utl/PrnStream", Printf__9PrnStreamPCce);
INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreamc);
INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreams);
INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreami);

INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreamUc);
/*PrnStream& PrnStream::operator<<(unsigned char c) {
    Printf("%u", c);
}*/

INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreamUs);
/*PrnStream& PrnStream::operator<<(unsigned short s) {
    Printf("%hu", s);
}*/

INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreamUi);
/*PrnStream& PrnStream::operator<<(unsigned int i) {
    Printf("%u", i);
}*/

INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreamUx);
INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreamf);
INCLUDE_ASM(const s32, "utl/PrnStream", func_0029E408);

//INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreamPCc);
PrnStream& PrnStream::operator<<(const char* c) {
    Print(c);
    return *this;
}

//INCLUDE_ASM(const s32, "utl/PrnStream", __ls__9PrnStreamb);
PrnStream& PrnStream::operator<<(bool b) {
    Print(b ? "true" : "false");
    return *this;
}

//INCLUDE_ASM(const s32, "utl/PrnStream", Space__9PrnStreami);
void PrnStream::Space(int i) {
    if (i != 0) {
        while (true) {
            i--;
            Print(" ");
            if (i == 0) break;
        }   
    }
}
