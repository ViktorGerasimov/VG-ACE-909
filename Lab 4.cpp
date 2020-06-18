#include <iostream>


int find_number()
{
	int res  = -1;
	int m[3];
	int k = 0;
	int j = 0;
	long long int  i;
	for(i = 1; i < 100000000000000000; i++)
	{	
		m[0] = 0; m[1] = 0;
		k = 0;
		for( j = 2; j <= 20; j++)
		{
			if(i % j != 0)
			{
				if(k > 2) break;
				m[k] = j;
				k++;
			}
		}
		if(k == 2)
		{
			if(m[0] == m[1]-1)
			{
				res = i;
				break;
			}	
		}
	}
		return res;
}


int main(){
	std::cout << find_number();
}
