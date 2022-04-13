#include <iostream>
#include "headers/color.h"

int main()
{
    const int width = 256;
    const int height = 256;

    std::cout << "P3\n" << width << ' ' << height << "\n255\n";
    // row-wise left->right then top->bottom
    for (int j = height - 1; j >= 0; --j)
    {
        std::cerr << "Scanlines remaining: " << j << '\n'; // progress tracker
        for (int i = 0; i < width; ++i)
        {
            color_t pixelColor{i / (width - 1.0), j / (height - 1.0), 0.25};
            write_color(std::cout, pixelColor);
            // run with: ./rt > file.ppm to save to file
        }
    }
    std::cerr << "Done.\n";
}