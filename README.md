# The DM Isn't Your Friend
> A game for my Digital Media & Interaction class

## Controls
| Action                  | Keyboard/Mouse Input       | Controller Input |
|-------------------------|----------------------------|------------------|
| Walk                    | W/A/S/D                    | Left Joystick    |
| Look Around             | Mouse                      | Right Joystick   |
| Attack                  | Mouse 1                    | Right Trigger    |
| Jump                    | Space                      | A button         |
| Print Inventory (Debug) | I                          | N/A              |
| Use First Item          | R (temporary place holder) | N/A              |
| Interact                | E                          | X button         |
| Minimap                 | Q                          | Left Bumper      |
| Toggle Debug Curves     | F                          | N/A              |

## Info
### Minimap
Opened by pressing Q/Left Bumper. Will show a top down view of the player's current position. Currently there is no icon for the player this will be fixed in later versions.

### Items
- Bottles w/ red contense are health potions
- Sword is an item that dmages entities
- Blue sword is a version of the sword that does more damage. It currently does not carry between levels and will turn into a regular sword. This will be fixed later.

### Level Objects
#### Chests
Brown box-like object. They will spawn items when interacted with by the player and give them to the player. The items will follow a bezier curve and then follow physics once the curve is completed.

### Misc.
- Green boxes are level transitions
- Red hitboxes damages entities
