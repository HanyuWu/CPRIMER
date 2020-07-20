# Study Note

---

* 容器分类与测试(一) &nbsp;[here](https://www.bilibili.com/video/BV1Ts411L74e?p=3)
  
  * 空指针作为形参，传入时使用其他指针类型，在函数中进行类型转换，编译与运行皆可成功。这也是传给qsort的函数要求。
     ```c++
     void print(const void* a){
       std::cout << *(int*)a;
     }
     int main(){
       int n = 9;
       print(&n);
     }
     ```
  
  *  std::array 用法 
     ```c++
     std::array< class T, size_t N >
     ```

* 容器分类与测试(二) &nbsp;[here](https://www.bilibili.com/video/BV1Ts411L74e?p=4)
  
  * vector 每次增加空间后，容量是以前的两倍。

    ```c++
    using namespace std; 
    int main(){
      vector<int> a = {1,2,3};
      a.push_back(4);
      std::cout << (int)a.capacity() <<"\n";
    }
    ```
  * bsearch 不一定能比 find 快，详情可看[bsearch](http://www.cplusplus.com/reference/cstdlib/bsearch/)。
  
    ```c++
    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <ctime>

    int compareints (const void * a, const void * b)
    {
      return ( *(int*)a - *(int*)b );
    }

    using namespace std; 
    int main(){
        vector<int> a;
        int n = 500000;
        while (n--){
          a.push_back(rand());
        }
        a.push_back(5);
        clock_t timestart = clock();
        auto tar = ::find(a.begin(), a.end(), 5);
        cout << clock() - timestart <<"\n";
    
        int tar2 = 5;
        timestart = clock();
        sort(a.begin(),a.end());
        auto tar3 = (int*)bsearch (&tar2, a.data() , a.size(), sizeof (int), compareints);
        cout << clock() - timestart <<"\n";
    }
    ```

    这次测试 bsearch 比 find 慢，可能是因为sort的复杂度所致。

* sa