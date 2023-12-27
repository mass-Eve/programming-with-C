// WAP to print fibonacci sequence upto n terms.
        // 0, 1, 1, 2, 3, 5, 8, 13, 21, ........., n
#include<stdio.h>

int fs_recur(int n)
{
    if (n == 0)
        return 0;
    
    else if (n == 1)
        return 1;

    else{
        return fs_recur(n - 1) + fs_recur(n - 2);
    }
}

void main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", fs_recur(i));
    }
}

/*
    n == 5
            i == 0;
                    fs(0)
                    >>> 0
            i == 1;
                    fs(1)
                    >>> 1
            i == 2;
                    fs(2)
                    >>> 1 + 0 
                    >>> 1
            i == 3;
                    fs(3)
                    >>> fs(3-1) + fs(3 - 2)
                        fs(2) + fs(1)
                        fs(2-1) + fs(2-2) + fs(1)
                        fs(1) + fs(0) + fs(1)
                    >>> 1 + 0 + 1 
                    >>> 2   
            i == 4;
                    fs(4)
                    >>> fs(4-1) + fs(4-2)
                        fs(3) + fs(2)
                        fs(3-1) + fs(3-2) + fs(2-1) + fs(2-2)
                        fs(2) + fs(1) + fs(1) + fs(0)
                        fs(2-1) + fs(2-2) + 1 + 1 + 0
                        fs(1) + fs(0) + 2
                        >>> 3
            therefore, 
                        0, 1, 1, 2, 3

*/