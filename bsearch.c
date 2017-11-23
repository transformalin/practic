int b_search(const int *const data,const int x,const int len,int left,int right)
{
	if(left>right) return FAIL; // числа нет
	int mid = (left+right)/2; // среднее арифметическое левой и правой границы
	if(data[mid]==x)
	{
		// ищем первый элемент строго больший заданного числа Х. худший случай O(len-mid-1)
		for(int i = mid+1;i<len;i++) if(data[i]>x) return i;
		return NONE; //такого числа нет
	}
	if(data[mid]>x) b_search(data,x,len,left,mid-1); // ищем в левой части массива
	else b_search(data,x,len,mid+1,right); // ищем в правой части массива
}
