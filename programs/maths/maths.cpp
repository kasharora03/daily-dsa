#include <bits/stdc++.h>
using namespace std;
// to count number of digits that divide n from the numver ind digits
int countDigits(int n)
{
    int count = 0;
    int temp = n;
    while (temp > 0)
    {
        int rem = temp % 10;
        if (rem != 0 && n % rem == 0)
        {
            count++;
        }
        temp = temp / 10;
    }
    return count;
}
// covert 
long reverseBits(long n) {
    bitset<32> num(n);
    bitset<32> ans;
    for(int i=0;i<32;i++){
        ans[i]=num[31-i];
    }
    return ans.to_ulong();

}
bool palindrome(int n)
{
    int rev=0;
    int temp=n;
    while(temp>0){
        int last=temp%10;
        rev=(rev*10)+last;
        temp=temp/10;
    }
    if (rev==n){
        return true;
    }
    return false;
}
bool checkArmstrong(int n){
	int sum=0;
	int temp =n;
	while(temp>0){
		int last=temp%10;
		sum=sum+(last*last*last);
		temp=temp/10;
	}
	if(n==sum){
		return true;
	}
	return false;
}
int sumOfAllDivisors(int n){
	int sum	= 0;
	int total=0;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			if(i%j==0){
				sum=sum+j;
			}
		}
	}
	total=total+sum;
	return total;
}
int calcGCD(int n, int m){
    int gcd=1;
    // for(int i=min(m,n);i>=1;i--){
    //     if(m%i==0 && n%i==0){
    //         gcd=i;
    //         break;
    //     }
    // }
    for(int i=1;i<=min(n,m);i++){
      if (m % i == 0 && n % i == 0) {
        gcd = i;
      }
    }
    return gcd;
}
bool isPrime(int n)
{
	if(n<=1){
		return false;
	}
	else{
	int half=(n/2)+1;
	for (int i=2;i<=half;i++){
          if (n % i == 0) {
            return false;
          }
        }
		return true;
        }
}

int main()
{
    int res=reverseBits(238766);
    cout<<res;
    return 0;
}