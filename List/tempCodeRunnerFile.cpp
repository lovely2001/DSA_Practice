  auto itrr = numbers.begin();
    advance(itrr,2);
    numbers.insert(itrr,10);
    for(auto num:numbers){
        cout<<num<<" ";
    }cout<<endl;