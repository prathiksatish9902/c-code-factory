// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     int index = 0;
//     std::cout<<"enter the size of the array: "<<std::endl;
//     std::cin>>n;
//     std::vector<int> a[n];
//     std::cout<<"enter the elements of the array: "<<std::endl;
//     for(int i = 0; i < n; i++)
//     {
//         std::cin >> a[n];
//     }
//     for(int i = 0; i < n; i++)
//     {
//         if(a[i]!=0){
//             a[index++] = a[i];
//         }
//     }
//     while(index<n){
//         a[index++] = 0;
//     }
//     for(int i = 0;i < n; i++)
//     {
//         std::cout<<"result: "<<a[i]<<" "<<std::endl;
//     }

//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < n) {
        arr[index++] = 0;
    }


    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

