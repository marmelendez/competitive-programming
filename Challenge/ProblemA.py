def getCoins(n, values):
    values = sorted(values)

    sisterSum = 0
    mySum = 0
    count = 0

    for i in range (n):
        sisterSum += values[i] #Suma total de los valores

    while True:  
        count = count + 1
        sisterSum = sisterSum - values[len(values)-count] #Resto a la suma total el valor mas grande
        mySum += values[len(values)-count] #Sumo ese valor a mi suma total

        if(sisterSum < mySum):  #Si mi suma ya es mayor que la de mi hermano rompe el ciclo
            break  

    return count #Regresa numero de monedas

def main():
    n = int(input())
    seq = input().split()
    seq = [int(i) for i in seq]

    print(getCoins(n, seq))

main()