//Write function avg which calculates average of numbers in given list.

double find_average(double* array, int length) {
  double avg;
  
  for(int i=0;i<length;i++)
  {
    avg += array[i];
  }
  
  return avg/length;
}
