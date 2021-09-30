
class node:
    def __init__(self,x=None):
        self.val=x
        self.next=None
        self.pre=None


class tnode:
    def __init__(self,x):
        self.val=x
        self.left=None
        self.right=None

class tree:
    def __init__(self,x):
        self.val=x
        self.left=None
        self.right=None

p=tree(10)
p.left=tnode(12)
p.right=tnode(15)
p.left.left=tnode(25)
p.left.right=tnode(30)
p.right.left=tnode(36)

# print(t.left.val)

y=node()
x=y
def doubleit(t):
    global x
    if t.left!=None:
        doubleit(t.left)
    # print(t.val)
    if x.val==None:
        x.val=t.val
    else:
        z=x
        # print(t.val)
        x.next=node(t.val)
        x=x.next
        x.pre=z
    if t.right!=None:
        doubleit(t.right)
doubleit(p)

while(y.next!=None):
    print(y.val)
    y=y.next
print(y.val)
while(y.pre!=None):
    print(y.val)
    y=y.pre
print(y.val)







