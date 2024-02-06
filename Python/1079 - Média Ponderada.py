linha = int(input())

for i in range(linha):
    v = list(map(float, input().strip().split()))[:3]

    media = ((v[0]*2) + (v[1]*3) + (v[2]*5))/10;

    print(round(media,1))