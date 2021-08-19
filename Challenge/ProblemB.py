def getGames():
    print("hi")


def main():
    n = int(input())
    teams = []
    for i in range (n):
        teamColors = input().split()
        teamColors = [int(i) for i in teamColors]
        teams.append({"host": teamColors[0],"guest": teamColors[1]})
    print(teams)


main()