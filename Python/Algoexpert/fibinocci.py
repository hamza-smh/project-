def getNthFib(n):
    F = [i]
    i = 0
    a = 0
       while a < n:
         if a < 1:
             F.insert(0,a)
             a = a + 1
         else:
              a = 1
              F.insert(0, a)
         a = a + 1
       b = F[0] + F[1]
       print(F)
print(getNthFib(3))

