# The DM Isn't Your Friend
> A game for my Digital Media & Interaction class

## Controls
| Action              | Keyboard/Mouse Input       | Controller Input |
|---------------------|----------------------------|------------------|
| Walk                | W/A/S/D                    | Left Joystick    |
| Look Around         | Mouse                      | Right Joystick   |
| Attack              | Mouse 1                    | Right Trigger    |
| Jump                | Space                      | A button         |
| Show Inventory      | I                          | N/A              |
| Use First Item      | R (temporary place holder) | N/A              |
| Interact            | E                          | X button         |
| Minimap             | Q                          | Left Bumper      |
| Toggle Debug Curves | F                          | N/A              |

## Info
### Minimap
Opened by pressing Q/Left Bumper. Will show a top down view of the player's current position. Currently there is no icon for the player this will be fixed in later versions.

### Items
#### Bottles
- Bottles w/ red contense are health potions.
- Bottles w/ blue contense are armor potions and grant a +1 to armor for a short time.
- Bottles w/ green contense are speed potions. They will increase the player's max walk speed by x2 and this effect does stack.
#### Weapons
- Sword is an item that dmages entities
- Currupted sword is a version of the sword that does more damage.
#### Armor
- The shield grants a +1 to armor while it is held.

### Level Objects
#### Chests
Brown box-like object. They will spawn items when interacted with by the player and give them to the player. The items will follow a bezier curve and then follow physics once the curve is completed.

### Misc.
- Clear wiggling cubes are level transitions
- Red hitboxes damages entities
