#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int price) {
    if(price >= 100000 && price <300000) {
        price *= 0.95;
    } else if(price >= 300000 && price < 500000) {
        price *= 0.90;
    } else if(price >= 500000) {
        price *= 0.80;
    }
    return ceil(price);
}