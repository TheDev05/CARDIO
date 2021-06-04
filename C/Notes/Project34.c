//************PRINTING OF MATRIX SIDE BY SIDE***************
// #include <stdio.h>
// int main()
// {

//     int matrix1[2][3];
//     int matrix2[2][3];
//     int p;

//     printf("ENTER YOUR INTERGRAL MATRIX:\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     printf("ENTER YOUR CHARACTER MATRIX:\n");
//     for (int m = 0; m < 2; m++)
//     {
//         for (int n = 0; n < 3; n++)
//         {
//             scanf("%d", &matrix2[m][n]);
//         }
//     }

//     printf("YOUR REQUIRED MATRIX IS :\n");

//     for (int q = 0; q < 3; q++)
//     {
//         p = 0;
//         printf("  %d", matrix1[p][q]);
//     }

//     for (int q = 0; q < 3; q++)
//     {
//         p = 0;
//         printf("  %d", matrix2[p][q]);
//     }

//     printf("\n");
//     for (int q = 0; q < 3; q++)
//     {
//         p = 1;

//         printf("  %d", matrix1[p][q]);
//     }

//     for (int q = 0; q < 3; q++)
//     {
//         p = 1;

//         printf("  %d", matrix2[p][q]);
//     }

//     return (0);
// }


//*********************************************************************************************************************
//?<1ST REVISE|17.02.2021>

// #include <stdio.h>
// int main()
// {
//     int arr[3][3], count;
//     int arr1[3][3];
//     count = 3;

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("ENTER YOUR CHARACTER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }

//     printf("final:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("\n");

//         for (int j = 0; j < count; j++)
//         {

//             printf(" %d", arr[i][j]);
//         }
//         for (int j = 0; j < count; j++)
//         {

//             printf(" %d", arr1[i][j]);
//         }
//     }

//     return (0);
// }
