#include "move.h"

namespace ELSA
{

Move::Move(Square from, Square to, u16 nature): encoded((from << 10) | (to << 4) | nature) {}

Square Move::source() const
{
    return static_cast<Square>((encoded >> 10) & 0x3fu);
}

Square Move::target() const
{
    return static_cast<Square>((encoded >> 4) & 0x3fu);
}

Square Move::nature() const
{
    return static_cast<Square>(encoded & 0xfu);
}

}; // namespace