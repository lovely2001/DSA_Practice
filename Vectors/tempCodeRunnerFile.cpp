vector<int> frequency(size,0);
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
        frequency[v[i]]++;
    }

    for(int i=0;i<size;i++){
        if(frequency[i]==1){
            cout<<i<<endl;
        }
    }