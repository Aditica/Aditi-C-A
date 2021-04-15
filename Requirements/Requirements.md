**Requirements**

**Introduction:** 

- Invoice Generating System is a simple console application which can be used in any departmental store, shops, cafes etc. for generating bills to the customer.
- This application can be used to keep the records such as name, address, contact number, amount paid, amount due, payment date etc. of the regular customers. It has the feature to add a new customer, if any and also to edit the account at any time.

**Features of Invoice Generating System:**
- ### Create & Send Invoices
- ### Simplified Billing & Payment
- ### Easy Reports Generation

**Benefits:**

The importance of effective billing cannot be undermined. Invoicing operations play a vital role in enabling businesses to get paid on time. Automated invoicing software helps individuals manage the entire payment process, from gathering data to creating and sending bills.
- ### Reduce Late Payments
- ### Minimize the Payments Delayed or Forgotten
- ### Maintain a Professional Image
- ### Automation
- ### Data Security

![](Aspose.Words.dc69a0d1-33d8-42f9-b543-8734f6cc3a0e.001.png)![](Aspose.Words.dc69a0d1-33d8-42f9-b543-8734f6cc3a0e.002.png)**Our System Design:**

**4 W’s and 1 H:**

**Who:**

Small and Medium scale shops**.**

**What:**

Digitalized invoice generating system which can be used to add new customers, modify or update and delete the customers, add new products, generate bill to the customers and many more.

**When:**

Can be used to eliminate the traditional or manual billing system.

**Where:**

Super marts, pharmaceutical shops, cafes, restaurants etc.

**How:**

By the simple use of input and output method, invoice can be printed to the customers.




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







