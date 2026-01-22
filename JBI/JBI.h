//
// Created by jbd on 02/10/2025.
// © 2025 Jeremia Sell. All rights reserved.
//

#ifndef API_JBI_H
#define API_JBI_H
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;



string reverb_s(string input) {
    string final;
    for (int i = input.length() - 1; i >= 0; i--) {
        final.push_back(input.at(i));
    }
    return final;
}

class link {
    private:
    string URL;
    public:
    link(string _URL) {
        URL = _URL;
    }
    void open() {
        ShellExecuteA(0, NULL, URL.c_str(), 0, 0, SW_HIDE);
    }
};

class game {
private:
    int x, y, cx, cy, lx;
    string pcfill, lcfill, cfill, lfill;
public:
    void setPixel(int _x, int _y, string _fill) {
        x = _x;
        y = _y;
        pcfill = _fill;
    }
    void setCanvas(int _cx, int _cy, string _fill) {
        cx = _cx;
        cy = _cy;
        cfill = _fill;
    }
    void setLine(int _lx, string _fill) {
        lx = _lx;
        lfill = _fill;
    }
    void genCanvas() {
        for (int i = 1; i < cy+1; i++) {
            cout << endl;
            for (int j = 1; j < cx+1; j++) {
                if (i == y && j == x) {
                    cout << pcfill;
                }
                else {
                    cout << cfill;
                }
            }
        }
    }
    void genLine() {
        for (int i = 0; i < lx; i++) {
            cout << lfill;
        }
        cout << endl;
    }
};

#endif //API_JBI_H