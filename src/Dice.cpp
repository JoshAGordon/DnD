#include "include/Dice.h"

Dice::Dice(uint_fast8_t sides)
{
    _sides = sides;
    _udist = std::uniform_int_distribution<rng_type::result_type>(0, _sides);
    rng_type::result_type const seedval = _getSeed();
    _rng.seed(seedval);
}

uint_fast32_t Dice::roll()
{
    rng_type::result_type random_number = _udist(_rng);

    return random_number;
}

time_t Dice::_getSeed()
{
    return std::time(nullptr);
}