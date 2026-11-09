void shellsort(int a[], int n)
 {
    int gap, j, k;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (j = gap; j < n; j++) 
        {
            for (k = j - gap; k >= 0; k -= gap)
           {
                if (a[k + gap] >= a[k])
                    break;
                else 
                {
                    int temp = a[k];
                    a[k] = a[k + gap];
                    a[k + gap] = temp;
                }
            }
        }
    }
}

int findContentChildren(int g[], int gs, int s[], int ss) 
{
    shellsort(g, gs);
    shellsort(s, ss);
    int i = 0, j = 0;  
    while (j < gs && i < ss) 
    {
        if (s[i] >= g[j]) 
        {
            j++;
        }
        i++;
    }
    return j;
}