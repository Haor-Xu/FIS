#include <stdio.h>
//n as length of diagonal should be calculated before function and might be done by using singel interation.
void MSRProduct (int *MSR_JM, double *MSR_VM, double *Vec, int n, double *Result)
{
   for (int i=0; i<n ; i++)
   {
      Result[i] = MSR_VM[i]*Vec[i];
   }
   
}
#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r");  // 打开文件，假设文件名为data.txt
    if (file == NULL) {
        printf("无法打开文件\n");
        return 1;
    }

    double array1[1000];  // 假设最多1000行数据
    double array2[1000];
    int count = 0;

    while (fscanf(file, "%lf %lf", &array1[count], &array2[count]) == 2) {
        count++;  // 读取每行的两个浮点数，存储到两个数组中
    }

    fclose(file);  // 关闭文件

    // 输出读取的数据，验证结果
    for (int i = 0; i < count; i++) {
        printf("array1[%d] = %f, array2[%d] = %f\n", i, array1[i], i, array2[i]);
    }

    return 0;
}