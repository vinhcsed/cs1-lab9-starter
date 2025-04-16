# CS1: Lab 9

## Setup
1. Update the contents of *ID.txt* with your identifier (school email **without @school.edu**).
2. Write pseudocode for your program in *PSEUDO.txt*.

## How to Run Your Program
* [**WINDOWS**]
   - In VSCode, press the play button in the top right corner (it should appear when you open a `.cpp` file). Your program should compile and run.
   - Alternatively, open a terminal. Type `.\make.bat` and press return. Your program should compile and run.
* [**MAC/LINUX**]
   - Open a Terminal. Type `make` and press return. Your program should compile and run.

## Assignment Specification
### Jumbled Bag
* Implement this program in `main.cpp`.
* This program will simulate a bag containing capital letters A-Z.
* When the program begins, the user should be prompted for the *size* of the bag.
   - The program should **dynamically allocate** an array to represent the bag; the array has *size*+1 elements
   - The last element of the array should be initialized to an asterisk `*` to represent the maximum capacity of the bag (no items should be added at or beyond this element)
   - All other elements should be initialized to underscores `_` to represent empty spots
* The program should display three menu options: 1) Add to Bag, 2) Remove from Bag, 3) Quit.
   - If the user makes an invalid menu selection, they should be continuously prompted until they make a valid selection
* When adding to the bag, the user should be prompted for a character. If the bag has space, the character should be “added” to the bag. Otherwise, the message `The bag is full!` should be displayed. Afterwards, the current contents of the bag should be printed to the terminal.
   - If the user enters an invalid character, they should be continuously prompted until they enter a valid one
* When removing from the bag, the user should be prompted for a character. If the character is not present in the bag, a message should be displayed in the format `{char} is not in the bag`. Otherwise, the earliest occurence of the character should be removed; Afterwards, the current contents of the bag should be printed to the terminal.
   - If the user enters an invalid character, they should be continuously prompted until they enter a valid one
* If the user chooses to quit, the program should immediately end.

### Other Requirements
* The bag array must be dynamically allocated to the specified size
* Aside from what is provided in the starter code, the index operator `[]` is not allowed in this program.
* Your program logic must be organized into functions; you will be graded on code cleanliness and design.

#### Example
```
How big is the bag?: 3

1) Add to Bag
2) Remove from Bag
3) Quit
Make a selection: 4
Invalid selection, please try again.
Make a selection: 1
Enter a character: g
Invalid character, please try again.
Enter a character: A
Added {A} to the bag.
[ A ]

1) Add to Bag
2) Remove from Bag
3) Quit
Make a selection: 1
Enter a character: A
Added {A} to the bag.
[ A A ]

1) Add to Bag
2) Remove from Bag
3) Quit
Make a selection: 1
Enter a character: B
Added {B} to the bag.
[ A A B ]

1) Add to Bag
2) Remove from Bag
3) Quit
Make a selection: 1
Enter a character: B
The bag is full!
[ A A B ]

1) Add to Bag
2) Remove from Bag
3) Quit
Make a selection: 2 
Enter a character: C
{C} is not in the bag.
[ A A B ]

1) Add to Bag
2) Remove from Bag
3) Quit
Make a selection: 2
Enter a character: A
Removed {A} from the bag.
[ A B ]

1) Add to Bag
2) Remove from Bag
3) Quit
Make a selection: 1
Enter a character: C
Added {C} to the bag.
[ A B C ]

1) Add to Bag
2) Remove from Bag
3) Quit
Make a selection: 2
Enter a character: B
Removed {B} from the bag.
[ A C ]

1) Add to Bag
2) Remove from Bag
3) Quit
Make a selection: 3
```

## Submission
1. Remember to *commit* and *push* your changes to this repository.
