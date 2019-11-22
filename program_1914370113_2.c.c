#include<stdio.h>
void main()
{
    printf("\tBIODATA PRIBADI\n\n");
    printf("NAMA 		: ALICIA YUNIKE RIONA\n");
    printf("NPM 		: 1914370113\n");
    printf("KELAS 		: REGULER 1D\n");
    printf("PRODI 		: SISTEM KOMPUTER\n");
    printf("FAKULTAS	: SAINS & TEKNOLOGI\n");
    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=4;i>=0;i--){
        for(int j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
