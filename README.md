# Long Hello World

You probably remember that the first program you created was something along the lines of
```python
print("Hello World")
```
or
```cpp
std::cout << "Hello World" << std::endl;
```
This is generally a one line thing.
### I decided to make this one line, obnoxiously complicated.
What this program does, is create a struct for each letter and number in the english alphabet.
Then, it creates a randomly placed array of 0 through 11.
After that, it creates an array like this
```cpp
Custom::Char characters[12] = {H, e, l, l, o, space, W, o, r, l, d};
```
Later, it uses the bubble sort algorithm to sort all the numbers in the array.
Finally, it matches up the letters with the numbers
ex:
```cpp
for (i : this->nums)
{
    std::cout << this->characters[i]; 
}
```
This program in total, is around 80 lines.
