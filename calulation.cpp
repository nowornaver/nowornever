// calulation.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//mm inch yard cm // inch ->yard
double getcm(int num) { //inch ->cm
    double cm = num * 2.54;
    

    return cm;
}
double getmm(double cm) { // cm -> mm
    double mm = cm * 10;

    return mm;


}
double getyard(double mm) { // mm -> yard
    double yard = mm * 0.001094;

    return yard;


}
double getinch(double num) { //   cm ->inch  
    double cm = num / 2.54;

    return cm;
}
double getmm1(double mm) { // yard -> mm 
    double yard = mm * 914.4;

    return yard;
}
double getmm2(double cm) { //   mm -> cm 
    double mm = cm / 10;

    return mm;


}
double getcm_yard(double cm) { // cm ->yard
    double as = cm *  0.010936 ;
    return as;

}

int main(void)
{
    int num;
    int num1;
    int num2;
    printf("입력할 수를 정하세요 1.inch 2.cm 3.yard 4.mm");
        scanf("%d", &num);
        printf("숫자도 넣어주세요");
        scanf("%d", &num2);
        printf("바꾸고자 하는것도 선택해주세요 1.inch 2.cm 3.yard 4.mm");
        scanf("%d", &num1);


        if (num == 1) {
            double ab = getcm(num2); // inch ->cm 바꾼 값이 저장되있다.
            if (num1 == 2) {
                printf("%d inch 를 cm로 바꾼값은 %f 이다.", num2,ab); // cm --

            }
            if (num1 == 3) { //inch ->yard
                double c = getmm(ab);//inch -> mm로 변환
                float d = getyard(c);
                // 변환한 값을 다른 함수에 넣어준다
                printf("%d inch 를 yard 로 바꾼값은 %f 이다.", num2, d);
            }
            if (num1 == 4) {// inch -> mm
                double a = getmm(ab);
                printf("%d inch를 mm로 바꾼값은 %f 이다.", num2, a);

            }
        }

        if (num == 2) { //ab inch 값 저장
            double ab = getinch(num2); // cm ->inch 바꾼 값이 저장되있다.
            if (num1 == 1) {
                printf("%d cm 를 inch로 바꾼값은 %f 이다.", num2, ab);// cm -> inch

            }
            if (num1 == 3) { //cm ->yard ( inch -> cm , cm -> mm . mm->yard
                double h = getcm_yard(num2);
                        
                printf("%d cm 를 yard 로 바꾼값은 %f 이다.", num2, h);
            }
            if (num1 == 4) {// cm -> mm
                double r = getmm(num2);
                printf("%d cm를 mm로 바꾼값은 %f 이다.", num2, r);

            }
        }
        if (num == 3) {
            double ab = getmm1(num2); // yard ->mm 바꾼 값이 저장되있다.  //  yard -> mm  mm -> cm   cm ->inch 
            if (num1 == 1) {
                double y = getmm2(ab);
                double o = getinch(y);
                printf("%d yard 를 inch로 바꾼값은 %f 이다.", num2, o);

            }
            if (num1 == 2) { //yard ->cm 
                double c = getmm1(num2);//yard -> mm로 변환 //잘안돼
                double d = getmm2(c); // mm -> cm
                // 변환한 값을 다른 함수에 넣어준다
                printf("%d yard 를 cm 로 바꾼값은 %f 이다.", num2, d);
            }
            if (num1 == 4) {// yard -> mm
                double j = getmm1(num2);
                printf("%d yard를 mm로 바꾼값은 %f 이다.", num2, j);

            }
        }
        if (num == 4) {
            double ab = getmm2(num2); // mm ->cm 바꾼 값이 저장되있다.
            if (num1 == 1) { //mm -> cm cm ->inch  
                double q = getmm2(num2);
                double t = getinch(q);
                printf("%d mm 를 inch로 바꾼값은 %f 이다.", num2, t);

            }
            if (num1 == 3) { //mm ->yard
               double w = getyard(num2);
                // 변환한 값을 다른 함수에 넣어준다
                printf("%d mm 를 yard 로 바꾼값은 %f 이다.", num2, w);
            }
            if (num1 == 2) {// mm -> cm
                double a = getmm2(num2);
                printf("%d mm를 cm로 바꾼값은 %f 이다.", num2, a);

            }
        }

      
        


       
    return 0;
}
