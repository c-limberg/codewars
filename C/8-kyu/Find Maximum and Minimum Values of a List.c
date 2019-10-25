//Your task is to make two functions, max and min (maximum and minimum in PHP and Python) that take a(n) array/vector of integers list as input and outputs, respectively, the largest and lowest number in that array/vector.
//Notes: You may consider that there will not be any empty arrays/vectors.

int min(int* array, int arrayLength)
{
  if(arrayLength==1) return array[0];
  else 
  {
    int tmp = array[0];
    for(int i=1;i<arrayLength;i++)
    {
      if(tmp>array[i]) tmp = array[i];
    }
    return tmp;
  }
}

int max(int* array, int arrayLength)
{
if(arrayLength==1) return array[0];
  else 
  {
    int tmp = array[0];
    for(int i=1;i<arrayLength;i++)
    {
      if(tmp<array[i]) tmp = array[i];
    }
    return tmp;
  }
}
