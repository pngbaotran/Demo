#include <stdio.h>
 int main( ){
 	int n;
 	 do{
	 
	 printf("Nhap vao mot so nguyen duong n:");
	  scanf("%d",&n);
	} 
	while( n <= 0 );

   int tong_duong = 0;
    for (int i = 1 ; i < n ; i++){
  	 if( n % i == 0){
  	 	tong_duong = tong_duong + 1; 
	   }
	 
  }
  if (tong_duong==n){
  
   printf("\n So nay la so dung!");
    }
	else {
    	printf("\n La so khong dung!"); 
}

	int tam=n;
	int demchan=0;
	int maxchuso=0;
	 while(tam>0){
	 	int chuso = tam % 10;
		 if(chuso = tam % 2 == 0 ){
		 	demchan++; 
		 }
		if(chuso>maxchuso){
			maxchuso=chuso; 
		} 
		tam=tam/10; 
	 }
	  printf("Chu so chan:%d;chu so lon nhat:%d\n,demchan,maxchuso"); 
	 
	  int km;
	   printf("Nhap so km:");
	    scanf("%d",&km);
	float tien=0;
	 if(km==1){
	 	tien=12000;
	}else if(km>=2 && km<=30){
		tien=12000+(km-1)*10000;
}   else if (km>=31){
	tien=12000+29*10000+(km-30)*8000;
	 
} 
	if (km>100) {
		tien=tien-(tien*10/100);
		 
	}
	printf("%.0f\n",tien); 
	   
	return 0;  
 } Ho ten : PhanNgocBaoTran 
* MSSV : 6751071080 
* Lop : ..........
* De so : 2 Cau: 1
* Cam doan: Bai lam do em tu thuc hien, khong su dung tai lieu,
* Internet, cong cu AI hay tu hoan thien code.
