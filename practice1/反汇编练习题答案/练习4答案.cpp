int __cdecl testfunc(int agr_1,int agr_2,int agr_3);
int __cdecl answer(int agr_1,int agr_2,int agr_3)
{
	int sum;
	sum = (agr_1-agr_3-agr_2)+testfunc(agr_1,agr_3,agr_2);
	return sum;
}