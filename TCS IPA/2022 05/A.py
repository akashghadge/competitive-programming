import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt", "w")
sys.stderr = open("error.txt", "w")


class Painting:
    def __init__(self, id, name, price, type) -> None:
        self.id = id
        self.name = name
        self.price = price
        self.type = type


class ShowRoom:
    def __init__(self, painting_list) -> None:
        self.painting_list = painting_list

    def total_price(self, type):
        total = 0
        type = type.lower()
        for painting in self.painting_list:
            curr_type = painting.type
            curr_type = curr_type.lower()
            if(curr_type == type):
                total += painting.price
        return total

    def getPainterWithMaxCount(self):
        ans = {}
        for painting in self.painting_list:
            ans[painting.name] = ans.get(painting.name, 0)+1
        sorted(ans, key=lambda x: x[1])
        ans=list(ans)
        return ans[0]


n = int(input())
painting_list = []
for _ in range(0, n):
    id = int(input())
    name = input()
    price = int(input())
    type = (input())
    curr_painting = Painting(id, name, price, type)
    painting_list.append(curr_painting)
show_room = ShowRoom(painting_list)

total_type = input()
total_price = show_room.total_price(total_type)
print(total_price if total_price else "Not Found")
print(show_room.getPainterWithMaxCount())