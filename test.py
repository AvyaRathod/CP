class Marks:
    regno=000
    scores=[]

    def __init__(self,regno):
        self.regno=regno
    
    def read(self):
        print("input scores")
        self.scores = list(map(int,input().split()))
    
    def calculateTotalScore(self,Tscore):
        sum=0
        for i in self.scores:
            sum+=i
        self.total=sum
        Tscore = Tscore + [sum]

    def highscore(self,Tscore):
        count=0
        for i in Tscore:
            if(self.total<i):
                count+=1
        print(f"Total number of people with higher  score: {count}")

arr=[]
obj1=Marks(101)
obj1.read()
obj1.calculateTotalScore(arr)

obj1=Marks(102)
obj1.read()
obj1.calculateTotalScore(arr)

kristen=Marks(103)
kristen.read()
kristen.calculateTotalScore(arr)
kristen.highscore(arr)