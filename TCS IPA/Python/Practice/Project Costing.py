import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


class Project:
    def __init__(self, projectId, projectName, manHours, technologyList) -> None:
        self.projectId = projectId
        self.projectName = projectName
        self.manHours = manHours
        self.technologyList = technologyList
        self.avgProjCost = 0

    def calculateProjCost(self, rate):
        return rate*self.manHours


class Organization:
    def __init__(self, orgName, ProjList) -> None:
        self.orgName = orgName
        self.ProjList = ProjList

    def projAvgCostByTechnology(self, id, rate):
        currProject = None
        for project in self.ProjList:
            if(project.projectId == id):
                currProject = project
        if(currProject is None):
            return None
        avgCost = currProject.calculateProjCost(
            rate)/len(currProject.technologyList)
        currProject.avgProjCost = avgCost
        return currProject


projectList = []
n = int(input())

for _ in range(n):
    id = int(input())
    name = (input())
    hours = int(input())
    m = int(input())
    techList = []
    for j in range(m):
        techList.append(input())
    projectList.append(Project(id, name, hours, techList))


org = Organization("Org", projectList)

obj = org.projAvgCostByTechnology(int(input()), int(input()))
if(obj is None):
    print("Project not found")
    exit()
print(obj.projectId, obj.projectName, obj.manHours,
      obj.technologyList, obj.avgProjCost, sep=" ")
