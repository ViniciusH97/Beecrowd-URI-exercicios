a = int(input())
b = int(input())
c = int(input())

maior = (int(a)+(int(b))+abs(int((a))-int(b)))/2
maior = (maior+int(c)+abs(maior-int(c)))/2

print('%d eh maior' % maior)