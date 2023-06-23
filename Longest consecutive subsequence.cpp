class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    int findLongestConseqSubseq(int arr[], int n)
{
  if (n == 0)
    return 0;

  std::sort(arr, arr+n);

  int count = 1;
  int maxi = 1;


  for (int i = 0; i < n-1; i++)
  {
    if (arr[i] == arr[i+1]-1)
    {
      count++;
      maxi = std::max(maxi, count);
    }
    else if (arr[i] != arr[i+1])
    {
      count = 1;
    }
  }

  return maxi;
}


};
