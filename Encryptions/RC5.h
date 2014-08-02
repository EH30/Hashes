#ifndef __RC5__
#define __RC5__

#include <algorithm>
#include <cmath>
#include <vector>

#include "../common/cryptomath.h"
#include "../common/includes.h"
#include "SymAlg.h"

#include "RC_PQ.h"

class RC5 : public SymAlg{
    private:
        uint64_t w, r, b;
        uint64_t mod;
        std::vector <uint64_t> S;

    public:
        RC5();
        RC5(const std::string & KEY, const uint64_t & W = 32, const uint64_t & R = 12, const uint64_t & B = 16);
        void setkey(std::string KEY, const uint64_t & W = 32, const uint64_t & R = 12, const uint64_t & B = 16);
        std::string encrypt(const std::string & DATA);
        std::string decrypt(const std::string & DATA);
        unsigned int blocksize() const;
};
#endif
