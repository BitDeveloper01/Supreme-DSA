for (int i = 0; i < N; i++)
{
    sum += arr[i];
    if (sum > K)
    {
        return i;
    }
    else if (sum == K)
    {
        return i + 1;
    }
}
{10,20,30,20} --> 60
// GFG

for (i = 0; i < N; i++)
{
    if (sum + arr[i] > 50)       
        break;
    sum += arr[i];
}
return i;