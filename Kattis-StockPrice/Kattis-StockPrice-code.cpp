#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
    	int  trades;
    	cin >> trades;
    	string type, garb;
    	int  numShares, priceShares;
    	int  tradePrice = -1;
    	map<int, int, greater<int>> buyPrices;
    	map<int, int> sellPrices;
    	for(int j = 0; j < trades; j++)
    	{
    		cin >> type >> numShares >> garb >> garb >> priceShares;

    		if(type == "buy")
    			buyPrices[priceShares] += numShares;
    		else
    			sellPrices[priceShares] += numShares;

    		while(buyPrices.size() && sellPrices.size() && buyPrices.begin()->first >= sellPrices.begin()->first)
    		{
    			tradePrice = sellPrices.begin()->first;
    			int transactionAmount = min(sellPrices.begin()->second, buyPrices.begin()->second);

    			sellPrices.begin()->second -= transactionAmount;

    			if(sellPrices.begin()->second == 0)
    				sellPrices.erase(sellPrices.begin());

    			buyPrices.begin()->second -= transactionAmount;

    			if(buyPrices.begin()->second == 0)
    				buyPrices.erase(buyPrices.begin());
    		}

    		if(sellPrices.size())
                cout << sellPrices.begin()->first << " ";
    		else
    			cout << "-" << " ";

    		if(buyPrices.size())
    			cout << buyPrices.begin()->first << " ";
    		else
    			cout << "-" << " ";

    		if(tradePrice != -1)
    			cout << tradePrice << " ";
    		else
    			cout << "-" << " ";

    		cout << "\n";
    	}
    }
    return 0;
}
