class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<int>v;
	v.push_back(1);
	for(int i=0;i<rowIndex;i++)
	{
		vector<int>m;
		for(int j=0;j<=i+1;j++)
		{
				if(j==0 or j==i+1) m.push_back(1);
				else m.push_back(v[j-1]+v[j]);
		}
             v=m;
	}
        return v;
    }
};
