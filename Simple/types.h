//
//  types.h
//  Simple
//
//  Created by Sam McDonald on 2/22/20.
//  Copyright © 2020 Sam McDonald. All rights reserved.
//

#include <array>
#include <string>
#include <vector>

#ifndef types_h
#define types_h

using namespace std;

void arrays() {
    array<array<string, 10>, 5> myArray;
    
    for(int i=0; i < myArray.size(); i++) {
        for(int j=0; j < myArray[i].size(); j++) {
            myArray[i][j] = "hello " + to_string(i) + to_string(j);
            cout << "Element: " << myArray[i][j] << endl;
        }
    }
}

#endif /* types_h */
