void selection_sort(int& a[]){
  for(int count = 0; count < (sizeof(a) - 1); count++){
    swap(a[count],a[get_minimum(a,count)]);
    }
  }
  
void swap(int& first,int& second){
  int temp = first;
  first = second;
  second = first;
  }
  
int get_minimum(int a[],int position){
  int min = position;
  for(int x = (position + 1) <= (sizeof(a) - 1); x++){
    if(a[x] < a[min]){
      min = x;
      }
    }
    return min;
  }
    
    
