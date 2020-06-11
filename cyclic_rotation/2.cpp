vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> sol(A.size());
    for (int i = 0 ;i < A.size();i++)
    {
        int pos = (i+K)%A.size();
        sol[pos] = A[i];
    }
    return sol;
}
