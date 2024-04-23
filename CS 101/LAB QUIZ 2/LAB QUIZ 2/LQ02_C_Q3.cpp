#include <simplecpp>

struct Subset{
  int num;
  int items[30];
  double getVolume(double volume[]){
    double v = 0;
    for(int i = 0; i < num; i++){
      v += volume[items[i]];
    }
    return v;
  }
  double getMass(double mass[]){
    double m = 0;
    for(int i = 0; i < num; i++){
      m += mass[items[i]];
    }
    return m;
  }
  void insert(int item){
    items[num] = item;
    num++;
  }
  void print(double volume[], double mass[]){
    for(int i = 0; i < num; i++){
      cout <<items[i] << " ";
    }
    cout << "(" << getVolume(volume) << " " << getMass(mass) << ")";
  }
  void copy(Subset sub){
    num = sub.num;
    for(int i = 0; i < num; i++){
      items[i] = sub.items[i];
    }
  }

};

void getSubsets(Subset subsets[], int &numSubsets, double volume[], double mass[], int numItems, double max_volume){
  if(numItems == 0 || max_volume <= 0){
    numSubsets = 1;
    subsets[0].num = 0;
  }
  else{

    getSubsets(subsets, numSubsets, volume, mass, numItems - 1, max_volume);
    
    if(volume[numItems - 1] <= max_volume){
      Subset newSubsets[1500];
      int numNewSubsets;
      getSubsets(newSubsets, numNewSubsets, volume, mass, numItems - 1, max_volume - volume[numItems - 1]);
      for(int i = 0; i < numNewSubsets; i++){
	newSubsets[i].insert(numItems - 1);
      }
      
      for(int i = 0; i < numNewSubsets; i++){
	subsets[i + numSubsets].copy(newSubsets[i]);
      }
      numSubsets += numNewSubsets;
    }

  }

}


main_program{

  int numItems;
  double mass[30];
  double volume[30];
  double max_volume;
  cin >> numItems;

  for(int i = 0; i < numItems; i++){
    cin >> mass[i];
  }
  for(int i = 0; i < numItems; i++){
    cin >> volume[i];
  }
  cin >> max_volume;

  Subset subsets[1500];
  int numSubsets = 0;
  getSubsets(subsets, numSubsets, volume, mass, numItems, max_volume);
  //Assume at least one subset exists.

  int maxIndex = 0;
  for(int i = 1; i < numSubsets; i++){
    if(subsets[i].getMass(mass) > subsets[maxIndex].getMass(mass)){
      maxIndex = i;
    }
  }

  for(int i = 0; i < subsets[maxIndex].num; i++){
    cout << (subsets[maxIndex].items[i] + 1) << " ";
  }
  
}

