# <span style="color:#1AED69"> Q. **Dmart**</span>


## **Intution**

## <span style="color:#ED7F1A"> Logical Approach</span>


1. The code uses an unordered map chocolatePrices to store the prices of different chocolate varieties.
2. For each test case, the number of varieties n is read from the input.
The total cost totalPrice is initialized to zero.
For each variety, the name variety and quantity quantity are read from the input.
1. The price of the variety is retrieved from chocolatePrices and multiplied by the quantity. This value is added to totalPrice.
2. After processing all varieties, the totalPrice for the test case is printed.
3. Repeat steps 2-4 for each test case.

The logical approach ensures that the prices of the chocolate varieties are retrieved from the `chocolatePrices` map and multiplied by their respective quantities to calculate the total cost for each test case. The total cost is then printed for each test case.



## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
/* Pseudocode */
function main():
    create an unordered_map chocolatePrices with string keys and integer values, and initialize it with chocolate variety names and their corresponding prices

    read t from input

    repeat t times:
        read n from input

        totalPrice = 0

        repeat n times:
            read variety and quantity from input

            totalPrice += chocolatePrices[variety] * quantity

        print totalPrice

    return 0

main()

```