# <span style="color:#1AED69"> Q. **GOLDY AND HER TOY'S**</span>


## **Intution**

Here we have to sort the numbers in decreasing order but considering their frequency of repetition of the numbers i.e., dolls and if two or more dolls have same frequency then the lowest sized doll is the priority to sort first.

### <span style="color:#1AEDE0"> Example: </span>
```cpp
Input :
    8
    2 5 2 8 5 6 8 8
```
Here we have 8 dolls where types of dolls wrt. thier size are `2 2, 5 5, 6, 8 8 8` total of 8 dolls and the order acc. to the problem is `8 8 8 2 2 5 5 6`, here the standared approach can be using the map<> to count the toys with the value as their frequency in the list given, and then sort them from highest to lowest doll size. Then again we can take a vector pair to decide the actual order with considering this:

`(a.second == b.second) ? (a.first < b.first) : (a.second > b.second)` 

wheather the lowest sized is set first when we trigger the same freq. sized dolls.

Print the sorted list of sized dolls to the console

## <span style="color:#1AA1ED"> **Logic Implementation** </span>


```cpp
/* Pseudocode */
function arrangeToys(toys):
    toyCount = create an empty map

    for each toy in toys:
        increment the count of toy in toyCount map

    countList = convert the toyCount map to a vector of pairs
    sort the countList in descending order of count and ascending order of toy value

    for each count in countList:
        size = count.first
        countValue = count.second

        repeat countValue times:
            print size followed by a space

    print a new line

function main():
    read n from input

    create an empty vector t with size n

    for i from 0 to n-1:
        read t[i] from input

    arrangeToys(t)

main()

```
