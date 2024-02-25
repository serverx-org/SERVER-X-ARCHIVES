# <span style="color:#1AED69"> Q. **Ganesh Chanda**</span>


## **Intution**
Given that 10 groups are collecting chanda and the input contains the no of groups collected corresponding to their collection of donation
### <span style="color:#1AEDE0"> Example: </span>

| Group No. | Money |
|-----------|-------|
|     1     |   30  |
|     2     |  100  |
|     1     |   50  |

The given code processes donation information for different groups and displays the total donation amount for each group in ascending order of the group number. The code follows these steps:

1. Initialize an unordered map to store group numbers and their total donations.
2. Read the number of donation entries from the input.
3. Iterate through each donation entry, updating the total donation for the corresponding group in the map.
4. Convert the map into a vector of Group objects, where each object represents a group with its number and total donation.
5. Sort the vector based on the group number in ascending order.
6. Print the group number and total donation for each group in the sorted vector.


## <span style="color:#1AA1ED"> **Logic Implementation** </span>


```cpp
/* Pseudocode */
struct Group:
    groupNo: integer
    totalMoney: integer

function sortByGroup(g1, g2):
    return g1.groupNo < g2.groupNo

function main():
    d = create an empty unordered_map<int, int>
    read n from input

    for i from 1 to 10:
        d[i] = 0

    for i from 0 to n-1:
        read groupNo, donation from input
        increment d[groupNo] by donation

    groups = create an empty vector<Group>
    for each entry in d:
        group = create a new Group object
        group.groupNo = entry.first
        group.totalMoney = entry.second
        append group to groups

    sort groups using the sortByGroup comparison function

    for each group in groups:
        print group.groupNo followed by a space, then group.totalMoney and a new line

main()

```