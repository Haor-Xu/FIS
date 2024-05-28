#include <stdio.h>
//n as length of diagonal should be calculated before function and might be done by using singel interation.
void MSRProduct (int *MSR_JM, double *MSR_VM, double *Vec, int n, double *Result)
{
   for (int i=0; i<n ; i++)
   {
      Result[i] = MSR_VM[i]*Vec[i];
   }
   
}
int main() {
    // 打印 "Hello, World!" 到控制台
    printf("Hello, World!\n");
    return 0; // 程序执行成功返回 0
} 