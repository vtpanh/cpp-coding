#Stock Prices
In this problem we deal with the calculation of stock prices. You need to know the following things about stock prices:

The ask price is the lowest price at which someone is willing to sell a share of a stock.

The bid price is the highest price at which someone is willing to buy a share of a stock.

The stock price is the price at which the last deal was established.

Whenever the bid price is greater than or equal to the ask price, a deal is established. A buy order offering the bid price is matched with a sell order demanding the ask price, and shares are exchanged at the rate of the ask price until either the sell order or the buy order (or both) is fulfilled (i.e., the buyer wants no more stocks, or the seller wants to sell no more stocks). You will be given a list of orders (either buy or sell) and you have to calculate, after each order, the current ask price, bid price and stock price.

Input:
On the first line a positive integer: the number of test cases, at most 100. After that per test case:

One line with an integer n (1≤n≤1000): the number of orders.

n lines of the form “order_type x shares at y”, where order_type is either “buy” or “sell”, x (1≤x≤1000) is the number of shares of a stock someone wishes to buy or to sell, and y (1≤y≤1000) is the desired price.

Output
Per test case: n lines, each of the form “ai bi si”, where ai, bi and si are the current ask, bid and stock prices, respectively, after the i-th order has been processed and all possible deals have taken place. Whenever a price is not defined, output “-” instead of the price.

More details: https://open.kattis.com/problems/stockprices
