/*
ţţ�ڵ��ϼ���һ�����ף����������׷�����ǰ�����˺ܶ��С�ˣ�������һ����ָ����ЩС�˵������ͻᷢ�����±仯��
���С��ԭ����������ż����ô�����ͻ���һ�룬���С��ԭ����������������ô�����ͻ��һ��
����ţţ�뿼���㣬��Ҫ����ٴ���ָ��������С�˵��������1�� 
*/ 
#include <bits/stdc++.h>
using namespace std;
char s[105];
int main() 
{
    int l, ans = 0, tops = 1, now;
    scanf("%s", s + 1);
	
    l = strlen(s + 1);
    			
	for(int i = 1; i <= l; i++) s[i] -= '0';
    
    for(int i;i<=l;i++)    
	{
		printf("%c ",s[i]);
	}
    
	while(tops < l || s[tops] != 1) 
    {
        ans++;
        if(s[l] % 2) 
        {
            now = l;
            s[now]++;
            while(s[now] == 10) 
            {
                s[now - 1]++;
                s[now] = 0;
                now--;
                if(now < tops)
                {
                    tops = now;
                }
            }
        } 
		else 
        {
            for(int i = tops; i <= l; i++) 
            {
                if(s[i] % 2)
                {
                    s[i + 1] += 10;
                }
                s[i] = s[i] / 2;
                if(i == tops && s[i] == 0)
                { 
                    tops++;
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
