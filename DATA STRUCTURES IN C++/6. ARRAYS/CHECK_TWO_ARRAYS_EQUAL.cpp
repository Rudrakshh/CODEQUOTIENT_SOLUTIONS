int arraysEqualorNot(vector<int> A, vector<int> B) {
  // Write your code here
  bool ans = true;
  for (auto i = A.begin();i<=A.end();i++) {
    bool present = false;
    for (auto j = B.begin();j<=B.end();j++) {
      if(*i == *j) {
        present = true;
        *j = -5464646;
        break;
      }
    }
    if(present == false) {
      ans = false;
    }
  }
  if(ans == true) {
      return 1;
  }else {
      return 0;
  }
}
