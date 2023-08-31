#include <iostream>
#include <vector>
#include <cmath>

struct Point
{
    int x, y;
};

std::vector<Point> generate_integer_points_in_circle(int x_origin, int y_origin, int radius)
{
    std::vector<Point> points;
    for (int x = x_origin - radius; x <= x_origin + radius; ++x)
    {
        for (int y = y_origin - radius; y <= y_origin + radius; ++y)
        {
            if (std::sqrt(std::pow(x - x_origin, 2) + std::pow(y - y_origin, 2)) <= radius)
            {
                points.push_back({x, y});
            }
        }
    }
    return points;
}

int main()
{
    int x1, y1, r1, x2, y2, r2;
    std::cin >> x1 >> y1 >> r1;
    std::cin >> x2 >> y2 >> r2;

    std::vector<Point> points_in_circle1 = generate_integer_points_in_circle(x1, y1, r1);
    std::vector<Point> points_in_circle2 = generate_integer_points_in_circle(x2, y2, r2);

    int count = 0;
    for (const Point &point : points_in_circle1)
    {
        for (const Point &other : points_in_circle2)
        {
            if (point.x == other.x && point.y == other.y)
            {
                count++;
                break;
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}
