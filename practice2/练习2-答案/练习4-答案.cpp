int __cdecl testfunc(int agr_1,int agr_2,int agr_3,int agr_4);
int __cdecl answer(int agr_1,int agr_2,int agr_3,int agr_4)
{
	int sum;
	sum = (agr_1+agr_4+agr_2+agr_3)+testfunc(agr_1,agr_4,agr_2,agr_3);
	return sum;
}