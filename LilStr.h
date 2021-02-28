//  Copyright 2021 Chris Mabon <https://github.com/chrismabon>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.

#ifndef LIL_STRING_LILSTR_H
#define LIL_STRING_LILSTR_H

// TYPEDEFS

/// alias of "unsigned short int"
typedef unsigned short int usi_kt;

/// alias of "char*"
typedef char* str_kt;

/// alias of "const char*"
typedef const char* kstr_kt;

class LilStr {
public:
    // MEMBERS (visible)

    /// size of occupied portion of string
    usi_kt length;

    /// largest string able to store
    usi_kt maxLen;

    /// flag for empty string (true = empty)
    bool empty;

    // CONSTRUCTORS

    /// accepts C-style null-terminated char string
    explicit LilStr(const char* iArray);

    // OPERATIONS (visible)

    /// returns the length of the represented string
    usi_kt getSize() const;

    /// returns the current string max capacity
    usi_kt getCapac() const;

    /// returns pointer to first character in string
    char* getStart() const;

    /// returns pointer to last character in string
    char* getEnd() const;

    /// returns true if string size is zero, false otherwise
    bool isEmpty() const;

    /// constructs LilString object from character array
    LilStr* create(char* iArray);

    /// returns character at given index within the string
    char get(usi_kt index) const;

    /// adds character to the end of the string
    void append(char iChar);

    /// overwrites character at given index
    void replace(char iChar, usi_kt index);

    /// inserts character at given index, adding to overall size
    void insert(char iChar, usi_kt index);

    /// shrinks/grows capacity to given value, min value is size
    void resize(usi_kt iNewSize);

    /// outputs data to console, input determines verbosity level
    void print(usi_kt verbosity) const;

    /// reverts LilString object to clean state, deletes all data
    void clear();

private:
    // MEMBERS (hidden)

    /// character array holding actual string
    char* _arr;

    /// length of the stored string
    usi_kt _size;

    /// longest string that can be stored
    usi_kt _capac;

    /// flag for a zero length string
    bool _empty;

    /// first character in the string
    char* _start;

    /// last character in the string
    char* _end;

    // OPERATIONS (hidden)

    /// Setters for class members
    void _setSize(usi_kt size);
    void _setCapac(usi_kt capac);
    void _setStart(char* start);
    void _setEnd(char* end);
    void _setEmpty(bool inEmpty);

    /// counts and returns the size of the input array
    static usi_kt _findSize(const char* iArray);

    /// refreshes visible string properties with internal values
    bool _setProps();
};

#endif //LIL_STRING_LILSTR_H
