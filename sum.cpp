#include<bits/stdc++.h>

main(){
    int sum = 0;
    //std::vector<int> arr = {2, 5, 7, 4};
    std::cout<<"Hello World";
    int n = 4;
    int a,b;
    std:: cin>> a >>b;
    int arr[n] = {2, 4, 5, 3};
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    std::cout<<sum<<"\n";
    std::cout<<a+b<<"\n";
}