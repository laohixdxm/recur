void pemu(array, mark, remain_len)
{
if remain_len == 0
  print break

for(i=0; i<sizeof(array); i++)
 if(mark[i] != -1)
  print array[i]
  mark[i] = -1
  pemu(array, mark, remain_len-1)
}

void pemu(array, mark, output_pos)
{
for(i=0; i<sizeof(array); i++)
 if(mark[i] != -1)
  print array[i]//print array[i] to output
  mark[i] = -1
  pemu(array, mark, output_pos+1)
  //mark[i] = 0
  //output back one
}
