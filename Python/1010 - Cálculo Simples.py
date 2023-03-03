pg = 0
for c in range(0,2):
    cod, q, vlr = input().split()
    cod, q, vlr = [int(cod), int(q), float(vlr)]
    pg += q * vlr

total = pg 

print('VALOR A PAGAR: R$ {:.2f}'.format(total))