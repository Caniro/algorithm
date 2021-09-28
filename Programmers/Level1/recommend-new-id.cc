// 신규 아이디 추천 : https://programmers.co.kr/learn/courses/30/lessons/72410
#include <string>
#include <vector>

using namespace std;

void AddCharAtLeast(string& str, const int& num) // 7단계
{
    for (int i = str.size(); i < num; ++i)
        str.push_back(str[str.size() - 1]);
}

void TrimString(string& str, const int& num) // 6단계
{
    if (str.size() > num)
    {
        str = str.substr(0, num);
        if (str.size() == num && str[num - 1] == '.')
            str.erase(num - 1, 1);;
    }
}

void AddACharInEmptyString(string &str) // 5단계
{
    if (str.size() == 0)
        str.push_back('a');
}

void RemovePointBothSide(string &str) // 4단계
{
    if (str[0] == '.')
        str.erase(0, 1);
    if (str[str.size() - 1] == '.')
        str.erase(str.size() - 1, 1); // str.size() - 1 번째 빼기
}

void RemoveMultiplePoint(string &str) // 3단계
{
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '.' && str[i + 1] == '.')
        {
            str.erase(i + 1, 1);
            --i;
        }
    }
}

void RemoveSpecialChar(string& str) // 2단계
{
    for (int i = 0; i < str.size(); ++i)
    {
        char ch = str[i];
        
        if ((ch >= 'A' && ch <= 'Z') || \
            (ch >= 'a' && ch <= 'z') || \
            (ch >= '0' && ch <= '9') || \
            (ch == '-' || ch == '_' || ch == '.'))
            continue ;
        str.erase(i, 1);
        --i;
    }
}

void ConvertToLowercase(string& str) // 1단계
{
    for (auto &e: str)
        if (e >= 'A' && e <= 'Z')
            e -= ('A' - 'a');
}

string solution(string new_id) {
    string answer = new_id;

    ConvertToLowercase(answer);
    RemoveSpecialChar(answer);
    RemoveMultiplePoint(answer);
    RemovePointBothSide(answer);
    AddACharInEmptyString(answer);
    TrimString(answer, 15);
    AddCharAtLeast(answer, 3);
    return answer;
}
