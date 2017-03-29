#ifndef __KECCAKTESTVECTORS__
#define __KECCAKTESTVECTORS__

#include "../datadigest.h"

// Test vectors available at <http://www.di-mgt.com.au/sha_testvectors.html>
// not sure how they got those results

static const std::vector <DataDigest> KECCAK_224_TEST_VECTORS = {
    std::make_tuple("",  "f71837502ba8e10837bdd8d365adb85591895602fc552b48b7390abd"),
    std::make_tuple("0", "860e3ec314c5cbf19c1a4314e9ea8cb85cecd18bd850b42f5c6f2a07"),
};

static const std::vector <DataDigest> KECCAK_256_TEST_VECTORS = {
    std::make_tuple("",  "C5D2460186F7233C927E7DB2DCC703C0E500B653CA82273B7BFAD8045D85A470"),
    std::make_tuple("0", "C3E5CB55999EEFF4E07B7EFFEC77582D0A5A11A94FC268A872493099273992E1"),
};

static const std::vector <DataDigest> KECCAK_384_TEST_VECTORS = {
    std::make_tuple("",  "2C23146A63A29ACF99E73B88F8C24EAA7DC60AA771780CCC006AFBFA8FE2479B2DD2B21362337441AC12B515911957FF"),
    std::make_tuple("0", "4C6D164043571A32E169A527CA3503EA391BF91F22287215DF75EA243D53A0D042BC66EFE2956D8606A24F39E255A081"),
};

static const std::vector <DataDigest> KECCAK_512_TEST_VECTORS = {
    std::make_tuple("",  "0EAB42DE4C3CEB9235FC91ACFFE746B29C29A8C366B7C60E4E67C466F36A4304C00FA9CAF9D87976BA469BCBE06713B435F091EF2769FB160CDAB33D3670680E"),
    std::make_tuple("0", "7D9025BB145A0814083E934BAA80EDE67322651DE52062BF9EB93623C37EFC74C62240CF8539107F9210C1E1126F79CBAEDA6B82B4A8CE6821589C403FA76B9A"),
};

#endif