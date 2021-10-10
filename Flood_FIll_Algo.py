# Python3 implementation of the approach

# Function that returns true if
# the given pixel is valid
def isValid(screen, m, n, x, y, prevC, newC):
	if x<0 or x>= m\
	or y<0 or y>= n or\
	screen[x][y]!= prevC\
	or screen[x][y]== newC:
		return False
	return True


# FloodFill function
def floodFill(screen,
			m, n, x,
			y, prevC, newC):
	queue = []
	
	# Append the position of starting
	# pixel of the component
	queue.append([x, y])

	# Color the pixel with the new color
	screen[x][y] = newC

	# While the queue is not empty i.e. the
	# whole component having prevC color
	# is not colored with newC color
	while queue:
		
		# Dequeue the front node
		currPixel = queue.pop()
		
		posX = currPixel[0]
		posY = currPixel[1]
		
		# Check if the adjacent
		# pixels are valid
		if isValid(screen, m, n,
				posX + 1, posY,
						prevC, newC):
			
			# Color with newC
			# if valid and enqueue
			screen[posX + 1][posY] = newC
			queue.append([posX + 1, posY])
		
		if isValid(screen, m, n,
					posX-1, posY,
						prevC, newC):
			screen[posX-1][posY]= newC
			queue.append([posX-1, posY])
		
		if isValid(screen, m, n,
				posX, posY + 1,
						prevC, newC):
			screen[posX][posY + 1]= newC
			queue.append([posX, posY + 1])
		
		if isValid(screen, m, n,
					posX, posY-1,
						prevC, newC):
			screen[posX][posY-1]= newC
			queue.append([posX, posY-1])



# Driver code
screen =[
[1, 1, 1, 1, 1, 1, 1, 1],
[1, 1, 1, 1, 1, 1, 0, 0],
[1, 0, 0, 1, 1, 0, 1, 1],
[1, 2, 2, 2, 2, 0, 1, 0],
[1, 1, 1, 2, 2, 0, 1, 0],
[1, 1, 1, 2, 2, 2, 2, 0],
[1, 1, 1, 1, 1, 2, 1, 1],
[1, 1, 1, 1, 1, 2, 2, 1],
	]
	
# Row of the display
m = len(screen)

# Column of the display
n = len(screen[0])

# Co-ordinate provided by the user
x = 4
y = 4

# Current color at that co-ordinate
prevC = screen[x][y]

# New color that has to be filled
newC = 3

floodFill(screen, m, n, x, y, prevC, newC)


# Printing the updated screen
for i in range(m):
	for j in range(n):
		print(screen[i][j], end =' ')
	print()
