import turtle
t = turtle.Turtle()
screen = turtle.Screen()
screen.screensize(600,500)
screen.bgcolor('black')
turtle.colormode(255)
t.ht()
t.speed(10)
x = 0
r = 255
g = 0
b = 0

while x < 2000:
    tup = (r, g, b)
    t.pencolor(tup)
    if r == 255 and g < 255 and b == 0:
        g += 1
    elif r > 0 and g == 255 and b == 0:
        r -= 1
    elif r == 0 and g == 255 and b < 255:
        b += 1
    elif r == 0 and g > 0 and b == 255:
        g -= 1
    elif r < 255 and g == 0 and b == 255:
        r += 1
    elif r == 255 and g == 0 and b > 0:
        b -= 1



    t.fd(x)
    t.right(122)

    x = x + 1
turtle.done()
