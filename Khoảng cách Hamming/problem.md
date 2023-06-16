Trên giờ Tin học Hermione được làm quen với một khái niệm khoảng cách mới – khoảng cách Hamming của các số thập phân. Khoảng cách Hamming giữa 2 số nguyên không âm x, y là số lượng các chữ số khác nhau trong dạng biểu diễn thập phân ở cùng một vị trí của 2 số. Nếu một số có ít chữ số hơn số kia thì bổ sung thêm các số 0 không có nghĩa để 2 số có cùng số lượng chữ số.

Ví dụ, x = 315, y = 245 thì khoảng cách Hamming h(x,y) = 2. Với x = 315, y = 3 có h(315, 3) = h(315, 003) = 3.

Hermione không có cảm tình lắm với khái niệm khoảng cách này, nhưng sớm hay muộn cũng phải làm bài tập với nó. Vì vậy Hermione quyết định tăng cường thêm khả năng mới cho đũa thần của mình: chỉ cần chỉ đũa thần vào 2 số a và b (a ≤ b) đũa thần sẽ cho biết ngay khoảng cách lớn nhất có thể đạt được giữa 2 số x và y thuộc đoạn [a, b]. Ví dụ, với a = 11, b = 17, kết quả sẽ là 1 (có thể chọn x = 11, y = 16). Sau một hồi chật vật, cuối cùng Hermione cũng hoàn thành xong việc huấn luyện.

Hãy xác định kết quả Hermione sẽ nhận được khi chỉ vào 2 số a và b.

Dữ liệu: Vào từ thiết bị nhập chuẩn gồm 2 dòng, dòng đầu tiên chứa số nguyên a, dòng thứ 2 chứa số nguyên b (1 ≤ a ≤ b ≤ 101 000 000).

Kết quả: Đưa ra thiết bị xuất chuẩn một số nguyên – khoảng cách lớn nhất tìm được.
