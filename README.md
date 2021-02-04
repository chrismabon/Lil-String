# Lil String
A very simple string data structure for C++

## Structure
```
Description
    - Custom string class geared for performance
    - Only basic operations available compared to std::string
    - Underlying storage mechanism is a character array
```

## Functionality
```
Members
    - size (int) - length of the stored string
    - capacity (int) - longest string capable of being stored
    - start (char ptr) - first character in the string
    - end (char ptr) - last character in the string
    - empty (Boolean) - flag for a zero length string
Operations
    - create (char ptr) - constructs a LilString object from a character array
    - get (int) - returns a character at the given index within the string
    - append (char) - adds the character to the end of the string
    - replace (char, int) - inserts the character at the given index, overwriting previous
    - resize (int) - shrinks/grows capacity to given value, min value is size
    - print (int) - outputs data to console, given value determines verbosity level
    - clear () - resets the LilString object to a clean state, deleting all data
```

## Tools
* [CLion](https://www.jetbrains.com/clion/documentation/) -  IDE by Jetbrains
* [CMake](https://cmake.org/documentation/) - C/C++ build manager
* [GDB](https://www.gnu.org/software/gdb/documentation/) - GNU Project Debugger
* [GCC](https://gcc.gnu.org/onlinedocs/) - GNU C/C++ compiler

## License and Copyright
Lil String is [licensed](LICENSE) under the GNU General Public License v3.0

[Copyright](COPYRIGHT) &copy; 2020 Umbra Aeterna Labs
