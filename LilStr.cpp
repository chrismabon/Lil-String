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

LilStr::LilStr(const char* iArray) {
    this->_size = _findSize(iArray);
    this->length = this->_size;
    this->_empty = false;
    this->empty = this->_empty;
    this->_capac = floor(pow((log(this->_size) / 1.4), 3));
    this->maxLen = this->_capac;
    this->_arr = new char[(this->_capac)];
    usi_kt i = 0;

    while ((iArray[i] != '\000') && (i < USHRT_MAX)) {
        this->_arr[i] = iArray[i];
        i++;
    }
    this->_start = &this->_arr[0];
    this->_end = &this->_arr[i];
}

usi_kt LilStr::_findSize(const char* iArray) {
    usi_kt size = 0;
    while ((iArray[size] != '\000') && (size < USHRT_MAX)) {
        size++;
    }

    return size;
}

bool LilStr::_setProps() {
    bool chgSize = this->_size - this->length;
    bool chgCapac = this->_capac - this->maxLen;
    bool chgEmpty = this->_empty ^this->empty;

    bool chgAny = (chgSize || chgCapac) || chgEmpty;

    chgSize ? this->length = this->_size : this->length;
    chgCapac ? this->maxLen = this->_capac : this->maxLen;
    chgEmpty ? this->empty = this->_empty : this->empty;

    return chgAny;
}


