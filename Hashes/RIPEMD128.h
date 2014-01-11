/*
RIPEMD128.h
RIPEMD128 hash function
http://homes.esat.kuleuven.be/~bosselae/ripemd160.html

Copyright (c) 2013 Jason Lee

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef __RIPEMD128__
#define __RIPEMD128__

#include "../common/cryptomath.h"
#include "../common/includes.h"
#include "Hash.h"

#include "RIPEMD_Const.h"
#include "RIPEMD128_Const.h"

class RIPEMD128 : public Hash{
    private:
        uint32_t h0, h1, h2, h3;
        uint32_t F(const uint32_t & x, const uint32_t & y, const uint32_t & z, const uint8_t round);

        void run(const std::string & data, uint32_t & H0, uint32_t & H1, uint32_t & H2, uint32_t & H3);

    public:
        RIPEMD128(const std::string & data = "");
        void update(const std::string & data = "");
        std::string hexdigest();
        unsigned int blocksize();
        unsigned int digestsize();
};
#endif
