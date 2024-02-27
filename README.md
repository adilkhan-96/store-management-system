# store-management-system
*README*

*Store Management System*

*Overview:*
The Store Management System is a C++ program designed to facilitate the management of an electronics store. It allows users to select and purchase various items such as mobile phones, LED TVs, computers, home appliances, and laptops. The system calculates bills based on item quantity and applies discounts according to predefined criteria.

*Features:*
1. *Item Selection:* Users can choose from a range of electronics items available in the store.
2. *Brand Selection:* For certain items like mobile phones, users can select their preferred brand.
3. *Quantity Selection:* Users can specify the quantity of items they wish to purchase.
4. *Discount Calculation:* The system automatically calculates discounts based on the total bill amount and applies them where applicable.
5. *Bill Generation:* Upon completing the selection process, the system generates a bill for the user, showing both the original and discounted amounts.

*Classes:*
1. *line:* A utility class used to print a horizontal line separator.
2. *items:* Base class representing generic items with attributes like item number, quantity, and name.
3. *mobile:* Derived class inheriting from the items class, specifically tailored for managing mobile phone purchases.
4. *laptop:* Derived class for managing laptop purchases.
5. *home_appliances:* Derived class for managing home appliances purchases.
6. *desktop_computer:* Derived class for managing desktop computer purchases.
7. *LED:* Derived class for managing LED TV purchases.

*Usage:*
1. Compile the program using a C++ compiler (e.g., g++).
2. Run the compiled executable.
3. Follow the on-screen prompts to select items, brands, and quantities.
4. View the generated bill with applicable discounts.

*Instructions:*
- When prompted, enter the number corresponding to the category of items you want to purchase.
- Follow the subsequent prompts to make selections within each category.
- Ensure to enter valid choices and quantities as per the available stock.
- Upon completion, the system will display the bill with applicable discounts.

*Note:*
- This program assumes predefined discounts based on total bill amounts for different categories of items.
- Error handling is implemented for cases where the requested quantity exceeds available stock.
- The program is designed for educational purposes and can be further expanded with additional features and error handling mechanisms as needed.
