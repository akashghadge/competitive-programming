import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


class Scholar:
    def __init__(self, id, name, state, marks) -> None:
        self.id = id
        self.name = name
        self.state = state
        self.marks = marks


class ScholarResult:
    def __init__(self, scholarList) -> None:
        self.scholarList = scholarList

    def first(self, slist, grade):
        allS = []
        for s in slist:
            total = 0
            for mark in s.marks:
                total += mark
            per = total/3
            per = round(per)
            g = 'd'
            if(per >= 80):
                g = 'a'
            elif per >= 60:
                g = 'b'
            elif per >= 50:
                g = 'c'
            curr = {}
            curr['id'] = s.id
            curr['name'] = s.name
            curr['state'] = s.state
            curr['marks'] = s.marks
            curr['grade'] = g
            curr['total'] = total
            allS.append(curr)
            self.scholarList = allS
        ans = []
        for s in self.scholarList:
            if(s['grade'] == grade):
                ans.append(s)
        ans = sorted(ans, key=lambda x: x['total'], reverse=True)
        return ans


n = int(input())
slist = []
for _ in range(0, n):
    id = int(input())
    name = input()
    state = input()
    marks = []
    for j in range(3):
        marks.append(int(input()))
    slist.append(Scholar(id, name, state, marks))

grade = input()


sr = ScholarResult(slist)
ans = sr.first(slist, grade)
for val in ans:
    print(val['id'])
