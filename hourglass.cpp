/*
# solution only


int max_sum=-99999999;
   for (int irow=0;irow<4;irow++)
   {
        for (int icol=0;icol<4;icol++)
        {
            int sum=0;
            for(int i=0;i<3;i++)
            {
                sum+=arr[irow][icol+i]+arr[irow+2][icol+i];
            }        
            sum+=arr[irow+1][icol+1];
            if (sum>max_sum)
                max_sum=sum;
        }
   }

return max_sum;

*/