#include<stdio.h>

int main(){
	int n=3;
	float a[n][n];
	float b[n];
	double x[n];

	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			scanf("%f", &a[i][j]);
		}
	}

	for(int i=0; i<n; i++){
		scanf("%f", &b[i]);
	
	}
	//guass elimenation
	for(int k=0;k<n; k++){
		for(int i=k+1;i<n;i++){
			float ratio=a[i][k]/a[k][k];
			for(int j=k+1; j<n;j++){
				a[i][j]-=ratio*a[k][j];
			}
			b[i]=b[i]-ratio*b[k];
		}
	}



	//solve the equation
	x[n-1]=b[n-1]/a[n-1][n-1];

	for(int i=n-2;i>=0;i--){
		float sum=0;
		for(int j=i;j<=n;j++){
			sum+=a[i][j]*x[j];
		}
	x[i]=(b[i]-sum)/a[i][i];
	}

	for(int i=0; i<n;i++)
		printf("%f\n", x[i]);
}
