class Solution:
    def asteroidCollision(self, asteroids):
        stack = []

        for a in asteroids:
            while stack and stack[-1] > 0 and a < 0:
                
                if stack[-1] < -a:
                    stack.pop()
                    continue
                
                if stack[-1] == -a:
                    stack.pop()
                
                break
            
            else:
                stack.append(a)

        return stack