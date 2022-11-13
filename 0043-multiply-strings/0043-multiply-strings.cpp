class Solution {
public:
string multiply(string num1, string num2)
{
	if (num1 == "0" || num2 == "0") return "0";
	int length1 = num1.length();
	int length2 = num2.length();
	vector<int>vt(length1 + length2, 0);
	for (int i = length1 - 1; i >= 0; i--)
	{
		for (int j = length2 - 1; j >= 0; j--)
		{
			vt[i + j + 1] += (num2[j] - '0') * (num1[i] - '0');
		}
	}
	for (int k = length1 + length2 -1; k > 0; k--)
	{
		if (vt[k] >= 10)
		{
			vt[k - 1] += (vt[k] / 10);
			vt[k] = vt[k] % 10;
		}
	}
	int cnt = 0;
	string temp = "";
	for (int i = 0; i <vt.size(); i++)
	{
		if (vt[i] == 0 && i == cnt)
		{
			cnt++;
		}
		else
		{
			temp += vt[i]+'0';
		}
	}
	return temp;
}
};