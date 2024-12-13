class Vehicle:
    def speed(self):
        return "Speed of Vehicle 180km/hr"

class car(Vehicle):
    def speed(self):
        return "Speed of Car 100km/hr"

class Bike(Vehicle):
    def speed(self):
        return "speed of Bike 80km/hr"

class Train(Vehicle):
    def speed(self):
        return "Speed of Train 300km/hr"
    
def show_speed(vehicle):
    print(vehicle.speed())

BMW = car()
Honda = Bike()
Bullet = Train()

show_speed(BMW)
show_speed(Honda)
show_speed(Bullet)
