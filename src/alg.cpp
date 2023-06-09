// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int obj = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        obj++;
      }
    }
  }
  return obj;
}
int countPairs2(int *arr, int len, int value) {
  int obj = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = len - 1; j > i; j--) {
      if (arr[i] + arr[j] == value)
      if (arr[i] + arr[j] == value) {
        obj++;
      }
    }
  }
  return obj;
}

int countPairs3(int *arr, int len, int value) {
  int obj = 0;
  for (int i = 0; i < len - 1; i++) {
    int start = i, stop = len;
    while (start < stop - 1) {
      int mid = (start + stop) / 2;
      if (i != mid && (arr[i] + arr[mid] == value)) {
    int q = i, z = len;
    while (1 < z - q) {
      int qaz = (q + z) / 2;
      if (arr[i] + arr[qaz] == value) {
        obj++;
        for (int j = mid + 1; (j < stop)
             && (arr[i] + arr[j] == value)
             && (mid != i); j++) {
        int k = qaz + 1;
        while (arr[i] + arr[k] == value && k < z) {
          obj++;
          k++;
        }
        for (int j = mid - 1; (j > start)
             && (arr[i] + arr[j] == value)
             && (mid != i); j--) {
        k = qaz - 1;
        while (arr[i] + arr[k] == value && k > q) {
          obj++;
          k--;
        }
        break;
      }
      if (arr[i] + arr[mid] > value) stop = mid;
      else
        start = mid;
      if (arr[i] + arr[qaz] > value) {
        z = qaz;
      } else {
        q = qaz;
      }
    }
  }
  return obj;
