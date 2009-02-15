// Copyright (c) 2005-2009 Jay Berkenbilt
//
// This file is part of qpdf.  This software may be distributed under
// the terms of version 2 of the Artistic License which may be found
// in the source distribution.  It is provided "as is" without express
// or implied warranty.

#ifndef __PL_DISCARD_HH__
#define __PL_DISCARD_HH__

// This pipeline discards its output.  It is an end-of-line pipeline
// (with no next).

// This pipeline is reusable; i.e., it is safe to call write() after
// calling finish().

#include <qpdf/Pipeline.hh>

class Pl_Discard: public Pipeline
{
  public:
    Pl_Discard();
    virtual ~Pl_Discard();
    virtual void write(unsigned char*, int);
    virtual void finish();
};

#endif // __PL_DISCARD_HH__
