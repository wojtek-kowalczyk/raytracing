#include <iostream>

int main() {

    // image
    const int width  = 256;
    const int height = 256;

    // render
    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    // row-wise left->right then top->bottom
    for (int j = height-1; j >= 0; --j)
    {
        std::cerr << "Scanlines remaining: " << j << '\n'; // progress tracker
        for (int i = 0; i < width; ++i)
        {
            double r = static_cast<double>(i) / (width-1);
            double g = static_cast<double>(j) / (height-1);
            double b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n'; 
            // run with: ./rt > file.ppm to save to file
        }
    }
    std::cerr << "Done.\n";
}