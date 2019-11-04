# 10/23/2019
## Dropper Component 
"Dropper" component: Dropper component can be attached to any actor that has a chance to drop materials or equipment. Dropper equipment will be in charge of calculating how items to drop (each object) and how much each item is stacked with (each object has certain stack amount). Dropper component will have be responsible for spawning in the items as well and add an impulse to create more effects.

## Creating an enemy step
* Create a blueprint for enemy. there will be a sphere collision that will detect if the player is near. It will start shooting / attacking when in range.
* Create a collision for enemy to represent that the enemy's body.
* When a bullet_based blueprint hits the enemy it will recieve data of how much data it has taken. Reducing it's health.
* Add dropper componenet to enemy
* Enemy should drop equipment, gold, and/or experience.

Create a dungeon based on level depth.
Spawn harder enemies
Spawn more rare rocks to mine
Create a exit path

# 11/03/2019
## Interactive Object vs Item Object vs Data Object

## Item Base > Material/Consumable/Equipment
Item base is the parent class of 3 subclass:
* Material Item Base
* Consumable Item Base
* Equipment Item Base

Item base has the main functionality:
* Implementation of picking up the item
* The range you have to be in to pick up the item
* THe Item Information (S_Item)

### Material Item Base
Will have additional functionality
`EMPTY`

### Consumable Item Base
Will have additional functionality such as:
`EMPTY`

### Equipment Item Base
Will have additional functionality such as
* Equipment Category