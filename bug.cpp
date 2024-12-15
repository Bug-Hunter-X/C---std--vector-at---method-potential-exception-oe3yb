std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) { 
  // Accessing elements using at() instead of [] 
  int val = vec.at(i); 
  // ... 
}

//Error prone code with at() method, throwing exceptions 
std::vector<int> vec2(10); 
for (int i = 0; i < 11; ++i) { 
  int val = vec2.at(i); // This will throw an exception when i >= 10
}