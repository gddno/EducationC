#include <iostream>
using namespace std;


template <typename T>
struct Allocator {
    T* allocate(size_t n){
        return (T*)::operator new(sizeof(T) * n);
    }
    void deallocate(T* ptr, size_t /*count*/){
        ::operator delete(ptr);
    }
    template <typename... Types>
    void construct(T* ptr, const Types&... args){
        new(ptr) T(args...);
    }
    void destroy(T* ptr){
        ptr->~T();
    }
};






template <typename T, typename Alloc = std::allocator<T>>
class Vector {
    public:
    
    Vector(){
        array = new T[1];
        capacity = 1;
    }
    
    
    Vector(size_t n, const T& value, const Alloc& _alloc = Alloc()) : alloc(_alloc){
        array = new T[1];
        reserve(n);
        for (size_t i = 0; i < n; i++){
            array[i] = value;
        } 
    
        size = n;
    }
    
    
    
    size_t getSize(){
        return size;
    }
    size_t getCapacity(){
        return capacity;
    }
    
    void reserve(size_t n){
        if (n <= capacity) return;
       // T* newarr = new T[n] ;
       //T* newarr = reinterpret_cast<T*>(new char(sizeof(T) * n));
       //T* newarr  = (T*)::operator new(sizeof(T) * n);
       T* newarr  = alloc.allocate(n); 
       size_t i = 0;
       try{
           for (size_t i = 0; i < n; i++){
               alloc.construct(newarr + i, array[i]);
            //new(newarr + i) T(array[i]); // no understand all absolutle
           // newarr[i] = array[i];
        }
       }catch(...){
           for(size_t j = 0; j < i; i ++){
               alloc.destroy(newarr + i);
              // (newarr + i)->~T();
           }
           delete[] array;
           throw;
       }
        //delete
        for (size_t i = 0; i < size; i++){
            alloc.destroy(array + i);
            //(array + i) ->~T();
        }
        alloc.deallocate(array, n);
       // :: operator delete (array);
        //delete[] array;
        array = newarr;
        capacity = n;
    } 
    
    void resize(size_t n, const T& value = T()){
   if(n > capacity) reserve(n);
   for (size_t i = size; i < n; i++){
       alloc.construct(array + i, value);
       //array[i]= value;
   }
    size =n;
    }
    
    void push_back(const T&& value){
        if(capacity = size) reserve(2*size);
        //array[size++] = value;
        // ++size;
        alloc.construct(array + size, value);
        size++;
    }
    
    void pop_back(){
        --size;
    }
    T& operator[](size_t index){
        return array[index];
    }
    T& at(size_t index){
        if (index >= size){
            throw std::out_of_range("Mistake");       
            
        }
        return array[index];
    }
    private:
    T* array;
    size_t size = 0;
    size_t capacity = 0;
    Alloc alloc;
    
};

int main(){
    Vector<int, Allocator<int>> vec(2, 4, Allocator<int>());
    // cout << vec.getSize();
   // Vector<int> vec(2,3);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(1);
    
    
    
    for(size_t i = 0; i < vec.getSize(); i++){
        cout << vec[i] << endl;
    //   array[i]= value;
   }
//   try {
//       cout << vec.at(10) << endl;
//   } catch(std::exception& exc){
//       cout << exc.what() << endl;
//   }
system("pause");
    
    return 0;
}