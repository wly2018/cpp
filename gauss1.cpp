#include<iostream>
#include<stdio.h>
#include<cmath>
#include<stdlib.h>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
  int s1,i,j,k,n,pivot;
  fstream fs;
  fs.open("in.txt",fstream::in|fstream::out|fstream::app);
  
  fs >> n;
  vector<double> x,b,y;
  vector<int> d;
  vector<vector<double> > a;
  double s;
  x.resize(n);
  b.resize(n);
  y.resize(n);
  d.resize(n);
  a.resize(n);

  for (i=0;i<n;i++){
  fs >> b[i];
  d[i]=i;
  }
  for (j=0;j<n;j++)
    {
      a[j].resize(n,0);
  for (i=0;i<n;i++)
    fs >> a[j][i];
    }
  
  for (j=0;j<n;j++)  
  {
  //pivot
  pivot=j;
  for (k=j+1;k<n;k++)
    if (fabs(a[j][pivot])<fabs(a[j][k])) pivot=k;
  if (a[j][pivot]<=0) exit(-1);
  for (i=0;i<n;i++){    
    s=a[i][j];a[i][j]=a[i][pivot];a[i][pivot]=s;
  }
  s1=d[j];d[j]=d[pivot];d[pivot]=s1;

  //elimination
  for (i=j+1;i<n;i++)
    {
    s=a[i][j]/a[j][j];
    for (k=j;k<n;k++)
    a[i][k]=a[i][k]-a[j][k]*s;    
    b[i]=b[i]-b[j]*s;
    }
  }

  for (i=n-1;i>=0;i--)
  {
  x[i]=b[i];
  for (j=n-1;j>i;j--)
  x[i]=x[i]-a[i][j]*x[j];
  x[i]=x[i]/a[i][i];
  }
  
  
  for (i=0;i<n;i++)
  y[d[i]]=x[i];
  for (i=0;i<n;i++)
  cout << y[i] << ' ';
  cout << d[2];

  cout << endl;
  fs.close();
  //fclose(stdin);
  //fclose(stdout);
  return 0;
}

