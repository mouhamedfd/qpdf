// Write bits into a bit stream.  See BitStream for reading.

#ifndef BITWRITER_HH
#define BITWRITER_HH

#include <qpdf/DLL.h>

class Pipeline;

class BitWriter
{
  public:
    // Write bits to the pipeline.  It is the caller's responsibility
    // to eventually call finish on the pipeline.
    QPDF_DLL
    BitWriter(Pipeline* pl);
    QPDF_DLL
    void writeBits(unsigned long long val, unsigned int bits);
    QPDF_DLL
    void writeBitsSigned(long long val, unsigned int bits);
    // Force any partial byte to be written to the pipeline.
    QPDF_DLL
    void flush();

  private:
    Pipeline* pl;
    unsigned char ch;
    unsigned int bit_offset;
};

#endif // BITWRITER_HH
