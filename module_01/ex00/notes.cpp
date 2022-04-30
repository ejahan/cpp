Then, implement the two following functions:

    • Zombie* newZombie( std::string name );
It creates a zombie, name it, and return it so you can use it outside of the
function scope.

    • void randomChump( std::string name );
It creates a zombie, name it, and the zombie announces itself.

Now, what is the actual point of the exercise? You have to determine in what case
it s better to allocate the zombies on the stack or heap.
Zombies must be destroyed when you don t need them anymore. The destructor must
print a message with the name of the zombie for debugging purposes
