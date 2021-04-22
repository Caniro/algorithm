#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;

    if (n == 0)
        return (0);
    if (n % 2)
    {
        for (int i = 3; i <= n; i += 2)
            if (n % i == 0)
                answer += i;
    }
    else
    {
        for (int i = 2; i <= n; ++i)
            if (n % i == 0)
                answer += i;
    }
    return answer;
}
