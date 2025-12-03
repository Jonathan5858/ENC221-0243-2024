class Roommate:
    def __init__(self, name, age, cleans_dishes, favorite_hobby):
        self.name = name
        self.age = age
        self.cleans_dishes = cleans_dishes
        self.favorite_hobby = favorite_hobby

    def introduce(self):
        print(f"My roomate's name is {self.name}. He is {self.age} years old "
              f"and his favorite hobby is {self.favorite_hobby}.")

    def describe_habits(self):
        if self.cleans_dishes:
            print(f"{self.name} usually cleans the dishes after meals.")
        else:
            print(f"{self.name} avoids doing dishes whenever possible.")
r = Roommate("Ferguson", 20, False, "playing football")
r.introduce()
r.describe_habits()
