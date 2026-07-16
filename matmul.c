#include<stdio.h>
int main()
{
    char ch = 'y';
    while(ch =='y' || ch == 'Y')
    {
        int i,j,m,n,p,q,k;
        printf("Enter the row of the first matrix:");
        scanf("%d",&m);
        printf("Enter the column of the first matrix:");
        scanf("%d",&n);
        printf("Enter the row of the second matrix:");
        scanf("%d",&p);
        printf("Enter the column of the second matrix:");
        scanf("%d",&q);
        if (n == p)
        {
            int mat1[m][n],mat2[p][q],mat[m][q];
            printf("Enter the elements for 1st matrix: ");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&mat1[i][j]);
                }
            }
            printf("Enter the elements for 2nd matrix: ");
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    scanf("%d",&mat2[i][j]);
                }
            }
            for(i=0;i<m;i++)
            {
                for(j=0;j<q;j++)
                {
                    mat[i][j] = 0;
                }
            }
            for(i=0;i<m;i++)
            {
                for(j=0;j<q;j++)
                {
                    for(k=0;k<n;k++)
                    {
                        mat[i][j] = mat[i][j] + (mat1[i][k] * mat2[k][j]);
                    }
                }
            }
            printf("After Multiplication:\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf("%d  ",mat[i][j]);
                }
                printf("\n");
            }
            printf("Do you want to continue?(y/n)");
            scanf(" %c", &ch);
        }
        else
        {
            printf("Inappropriate credentials.\nDo you want to try again?(y/n)");
            scanf(" %c", &ch);
        }
    }
    return 0;
}
