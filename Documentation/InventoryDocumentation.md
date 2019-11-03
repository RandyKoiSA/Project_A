# Inventory Documentation
Update: 11/03/2019
Progress: Finished
Description: Working but no UI for visual representation

# Adding item to inventory
We must consider the inventory slot , the max stack count, and left over if they're still more

```py
if len(inventory) <= inventoryMaxQuantity:
    for item in inventory:
        if pickupitem.quantity <= 0 or len(inventory) >= inventoryMaxQuantity:
            # no more items to put in
            break

        # check if the name is the same
        if item.name == pickupitem.name:
            # check if there is enough space
            if item.quantity < item.maxquantity:
                item.quantity += pickupitem.quantity
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
    drop picked up item
