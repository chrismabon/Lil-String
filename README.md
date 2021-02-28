# Lil String

(_NOTE_: This project is currently in-progress. Code contained herein is not production-quality
 and **SHOULD NOT BE USED** in other projects.)

---

A very simple string data structure for C++, intended to be used within more complex data structures
that require low overhead and good performance from basic string operations.

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
    int length              /// size of occupied portion of string                  
    int maxLen              /// largest string able to store
    bool empty              /// flag for empty string (true = empty)

Operations
    getSize ()              /// returns the length of the represented string
    getCapac ()             /// returns the current string max capacity    
    getStart ()             /// returns pointer to first character in string   
    getEnd ()               /// returns pointer to last character in string    
    isEmpty ()              /// returns true if string size is zero, false otherwise    
    create (char*)          /// constructs LilString object from character array    
    get (int)               /// returns character at given index within the string    
    append (char)           /// adds character to the end of the string    
    replace (char, int)     /// overwrites character at given index    
    insert (char, int)      /// inserts character at given index, adding to overall size      
    resize (int)            /// shrinks/grows capacity to given value, min value is size    
    print (int)             /// outputs data to console, input determines verbosity level    
    clear ()                /// reverts LilString object to clean state, deletes all data                
```

## License and Copyright

This project is licensed under the GNU General Public License v3.0 (GNU GPLv3)

Copyright 2021 Chris Mabon <https://github.com/chrismabon>
