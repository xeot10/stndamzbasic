
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

t=tree(4)
t.left=tnode(2)
t.right=tnode(6)
t.left.left=tnode(1)
t.left.right=tnode(3)
t.right.left=tnode(5)
t.right.right=tnode(7)

def anc(t,n1,n2):
    val=t.val
    if n1>val and n2>val:
        anc(t.right,n1,n2)
    elif n1==val or n2==val:
        print(val)
    elif n1<val and n2<val:
        anc(t.left,n1,n2)
    else:
        print(val)



anc(t,1,3)

