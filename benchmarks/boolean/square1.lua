
g = GModel()
v1 = g:addVertex(0, 0, 0, 1)
v2 = g:addVertex(1, 0, 0, 1)
v3 = g:addVertex(1, 1, 0, 1)
v4 = g:addVertex(0, 1, 0, 1)
e1 = g:addLine(v1, v2)
e2 = g:addLine(v2, v3)
e3 = g:addLine(v3, v4)
e4 = g:addLine(v4, v1)

