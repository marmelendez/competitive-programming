def isDangerous(positions):
    count = 1
    for i in range (len(positions)-1):

        if (positions[i] == positions[i+1]):
            count += 1
        else :
            count = 1
        
        if (count >= 7): 
            return "YES"
    return "NO"


def main():
    positions = input()

    print(isDangerous(positions))

main()