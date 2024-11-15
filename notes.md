# Looping
it is the form of encircling a block of codes

## Types:
### For
> Checking before = "pre-test"

> It uses a range for looping

syntax: 
| Reserve name | Initializer | Condition | In/Decrementor |
| - | - | - | - |
| for | int i = 0 | i < 10 | i++ |
| can't be changed | can be changed | can be changed | can be changed |
```cpp
for (int i = 0; i < 10; i++)
{
    // code block
}
```
example:  start counting from 1 - 10
| Reserve name | Initializer | Condition | In/Decrementor |
| - | - | - | - |
| for | int i = 1 | i <= 10 | i++ |
```cpp
for (int i = 1; i <= 10; i++)
{
    // code block
}
```
example: start multiplication by 2 of 1 - 10
| Reserve name | Initializer | Condition | In/Decrementor |
| - | - | - | - |
| for | int i = 2 | 20 >= i | i+=2 |
```cpp
for (int i = 2; 20 >= i; i+=2)
{
    // code block
}
```
example: max egg storage of 10
| Reserve name | Initializer | Condition | In/Decrementor |
| - | - | - | - |
| for | int emptySlot = 0 | 10 > emptySlot | emptySlot++ |
```cpp
for (int emptySlot = 0; 10 > emptySlot ; emptySlot++)
{
    // code block
}
```
example: count down of a rocket before launch
| Reserve name | Initializer | Condition | In/Decrementor |
| - | - | - | - |
| for | int countDown = 10 | 0 <= countDown | countDown-- |
```cpp
for (int countDown = 10; 0 <= countDown ; countDown--)
{
    // code block
}
```
example: calculating for boiling point
| Reserve name | Initializer | Condition | In/Decrementor |
| - | - | - | - |
| for | double temperature = roomTemp | 100.0 >= temperature | temperature*=BOILING_SPEED |
```cpp
const double BOILING_SPEED = 0.034;
double roomTemp = 30.0;

for (double temperature = roomTemp; 100.0 >= temperature  ; temperature*=BOILING_SPEED)
{
    // code block
}
```
example: calculating for freezing
| Reserve name | Initializer | Condition | In/Decrementor |
| - | - | - | - |
| for | double temperature = roomTemp | -50.0 <= temperature | temperature-=FREEZING_SPEED |
```cpp
const double FREEZING_SPEED = 0.034;
double roomTemp = 30.0;

for (double temperature = roomTemp; -50.0 <= temperature; temperature-=FREEZING_SPEED)
{
    // code block
}
```

---

### Do While
#### While
> Checking before = "pre-test"
> Check first if the condition set is correct before using the code block: when logging in in Canvas.

syntax: 
| Reserve name | Condition  |
| - | - | 
| while | i < 10 |
| can't be changed | can be changed |
```cpp
while (i < 10)
{
    // code block
}
```

example: Logging in
| Reserve name | Condition  |
| - | - | 
| while | true |
| can't be changed | can be changed |
```cpp
string username, password;

cout << "Enter Username:";
cin >>  username;

cout << "Enter Password:";
cin >>  password;

// Condition that if it matches the data stored in variable password and username it will run the code
while (password == "passwordKoTo" && username == "admin")
{
    // code block
}
```
---
#### While
> Checking after = "post-test"
> Check after running the block of code if the condition set is correct: filling in data

syntax: 
| Reserve name | Condition | Reserve name |
| - | - | - |
| do | i < 10 | while |
| can't be changed | can be changed | can't be changed |
```cpp
do
{
    // block of code
} while(0 < age);
```
example: entering proper age
| Reserve name | Condition | Reserve name |
| - | - | - |
| do | i < 10 | while |
```cpp
int age;

do
{
    cout << "Your age please: ";
    cin >> age;

// if the age is lower than 0 it will loop back as -1 and below are not a proper age
} while(0 < age);

```

