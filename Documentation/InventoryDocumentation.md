# Inventory Documentation
Update: 11/03/2019
Progress: Not Finished
Description: Working but no UI for visual representation

Inventory will soon be a component that can be placed on player and stuff like chests.

# Adding item to inventory
We must consider the inventory slot , the max stack count, and left over if they're still more

```py
# Check if there is enough inventory space to add
if len(inventory) < inventoryMaxQuantity:
    for item in inventory:
        if pickupitem.quantity <= 0 or len(inventory) >= inventoryMaxQuantity:
            # no more items to put in
            break

        # check if the name is the same
        if item.name == pickupitem.name:
            # check if there is enough space
            if item.quantity < item.maxquantity:
                item.quantity += pickupitem.quantity
                pickupItem.quantity = 0
                # check if the item has been overloaded
                if item.quantity > item.maxquantity:
                    leftover = item.quantity - item.maxquantity
                    pickupitem.quantity = leftover
            else:
            # not enough space to stack
    if pickupitem.quantity > 0:
        # check if there is still room in the inventory
        if len(inventory) < inventoryMaxQuantity:
            inventory.add(item)
    else:
        destroy actor
else:
    # Scan to see if there is similar items with space [NEED TO IMPLEMENT]
    for item in inventory:
        # Check if the item is the same and still left to put stuff
        if item.name == pickupItem.name && pickupItem.quantity > 0:
            # Check if there is space
            if item.quantity < item.maxQuantity:
                # Add pickup item to item
                item.quantity += pickupItem.quantity
                pickupItem.quantity = 0
                # check if item is overloaded
                if item.quantity > item.maxQuantity:
                    leftover = item.quantity - item.maxQuantity
                    pickupItem.quantity = leftover
                else:
                    break
    # On Completed    
    # Check if there is still item quantity
    if pickupItem.quantity > 0:
        # Check if there is still inventory space
        if len(inventory) < inventoryMaxQuantity:
            inventory.add(pickupItem)
            return

```

ITERATION 2
```py
def AddItem(inventory, pickupitem):
    # Scan through existing inventory items for same item with enough space quantity
    for item in inventory:
        # Check if there is still pickup items to be put in
        if pickupitem.quantity is 0:
            return

        # Check if item is the same
        if item.name == pickedupitem.name:
            # Check if the item slot still have stack room
            if item.quantity < item.maxQuantity:
                item.quantity += pickupitem.quantity
                pickupItem.quantity = 0
                # Check if the item slot is overstacked
                if item.quantity > item.maxQuantity:
                    leftover = item.quantity - item.maxQuantity
                    pickupitem.quantity = leftover
                else:
                    # Successfull added item
                    return
            else:
                # Item is maxed out. Go to next item
                pass
        else:
            # Not the same item type. Go to next item
            pass
    # ON COMPLETE        
    # If still pickup quantity left, we add it to a brand new inventory slot if there is still slots open.
    if pickupitem.quantity > 0:
        # check if there is still inventory space
        if len(inventory) < inventory.maxslots:
            inventory.add(pickupitem)
            return
        else
            return
```
# Things to Note
When opening the inventory menu, make sure the inventory title is there.
Chest - 12 slots
Huge Chest - 24 slots
Bigger Chest - 36 slots
Gigantic Chest - 48 slots
Players inventory - 60 slots

Implementation of drag and drop. Which means that items slots can swap.
Items can be drags out of screen and item will be removed from inventory and drops onto the grab.
