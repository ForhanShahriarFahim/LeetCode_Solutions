class ProductOfNumbers {
public:
    vector<long long>prefixProduct;
    ProductOfNumbers() {
        prefixProduct.push_back(1);
    }
    
    void add(int num) {
        if(num == 0) {
            prefixProduct.clear();
            prefixProduct.push_back(1);
        }else {
            prefixProduct.push_back(prefixProduct.back() * num);
        }
    }
    
    int getProduct(int k) {
        int size = prefixProduct.size();
        if(k>=size) return 0;
        return prefixProduct[size - 1] / prefixProduct[size - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */