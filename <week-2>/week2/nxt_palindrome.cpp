#include <iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int check_all_nine(int* num, int n){
    for(int i=0;i<n;i++){
        if(num[i]!=9) return 0;
    }
    return 1;
}
bool ispalindrome(int num[], int n){
    for(int i=0;i<n/2;i++){
        if(num[i]!=num[n-i-1]) return false;
    }
    return true;
}

void generatePalindrome(int num[], int n) {
    int mid=n/2;
    bool leftsmaller=false;
    int i=mid-1;
    int j=(n%2==0)? mid : mid + 1;
    while(i>=0&&num[i]==num[j]){
        i--;
        j++;
    }
    if (i<0||num[i]<num[j]) leftsmaller=true;
    while(i>=0){
        num[j]=num[i];
        i--;
        j++;
    }
    if (leftsmaller) {
        int carry = 1;
        i = mid - 1;
        if (n % 2 == 1) {
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        } else {
            j = mid;
        }
        while (i >= 0) {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--];
        }
    }
}

void NextPalindrome(int num[], int n){
    printf("Next palindrome is:");
    if (check_all_nine(num, n)){
        printf("1 ");
        for (int i=1;i<n;i++)
            printf("0 ");
        printf("1");
    }
    else{
        generatePalindrome(num, n);
        print(num, n);
    }
}

int main()
{
    int num[] = { 9, 4, 1, 8, 7, 9, 7, 8, 3, 2, 2 };
    int n = sizeof(num) / sizeof(num[0]);
    NextPalindrome(num, n);
    return 0;
}
