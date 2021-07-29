int getPairsCount(int arr[], int n, int sum){
    int ans = 0;
    int start = 0;
    int end = n - 1;
    while(start < end) {
        if(arr[start] + arr[end] == sum) {
            if(arr[start] == arr[end]) {
                int count = end - start + 1; 
                int n = count - 1;
                int totalCount = ((n) * (n + 1)) / 2;
                while(totalCount > 0) { 
                    // cout << arr[start] << " " << arr[end] << endl;
                    ans++;
                    totalCount--; 
                }
                start = end; 
            }
            else {
                int countStart = 0, countEnd = 0;
                int temp = arr[start], i = start;
                while(arr[i] == temp && i < end){
                    i++;
                    countStart++;
                }
                temp = arr[end];
                int j = end;
                while(arr[j] == temp && j > start){
                    j--;
                    countEnd++;
                }
                start = i;
                end = j;
                int totalTimes = countStart * countEnd;
                while(totalTimes > 0) {
                    // cout << arr[start-1] << " " << arr[end+1] << endl;
                    ans++;
                    totalTimes--;
                }
            }
        }
        else if(arr[start] + arr[end] < sum)
            start++;
        else 
            end--; 
    }
    return ans;
}
