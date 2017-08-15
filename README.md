# BasicCpp
열혈C++ 프로그래밍

## Ch02 C언어 기반의 C++ 2

### 확인 문제 `p62`

#### 02-1 키워드 `const`를 사용하는 다음 문장들을 의미를 설명하라.
`const int num = 10;`
* 변수 num을 상수화한다.

`const int * prt1 = &val1;`
* 포인터 ptr1을 이용해서 val1의 값을 변경할 수 없음.

`int * const ptr2 = &val2;`
* 포인터 ptr2가 상수화 됨.

`const int * const ptr3 = &val3;`
* 포인터 ptr3가 상수화 되었으며, ptr3를 이용해서 val3의 값을 변경할 수 없음.

[REF1](http://tapito.tistory.com/31), [REF2](http://hashcode.co.kr/questions/83/const-int-const-int-const-int-const-%EA%B0%84%EC%9D%98-%EC%B0%A8%EC%9D%B4%EB%8A%94-%EB%AD%94%EA%B0%80%EC%9A%94)


#### 02-2 실행중인 프로그램은 운영체제로부터 메모리 공간을 할당 받는데, 이는 크게 데이터, 스택, 힙 각각의 영역으로 나뉜다. 각각의 영역에는 어떠한 형태의 변수가 할당되는지 설명하라. 특히 C언어의 malloc과 free함수와 관련해서도 설명하라.
* 데이터
    * 전역변수가 저장되는 영역
* 스택
    * 지역변수 및 매개변수가 저장되는 영역
* 힙
    * malloc 함수호출에 의해 프로그램이 실행되는 과정에서 동적으로 할당이 이뤄지는 영역
* malloc & free
    * malloc 함수호출에 의해 할당된 메모리 공간은 free 함수호출을 통해서 소멸하지 않으면 해제되지 않는다.

### 02-3 참조자(Reference) `p67`

* 참조자 선언

    `int &num2 = num1;`
    * 참조자는 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름

* 참조자의 수에는 제한이 없으며, 참조자를 대상으로도 참조자를 선언할 수 있다.

    ```
    int num1 = 8080;
    int &num2 = num1;
    int &num3 = num1;
    ```
    ```
    int num1 = 8080;
    int &num2 = num1;
    int &num3 = num2;
    ```

* 참조자의 선언 가능 범위
    * 변수에 대해서만 선언이 가능하고, 선언됨과 동시에 누군가를 참조해야한다.

        `int &ref = 20 (불가)`

    * 상수를 대상으로 참조자를 선언할 수 없다. 미리 참조자를 선언했다가 후에 누군가를 참조하는 것도 불가능하다. 참조의 대상을 바꾸는 것도 불가능하다.

        `int &ref;  (불가)`

    * 참조자를 선언하면서 NULL로 초기화하는 것도 불가능하다. (포인터 변수의 선언처럼)

        `int &ref = NULL;   (불가)`