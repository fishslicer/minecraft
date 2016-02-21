
function move()
  --pick a random number and go that distance
  t = math.random(100)
  r = math.random(10) 
  stat = true 
  while t ~= 0 do
    if not turtle.detect() then
      turtle.forward()     
      t = t - 1
      r = r - 1
      if r == 0 then
        if stat == true then
          turtle.turnRight()
          stat = false
        else
          turtle.turnLeft()
          stat = true
         end
      end
    end
    if turtle.detect() then --if the turtle can't proceed
      if turtle.detectUp()  then
        turtle.turnRight()
      else
      while turtle.detect() do
        turtle.up()
      end
      turtle.forward()
       end
    end
    if not turtle.detectDown() then
      turtle.down()
     turtle.forward()
    end
    
    
  end
end
function build()
  local stone = 1
  for i = 0,2 do
    turtle.turnLeft()
    turtle.select(stone)
    turtle.place()
    turtle.turnRight()
    turtle.forward()
  end
  turtle.back()
  turtle.back()
  turtle.turnLeft()
  for i = 0,4 do
    turtle.place()
    turtle.up()
  end
  for i = 0,4 do
    turtle.down()
  end
end
while true do
  print("Building... ")
  build()
  print("Complete.")
  turtle.turnLeft()
  turtle.turnLeft()
  print("Preparing to Move... ") 
  move()
  print("Complete.")
end
