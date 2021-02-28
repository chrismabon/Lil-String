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

#include <climits>
#include <cmath>
#include <iostream>
#include "LilStr.h"

usi_kt LilStr::getSize() const {
    return _size;
}

void LilStr::_setSize(usi_kt size) {
    _size = size;
}

usi_kt LilStr::getCapac() const {
    return _capac;
}

void LilStr::_setCapac(usi_kt capac) {
    _capac = capac;
}

char* LilStr::getStart() const {
    return _start;
}

void LilStr::_setStart(char* start) {
    _start = start;
}

char* LilStr::getEnd() const {
    return _end;
}

void LilStr::_setEnd(char* end) {
    _end = end;
}

bool LilStr::isEmpty() const {
    return _empty;
}

void LilStr::_setEmpty(bool inEmpty) {
    _empty = inEmpty;
}

USI LilStr::getMaxLen() const {
    return _maxLen;
}

//void LilStr::setMaxLen(USI maxLen = USHRT_MAX) {
//    LilStr::_maxLen = maxLen;
//}

LilStr::LilStr(char* iArray) {
    USI i = 0;
    this->setSize(_findSize(iArray));
    this->_capac = floor(pow((log(this->_size) / 1.4), 3));
    this->_arr = new char[(this->_capac)];
    while ((iArray[i] != '\000') && (i < USHRT_MAX)) {
        this->_arr[i] = iArray[i];
        i++;
    }
    this->_start = &this->_arr[0];
    this->_end = &this->_arr[i];
}

USI LilStr::_findSize(const char* iArray) {
    USI size = 0;
    while ((iArray[size] != '\000') && (size < USHRT_MAX)) {
        size++;
    }

    return size;
}


