# Gathering System

# Interactive Object:
An actor that can be `Interacted` with the player. <br/>
The Interactive Objects can be interacted based on what the player is holding and the quality tier.
* Data:
  * Required Tool: `Tool`
  * Required Tool-Tier: `Tier Number`
  * Item Objects: `List of Item Object`
  * Dropper Component: `Dropper Component`

__Required Tool__: What Tool required to be interacted with this Interactive Object.
__Required Tool-Tier__: What the tool tier has to be for the Interacted Object to be interacted.
__Item Objects__: A list of the possible item drops that can be dropped.
__Dropper Component__: The Dropper Components will be ONLY used for Interactive and Enemies. Dropper Component will calculate the random drop rate based on Player Skill Level and the Interactive Object itself.

# Item Object:
An actor that can be `picked up` by the player.
* Data:
  * Quantity
  * Item Info

__Quantity__: The number of Item object that is going to be dropped
__Item Info__: Item information data.

# Item information (DATA)
A `structure` that contains all the data that describes the item. This is our main data that will be passed around.
* Data:
  * Item name (TEXT)
  * Item description (TEXT)
  * Item category (E_Item_Category)
  * Item quantity (INT)
  * Item rarity (INT)
  * Item maxStack (INT)
  * Item icon (Texture 2D)

## Item Category Types (E_Item_Category)
__NEEDS ATTENTION__
* Material
* Consumable
* Equipment

## Equipment Category (E_Equipment_Category)
__NEEDS ATTENTION__
* Pickaxe
* Axe
* Sword
* GreatSword
* Helm
* Torso
* Legging
* Shield
* Fishing Rod

