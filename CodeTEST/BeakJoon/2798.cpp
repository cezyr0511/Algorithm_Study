#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;

    int arr[101];    

    int Temp = 0, sum = 0, result = 0;
   
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> Temp;

        arr[i] = Temp;

    }
        

    for (int i = 0; i < N - 2; i++) 
    {
        for (int j = i + 1; j < N - 1; j++) 
        {
            for (int k = j + 1; k < N; k++) 
            {
                sum = arr[i] + arr[j] + arr[k];               

                if (sum <= M && M - sum < M - result)
                    result = sum;

            }
        }
    }

    cout << result << '\n';

	return 0;
}