#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n%7 != 0) {
        return n/7+1;
    } else return n/7;
}