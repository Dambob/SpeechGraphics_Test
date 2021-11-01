# SpeechGraphics_Test

## OptionalContainer

### Features:
- Container Template class for optional values
- Stores value and flag to confirm value is set
- Gets value or specified "empty" value of same type
- Thread saftey via mutex and scoped lock

## BomberMan3D
 
### Features:
- Topdown View
- Maps
  - Menu map
  - Game map
  - Template game map
- Local co-op on single keyboard
- Bombs
  - Explode after 3 seconds
  - Consumes 1 ammo from player
  - Ammo restored when bomb explodes
  - Bomb blasts on X/Y directions
  - Bombs hit by blasts explode instantly
- Powerups
  - Bomb range
  - More bombs
  - Increase run speed
  - Remote controlled bombs 
- Walls and Destructible walls
- Saving
  - Game Instance saved between rounds
  - Instance saved to disk on exit.
  - Instance loaded from disk when Load option is used in menu
  - Instance cleared when New option is used in menu
- Win State
  - When no players are alive or timer runs out, draw
  - When 1 player is alive and no explosions are remaining, it's a win for that player

### Controls:
- Player 1
  - Up - W
  - Down - S
  - Left - A
  - Right - D
  - Place Bomb - E
  - Detonate Bomb (remote) - R
- Player 2
  - Up - Up Arrow
  - Down - Down Arrow
  - Left - Left Arrow
  - Right - Right Arrow
  - Place Bomb - Right Control
  - Detonate Bomb (remote) - Right Shift

### Known Issues:
- Inconsistent error when running in PIE mode ([#2][i2])

[i2]: https://github.com/Dambob/SpeechGraphics_Test/issues/2
