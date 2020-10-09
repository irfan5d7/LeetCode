# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:

    def serialize(self, root):
        vals = []
        def preOrder(node):
            if node:
                vals.append(str(node.val))
                preOrder(node.left)
                preOrder(node.right)
            else:
                vals.append("-")
        preOrder(root)
        return " ".join(vals)
        

    def deserialize(self, data):
        dq = deque(data.split())
        def constructTree():
            if dq and dq[0]!="-":
                val =  int(dq[0])
                dq.popleft()
                node = TreeNode(val)
                node.left = constructTree()
                node.right = constructTree()
                return node
            elif dq[0] == "-":
                dq.popleft()
                return None
        return constructTree()
        

# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))