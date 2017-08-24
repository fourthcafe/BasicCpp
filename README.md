# BasicCpp
열혈C++ 프로그래밍

## Ch02 C언어 기반의 C++ 2

### 확인 문제 `p62`

#### 02-1 키워드 `const`를 사용하는 다음 문장들을 의미를 설명하라.
`const int num = 10;`

변수 num을 상수화한다.

`const int * prt1 = &val1;`

포인터 ptr1을 이용해서 val1의 값을 변경할 수 없음.

`int * const ptr2 = &val2;`

포인터 ptr2가 상수화 됨.

`const int * const ptr3 = &val3;`

포인터 ptr3가 상수화 되었으며, ptr3를 이용해서 val3의 값을 변경할 수 없음.

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

### 02-4 참조자(Reference)와 함수

* Call-by-value :: 값을 인자로 전달하는 함수의 호출방식
    * 함수의 내부에서 함수 외붕 선언된 변수에 접근이 불가능함.
    ```
    // 두 변수에 저장된 값을 서로 바꿔서 저장할 목적을 달성할 수 없음
    int Adder(int num1, int num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    ```

* Call-by-reference :: 주소 값을 인자로 전달하는 함수의 호출방식
    ```
    // ptr1과 ptr2의 값이 서로 바뀜
    void SwapByRef(int * ptr1, int * ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    ```

* Call-by-value, reference 를 구분하는데 중요한 것은 `주소 값이 참조의 도구로 사용되었다`는 사실이 중요한 것으로, 주소 값이 전달되었다는 사실은 중요하지 않다.

    * Call-by-reference 의 정의

        __`주소 값을 전달 받아서, 함수 외부에 선언된 변수에 접근하는 형태의 함수 호출`__

        = 주소 값이 외부 변수의 참조도구로 사용되는 함수의 호출을 말함.

    * 다음 함수는 Call-by-value, reference 두가지 형태로 전부 쓰일 수 있는 function-signature 이다.

        ```
        int * SimpleFunc(int *ptr)
        ```

        ```
        // Call-by-value
        // 연산 주체가 값(value), 다만 그 값이 주소 값 일뿐.
        int * SimpleFunc(int *ptr) {
            return ptr + 1;
        }
        ```

        ```
        // Call-by-reference
        // 주소 값을 이용해서 함수 외부에 선언된 변수를 참조(reference)
        int * SimpleFunc(int *ptr) {
            if (ptr == NULL) {
                reutrn NULL:
            }

            *ptr = 20;
            return ptr;
        }
        ```

    * C++ 에서 함수 외부에 선언된 변수의 접근 방법으로 두 가지가 존재
        * 주소 값을 이용한 Call-by-reference
        * 참조자를 이용한 Call-by-reference


    * 포인터(pointer)와 참조자(reference)의 차이점

        [REF. Developer WhiteSnake's Blog](http://whitesnake.uzoo.in/29)

        * 참조자는 한번 가리킨 대상을 변경할 수 없지만, 포인터는 자신이 가리키는 대상을 언제든지 변경할 수 있다.
            ```
            string nickname("fourthcafe");
            string address("seoul");
            string &ref = nickname;    // 초기화
            ref = address;          // 위 코드는 참조 대상을 nickname에서 address로 변경하는 게 아니라
                                    // nickname객체의 값을 address의 값으로 변경하게 된다.
            ```

        * 포인터
            ```
            string *pointer = &nickname;    // 초기화
            pointer = &address;            // pointer는 이제 address을 가리킨다.
            ```