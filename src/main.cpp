#include <chrono>
#include <iostream>
#include <thread>

int main()
{
    int x = 1;
    int y = 1;

    int dx = 1;
    int dy = 1;

    while (true) {
        std::cout << "\033[2J\033[H";
        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 50; j++) {
                if (j == x && i == y) {
                    std::cout << "N";
                    continue;
                }
                if (j == x + 1 && i == y) {
                    std::cout << "O";
                    continue;
                }
                if (j == x + 2 && i == y) {
                    std::cout << " ";
                    continue;
                }
                if (j == x + 3 && i == y) {
                    std::cout << "S";
                    continue;
                }
                if (j == x + 4 && i == y) {
                    std::cout << "I";
                    continue;
                }
                if (j == x + 5 && i == y) {
                    std::cout << "G";
                    continue;
                }
                if (j == x + 6 && i == y) {
                    std::cout << "N";
                    continue;
                }
                if (j == x + 7 && i == y) {
                    std::cout << "A";
                    continue;
                }
                if (j == x + 8 && i == y) {
                    std::cout << "L";
                    continue;
                }
                if (j == 0 || j == 49 || i == 0 || i == 14) {
                    std::cout << "#";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << "\n";
        }

        x += dx;
        y += dy;

        if (x == 1 || x == 40) {
            dx *= -1;
        }
        if (y == 1 || y == 13) {
            dy *= -1;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
    return 0;
}
