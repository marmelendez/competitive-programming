import queue

# #########################################################
# ################### HELPER FUNCTIONS ####################
# #########################################################

def printMaze(maze):
    """Prints the maze"""
    for i in range(len(maze)):
        for j in range(len(maze[0])):
            print(maze[i][j], end=" ")
        print()


def printResult(maze, path):
    """Prints the result of the maze"""
    for i in range(len(maze)):
        for j in range(len(maze[0])):
            if (i, j) in path:
                print(1, end=" ")
            else:
                print(0, end=" ")
        print()


def is_safe(maze, x, y):
    """Checks if the position (x,y) is safe"""
    return x >= 0 and x < len(maze) and y >= 0 and y < len(maze[0]) and maze[x][y] == 1


def is_goal(maze, x, y):
    """Checks if the position (x,y) is the goal"""
    return x == len(maze) - 1 and y == len(maze) - 1


# #########################################################
# ##################### BACKTRACKING ######################
# #########################################################
# Time Complexity: O(2^(n * m)).
# Auxiliary Space: O(n * m).
# Where n is the number of rows and m is the number of columns.


def find_path_backtracking( maze ):

    """Finds the path to the goal using backtracking
    1.- Create a path matrix filled with 0s
    2.- Call the helper function
    """

    path = [ [ 0 for _ in range(len(maze[0])) ] for _ in range(len(maze)) ]
     
    find_path_backtracking_helper(maze, 0, 0, path)
    return path


def find_path_backtracking_helper(maze, x, y, path):

    """Finds the path to the goal using backtracking
    1.- If the current position is the goal
        - add it to the path
        - return True
    2.- If the current position is safe
        - add it to the path
        - check left, right, up and down
        - if it is a valid path:
            - return True
        - else
            - remove it from the path
            - return False
    """

    if is_goal(maze, x, y):
        path[x][y] = 1
        return True

    if is_safe(maze, x, y):

        if path[x][y]: return False

        path[x][y] = 1
        if find_path_backtracking_helper(maze, x + 1, y, path): return True
        if find_path_backtracking_helper(maze, x, y + 1, path): return True
        if find_path_backtracking_helper(maze, x - 1, y, path): return True
        if find_path_backtracking_helper(maze, x, y - 1, path): return True
        path[x][y] = 0

        return False


# #########################################################
# ################### BRANCH AND BOUND ####################
# #########################################################
# Time Complexity: O(2^(n * m)).
# Auxiliary Space: O(n * m).
# Where n is the number of rows and m is the number of columns.


def find_path_branch_and_bound(maze, resultPath):
    """Finds the path using the branch and bound technique
    1.- Create a list of pathsm set current position to the start and add it
    2.- While the current path is not empty
        - Get the first path from the path
        - If the current position is the goal
            - add it to the result path
            - return True
        - If the current position is safe
            - add right and left to the path
            - add path to the result path
    3.- Return False
    """
    queueList = queue.Queue()
    visited = [ [ 0 for _ in range(len(maze[0])) ] for _ in range(len(maze)) ]
    x = 0
    y = 0
    queueList.put((x, y))
    
    while not queueList.empty():
        x, y = queueList.get()
        if is_goal(maze, x, y):
            resultPath.append((x, y))
            return True
        if is_safe(maze, x, y):
            if visited[x][y]: continue
            visited[x][y] = 1
            queueList.put((x + 1, y))
            queueList.put((x, y + 1))
            queueList.put((x - 1, y))
            queueList.put((x, y - 1))
            resultPath.append((x, y))
    return False


def main():

    print("Enter number of rows")
    M = int(input())
    print("Enter number of columns")
    N = int(input())

    maze = []
    for i in range(M):
        print("Enter row", i)
        line = input().split()
        maze.append([int(x) for x in line])

    print("Backtracking")
    path = []
    find_path_backtracking(maze)
    printResult(maze, path)

    print("Branch and bound")
    path = []
    find_path_branch_and_bound(maze, path)
    printResult(maze, path)

main()