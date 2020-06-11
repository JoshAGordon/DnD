#include <cstdint>
#include <random>
#include <ctime>

typedef std::mt19937 rng_type;

class Dice 
{
private:
    uint_fast8_t _sides;
    std::uniform_int_distribution<rng_type::result_type> _udist;
    rng_type _rng; 

    static uint_fast8_t const _seed_count = 0;

    time_t _getSeed();

public:
    Dice(uint_fast8_t sides);
    uint_fast32_t roll();


};