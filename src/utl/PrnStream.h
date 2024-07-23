#ifndef UTL_PRNSTREAM_H
#define UTL_PRNSTREAM_H

class PrnStream {
    public:
    PrnStream() { }
    virtual ~PrnStream() { }
    virtual void Print(const char*) = 0;

    void Printf(const char*, ...);
    void Space(int spaces);

    PrnStream& operator<<(unsigned char);
    PrnStream& operator<<(unsigned short);
    PrnStream& operator<<(unsigned int);
    PrnStream& operator<<(const char*);
    PrnStream& operator<<(bool);

    int unk_0x0;
    // vtbl @ 0x4
};

#endif // UTL_PRNSTREAM_H