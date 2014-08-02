#ifndef __TEA__
#define __TEA__

#include "../common/includes.h"
#include "SymAlg.h"

class TEA : public SymAlg{
    private:
        bool keyset;
        uint32_t delta, cycles, total, key[4];

    public:
        TEA();
        TEA(const std::string & KEY, const uint32_t & ROUNDS = 64, const uint32_t & DELTA = 0x9e3779b9, const uint32_t & TOTAL = 0xc6ef3720);
        void setkey(const std::string & KEY, const uint32_t & ROUNDS = 64, const uint32_t & DELTA = 0x9e3779b9, const uint32_t & TOTAL = 0xc6ef3720);
        std::string encrypt(const std::string & DATA);
        std::string decrypt(const std::string & DATA);
        unsigned int blocksize() const;
};
#endif
