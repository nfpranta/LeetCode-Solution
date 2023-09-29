class Solution
{
public:
    string intToRoman(int num)
    {
        string s;
        if(num>=1000)
        {
            for(int i=0; i<num/1000; i++)
            {
                s+='M';
            }
            num=num-(num/1000)*1000;
        }
        if(num>=500)
        {
            if(num>=900)
            {
                s+="CM";
                num-=900;
            }
            else
            {
                for(int i=0; i<num/500; i++)
                {
                    s+='D';
                }
                num=num-(num/500)*500;
            }
        }
        if(num>=100)
        {
            if(num>=400)
            {
                s+="CD";
                num-=400;
            }
            else
            {
                for(int i=0; i<num/100; i++)
                {
                    s+='C';
                }
                num=num-(num/100)*100;
            }
        }
        if(num>=50)
        {
            if(num>=90)
            {
                s+="XC";
                num-=90;
            }
            else
            {
                for(int i=0; i<num/50; i++)
                {
                    s+='L';
                }
                num=num-(num/50)*50;
            }
        }
        if(num>=10)
        {
            if(num>=40)
            {
                s+="XL";
                num-=40;
            }
            else
            {
                for(int i=0; i<num/10; i++)
                {
                    s+='X';
                }
                num=num-(num/10)*10;
            }
        }
        if(num>=5)
        {
            if(num==9)
            {
                s+="IX";
                num-=9;
            }
            else
            {
                for(int i=0; i<num/5; i++)
                {
                    s+='V';
                }
                num=num-(num/5)*5;
            }
        }
        if(num>=1)
        {
            if(num==4)
            {
                s+="IV";
                num-=4;
            }
            else
            {
                for(int i=0; i<num; i++)
                {
                    s+='I';
                }
                num=num-(num/1)*1;
            }
        }
        return s;
    }
};
