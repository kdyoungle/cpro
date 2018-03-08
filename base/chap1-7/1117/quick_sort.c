#include<stdio.h>

void quick_sort(int array[],int left,int right){

    for (int n = 0; n < 14; ++n){
        printf("%.3i  ", array[n]);
    }
    printf("\n");
    int i = left,j = right;
    int temp;
    int pivot;

    pivot = array[(left + right) / 2];
    

    while (i <= j){
    
        //从左到右找到大于等于基准点的元素
    
        while(array[i]< pivot) {
            i++;

        }

        //从右到左找到小于等于基准点的元素

        while(array[j]>pivot){
        
            j--;
        }
        //如果i<=j,则互换元素
        if(i<=j){
        
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }


    }
    if(left < j){
    
        quick_sort(array,left,j);
    }
    if(i<right){
       quick_sort(array,i,right);
    }

}


int main(){

    int array[] = {12,17,258,856,95,56,78,74,93,99,98,35,39,32.333};
    int i,length;

    length = sizeof(array) / sizeof(array[0]);

    quick_sort(array, 0 ,length - 1);

    //排序结果输出

    printf("排序后的结果是：\n");
    for(i = 0;i<length;i++){
        printf("%d  ",array[i]);
    }
    putchar('\n');
    return 0;

}
