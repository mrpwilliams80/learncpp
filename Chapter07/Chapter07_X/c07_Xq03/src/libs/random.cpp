#include "../hdrs/master.hpp"

int getRand()
{
    // instantiate random device
    static std::random_device rd;
    // seed sequence with random device (8 times)
    static std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
    // instantiate 32 bit Mersenne Twister using seed sequence
    static std::mt19937 mt{ ss };
    // generate standard distribution between 1 and 100
    static std::uniform_int_distribution hiLow {1, 100};

    return hiLow(mt);
}
