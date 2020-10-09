# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:

    def serialize(self, root: TreeNode) -> str:
        vals = []
        def preOrder(node):
            if node:
                vals.append(str(node.val))
                preOrder(node.left)
                preOrder(node.right)
        preOrder(root)
        return " ".join(vals)
        

    def deserialize(self, data: str) -> TreeNode:
        dq = deque(map(int,data.split()))
        def constructTree(min,max):
            if dq and min < dq[0] <max:
                val =  dq[0]
                node = TreeNode(val)
                dq.popleft()
                node.left = constructTree(min,val)
                node.right = constructTree(val,max)
                return node
        return constructTree(-11111,11111111)
            
                
        

# Your Codec object will be instantiated and called as such:
# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# tree = ser.serialize(root)
# ans = deser.deserialize(tree)
# return ans