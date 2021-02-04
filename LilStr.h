/**
 * LilStr.h
 *
 * Copyright (C) 2020 Umbra Aeterna Labs
 * This file is part of Lil String <https://github.com/Umbra-Aeterna-Labs/Lil-String>.
 *
 * Lil String is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Lil String is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Lil String.  If not, see <http://www.gnu.org/licenses/>.
 */

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

    static USI _findSize(const char* iArray);
};

#endif //LIL_STRING_LILSTR_H
