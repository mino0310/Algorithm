#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int alpha[8]; // d e m n o r s y 에 해당하는 값들을 저장해놓은 배열
int check[10]; // 어떤 숫자들이 순열을 만드는 데 사용되었는지 체크할 배열

// 골라진 순열을 사용해서 send를 만들어보는 함수
int send() 
{
    return alpha[6] * 1000 + alpha[1] * 100 + alpha[3] * 10 + alpha[0];
}

// 골라진 순열을 사용해 more 를 만들어보는 함수
int more() 
{
    return alpha[2] * 1000 + alpha[4] * 100 + alpha[5] * 10 + alpha[1];
}

// 골라진 순열을 사용해 money 를 만들어보는 함수
int money()
{
    return alpha[2] * 10000 + alpha[4] * 1000 + alpha[3] * 100 + alpha[1] * 10 + alpha[7];
}

// 사용된 8개 알파벳을 순열을 사용해서 구하는 DFS 함수. 
void DFS(int L)
{
    if (L == 8)
    {
        if ((send() + more()) == money()) {
            if (alpha[2] == 0 || alpha[6] == 0) return ;
            cout << alpha[6] << " " << alpha[1] << " " << alpha[3] << " " << alpha[0] << " + " << alpha[2] << " " << alpha[4] << " " << alpha[5] << " " << alpha[1]
            << " = " << alpha[2] << " " << alpha[4] << " " << alpha[3] << " " << alpha[1] << " " << alpha[7] << endl; 
            return ;
        }
    }
    else {
        for (int i = 0; i <= 9; i++){
            if (check[i] == 0) {
                check[i] = 1;
                alpha[L] = i;
                DFS(L + 1);
                check[i] = 0;
            }
        }
    }

}

int main(void)
{
    DFS(0);
    return 0;
}

