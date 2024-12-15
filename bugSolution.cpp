std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) { 
  // Accessing elements using [] which is faster and does not throw exceptions 
  int val = vec[i]; 
  // ... 
}

// safer code without at() 
std::vector<int> vec2(10); 
for (int i = 0; i < vec2.size(); ++i) { 
  int val = vec2[i]; // No exception here as long as i < vec2.size()
}
//Alternative safer code with at() and exception handling
try{
  for (int i = 0; i < 11; ++i){
    int val = vec2.at(i);
  }
} catch (const std::out_of_range& oor) {
  std::cerr << "Out of Range error: " << oor.what() << '\n';
}