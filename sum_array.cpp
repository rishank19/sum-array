// array sum given
#include<bits/stdc++.h>
using namespace std;
bool hasArrayTwoCandidates(int A[], int arr_size,int sum)
{ int l, r;
  /* Sort the elements */
    sort(A, A + arr_size);

    /* Now look for the two candidates in
       the sorted array*/
    l = 0;
    r = arr_size - 1;
    while (l < r) {
        if (A[l] + A[r] == sum)
        {
            cout<<"elements are : "<<A[l]<<" & "<<A[r];
            return 1;
        }
        else if (A[l] + A[r] < sum)
        {
        cout<<"elelments are :"<<A[l]<<" & "<<A[r];
            l++;
        }

        else // A[i] + A[j] > sum
            r--;
    }
    return 0;
}
  int main()
{
    int a[100],i,size,k;
    cout<<"enter array size(max 100)\n";
    cin>>size;
    cout<<"enter array elements \n";
    for(i=0;i<size;i++)
   {
       cin>>a[i];

   }
   cout<<"enter k \n";
   cin>>k;
  if (hasArrayTwoCandidates(a,size,k))
        cout << "Array has two elements"
                " with given sum";
    else
        cout << "Array doesn't have two"
                " elements with given sum";
                return 0;
}

