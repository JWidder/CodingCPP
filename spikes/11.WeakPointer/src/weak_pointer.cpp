https://iamsorush.com/posts/weak-pointer-cpp/

struct Person;

struct Team{
    shared_ptr<Person> goalKeeper;
    ~Team(){cout<<"Team destructed.";}
};
struct Person{
    weak_ptr<Team> team; // This line is changed.
    ~Person(){cout<<"Person destructed.";}
};

int main(){
    
    
    auto Barca = make_shared<Team>();
    auto Valdes = make_shared<Person>();
    
    Barca->goalKeeper = Valdes;
    Valdes->team = Barca;
    
    return 0;

}