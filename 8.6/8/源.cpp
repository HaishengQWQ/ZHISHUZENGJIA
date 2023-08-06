#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
int main()
{
	/*std::vector<int>  nums{ 2,7,11,15 };
	int target = 9;
	int oi[1000]{};
	memset(oi, -1, sizeof(oi));
	for (int i = 0; i < nums.size(); i++)
	{
		if (oi[nums[i]]>-1)
		{
			std::cout << oi[nums[i]] <<" "<< i << std::endl;
			break;
		}
		oi[target - nums[i]] = i;
	}*/
	int x = 11213;
	if (x < 0) {
		std::cout << "false" << std::endl;
		return 0;
	}
	char str1[100]{};
	std::string str = std::to_string(x);
	for (int i = 0, j = str.size() - 1; i < j;)
	{
		if (str[i] != str[j])
		{
			std::cout << "false" << std::endl;
			return 0;
		}
		i++, j--;
	}
	std::cout << "true" << std::endl;


	
}