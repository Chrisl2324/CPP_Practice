#include <vector>
#include <string>
#include <numeric> 
#include <algorithm> 

class Fracts
{
public:

    static int gcd(int a, int b) {
        if (a == 0) {
            return b;
        }
        return gcd(b, a % b);
    }

    static unsigned long long lcm(unsigned long long a, unsigned long long b) {
        return (a * b) / gcd(a, b);
    }

    static std::string convertFrac(std::vector<std::vector<unsigned long long>> &lst) {
        if (lst.empty()) return "";

        unsigned long long common_denominator = lst[0][1];
        for (const auto& frac : lst) {
            common_denominator = lcm(common_denominator, frac[1]);
        }

        std::string result;
        for (const auto& frac : lst) {
            unsigned long long numerator = frac[0] * (common_denominator / frac[1]);
            result += "(" + std::to_string(numerator) + "," + std::to_string(common_denominator) + ")";
        }

        return result;
    }
};
