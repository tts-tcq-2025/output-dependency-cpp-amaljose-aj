#include <iostream>
#include <assert.h>
#include <vector> 
#include <string> 

struct ColorPair {
    int code;
    std::string majorColor;
    std::string minorColor;
};

std::vector<ColorPair> generateColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    std::vector<ColorPair> colorMap;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            colorMap.push_back({i * 5 + j, majorColor[i], minorColor[j]});
        }
    }
    return colorMap;
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    auto result = generateColorMap();
    assert(result.size() == 25);
    assert(result[0].majorColor == "White" && result[0].minorColor == "Blue");
    assert(result[24].majorColor == "Violet" && result[24].minorColor == "Slate");
    std::cout << "All is well (maybe!)\n";
}

int main() {
    testPrintColorMap();
    return 0;
}
