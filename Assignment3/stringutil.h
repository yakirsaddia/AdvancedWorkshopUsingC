//
// Created by Haim Adrian and Yakir Saadia
//

#ifndef UTILS_STRINGUTIL_H
#define UTILS_STRINGUTIL_H

typedef char* string;

string readString(int *eofEncountered);

string readStringWithCustomLength(int length, int *eofEncountered);

#endif //UTILS_STRINGUTIL_H
