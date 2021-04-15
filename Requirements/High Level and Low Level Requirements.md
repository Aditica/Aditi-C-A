|**High Level Requirements**|
| :-: |
|**ID** |**Description** |**Category** |**Status**|
|HR01|User must be able to add new products and display the products|Technical|IMPLEMENTED|
|HR02|User must be able to modify or change the existing products|Technical|IMPLEMENTED|
|HR03|User must be able to delete the existing products|Technical|IMPLEMENTED|
|HR04|User must be able to add the products to the cart and generate the bill|Technical|IMPLEMENTED|
|HR05|Data should not be lost in case of any mode of failures|Scenario|FUTURE|

|**Low Level Requirements**|
| :-: |
|**ID** |**Description** |**HLR ID**|**Status**|
|LR01|New product shall be added by providing all the valid information.<br>Product ID should be unique or else the record should not be accepted.|HR01|IMPLEMENTED|
|LR02|Displaying the product details should be possible in two ways. <br>First by searching by Product ID and by printing all the records available|HR01|FUTURE|
|LR03|If user searches for an invalid product ID or no stock product ID, "No Record Found" message and <br>"Out of stock" message should be displayed|HR02<br>HR04|IMPLEMENTED|
|LR04|If user wants to modify or change any product details and enters an invalid product ID, "No Record Found" message and should be displayed|HR02|IMPLEMENTED|
|LR05|Products out of stock should be notified on the regular intervals to remind the user|HR01|FUTURE|
|HR06|Any errors while printing the bill should be notified|HR06|FUTURE|


