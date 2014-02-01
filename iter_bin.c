

int iterBinarySearch(char* array, int lower, int upper, int target)
{
//mid = lower upper

while(lower <= upper)
{
mid = lower upper

if target == mid
 return mid
else target < mid
 lower = lower
 upper = mid - 1
else target > mid
 lower = mid + 1
 upper = upper
}

}
