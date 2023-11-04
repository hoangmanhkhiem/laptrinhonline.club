#include<bits/stdc++.h>
    #define endl '\n'
    #pragma GCC optimize("Ofast")
    using namespace std;

    typedef unsigned long long ull;
    typedef long long ll;

    const ll MOD = 1e9+7;
    const ll MAX = 1e6;

    // http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
    // freopen("Output.txt", "w", stdout);
    // freopen("Error.txt", "w", stderr);

    int LowerToGreater(const void* a, const void* b)
    {
        const int* x = (int*) a;
        const int* y = (int*) b;
        if (*x > *y)
            return 1;
        else if (*x < *y)
            return -1;
        return 0;
    }

    void insertArr(long long A[], long long n)
    {
        for (long long i = 0; i < n; i++) cin >> A[i];
    }

    void printArr(long long *A, long long n)
    {
        for (long long i = 0; i < n; i++) cout << A[i] << " ";
    }

    void sol()
    {

    }

    int main()
    {
        //qsort((arr,num,sizeof(int),LowerToGreater);
        //freopen("Input.txt", "r", stdin);
        std::ios::sync_with_stdio(NULL); std::cin.tie(0); std::cout.tie(0);
        ll numOfStudents, numOfGroups; cin >> numOfStudents >> numOfGroups;
        ll ans = LONG_LONG_MAX, deviant = numOfStudents - numOfGroups;
        ll Arr[numOfStudents]; insertArr(Arr, numOfStudents);

        sort(Arr, Arr + numOfStudents);
        for (ll i = 0; i < numOfGroups; i++)
        {
            if ((Arr[i + deviant] - Arr[i]) < ans) ans = Arr[i + deviant] - Arr[i];
            
        }
        cout << ans;
    }