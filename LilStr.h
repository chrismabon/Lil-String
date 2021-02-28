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

typedef unsigned short int USI;

class LilStr {
public:
    explicit LilStr(char* iArray);

    USI getSize() const;
    void setSize(USI size);
    USI getCapac() const;
    void setCapac(USI capac);
    char* getStart() const;
    void setStart(char* start);
    char* getEnd() const;
    void setEnd(char* end);
    bool isEmpty() const;
    void setEmpty(bool empty);
    USI getMaxLen() const;
//    void setMaxLen(USI maxLen);


private:
    char* _arr;
    USI _size;
    USI _capac;
    bool _empty;
    char* _start;
    char* _end;
    USI _maxLen;

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
