class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>A2(n+1,0);
        vector<int>B2(n+1,0);
        vector<int>answer;
        for(int i=0;i<n;i++){
            A2[A[i]]++; B2[B[i]]++;
            int cnt = 0;
            for(int j=1;j<=n;j++){
                cnt += min(A2[j],B2[j]);
            }
            answer.push_back(cnt);
        }
        return answer;
    }
};