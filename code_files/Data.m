function Out=Data()
fileID = fopen('EventLog.txt','r');
formatSpec = '%d %f';
B=fscanf(fileID,formatSpec);
[x, y]=size(B);
x=x/2;
sizeA=[2 x];
fileID = fopen('EventLog.txt','r');
formatSpec = '%d %f';
A = fscanf(fileID,formatSpec,sizeA);
A=A';
Out=A;
end